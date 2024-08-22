// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SISCHEMACLIENTEVENTMETADATA_H
#define SISCHEMACLIENTEVENTMETADATA_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaClientEventMetadata : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) NSInteger eventGeneratedRelativeToBootTimeTimestampNs; // ivar: _eventGeneratedRelativeToBootTimeTimestampNs
@property (copy, nonatomic) NSString *eventGeneratedTimestampRefId; // ivar: _eventGeneratedTimestampRefId
@property (nonatomic) BOOL hasEventGeneratedRelativeToBootTimeTimestampNs;
@property (nonatomic) BOOL hasEventGeneratedTimestampRefId; // ivar: _hasEventGeneratedTimestampRefId
@property (nonatomic) BOOL hasSiriDeviceID; // ivar: _hasSiriDeviceID
@property (nonatomic) BOOL hasTurnID; // ivar: _hasTurnID
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSData *siriDeviceID; // ivar: _siriDeviceID
@property (copy, nonatomic) NSData *turnID; // ivar: _turnID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteEventGeneratedRelativeToBootTimeTimestampNs;
-(void)deleteEventGeneratedTimestampRefId;
-(void)deleteSiriDeviceID;
-(void)deleteTurnID;
-(void)willProduceDictionaryRepresentation:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif