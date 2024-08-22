// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMAREQUESTLINKINFO_H
#define SISCHEMAREQUESTLINKINFO_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface SISchemaRequestLinkInfo : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int component; // ivar: _component
@property (nonatomic) BOOL hasComponent;
@property (nonatomic) BOOL hasUuid; // ivar: _hasUuid
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteComponent;
-(void)deleteUuid;
-(void)writeTo:(id)arg0 ;


@end


#endif