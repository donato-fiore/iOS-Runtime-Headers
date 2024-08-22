// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DHTSCHEMADHTDELETETRIGGER_H
#define DHTSCHEMADHTDELETETRIGGER_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface DHTSchemaDHTDeleteTrigger : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) NSUInteger deleteTimestampMs; // ivar: _deleteTimestampMs
@property (nonatomic) int deletionTriggerEvent; // ivar: _deletionTriggerEvent
@property (nonatomic) BOOL hasDeleteTimestampMs;
@property (nonatomic) BOOL hasDeletionTriggerEvent;
@property (nonatomic) BOOL hasId; // ivar: _hasId
@property (nonatomic) BOOL hasSiriDeviceId; // ivar: _hasSiriDeviceId
@property (nonatomic) BOOL hasSpeechId; // ivar: _hasSpeechId
@property (retain, nonatomic) SISchemaUUID *id; // ivar: _id
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *siriDeviceId; // ivar: _siriDeviceId
@property (retain, nonatomic) SISchemaUUID *speechId; // ivar: _speechId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteDeleteTimestampMs;
-(void)deleteDeletionTriggerEvent;
-(void)deleteId;
-(void)deleteSiriDeviceId;
-(void)deleteSpeechId;
-(void)writeTo:(id)arg0 ;


@end


#endif