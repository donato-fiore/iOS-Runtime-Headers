// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSESCHEMAPSECLIENTEVENTMETADATA_H
#define PSESCHEMAPSECLIENTEVENTMETADATA_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface PSESchemaPSEClientEventMetadata : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasOriginalLastRequestId; // ivar: _hasOriginalLastRequestId
@property (nonatomic) BOOL hasSiriEngagementTaskSuccess;
@property (nonatomic) BOOL hasUiSessionId; // ivar: _hasUiSessionId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *originalLastRequestId; // ivar: _originalLastRequestId
@property (nonatomic) int siriEngagementTaskSuccess; // ivar: _siriEngagementTaskSuccess
@property (retain, nonatomic) SISchemaUUID *uiSessionId; // ivar: _uiSessionId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteOriginalLastRequestId;
-(void)deleteSiriEngagementTaskSuccess;
-(void)deleteUiSessionId;
-(void)writeTo:(id)arg0 ;


@end


#endif