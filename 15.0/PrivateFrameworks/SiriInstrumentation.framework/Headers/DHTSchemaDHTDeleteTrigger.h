// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DHTSCHEMADHTDELETETRIGGER_H
#define DHTSCHEMADHTDELETETRIGGER_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface DHTSchemaDHTDeleteTrigger : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) NSUInteger deleteTimestampMs; // ivar: _deleteTimestampMs
@property (nonatomic) BOOL hasDeleteTimestampMs;
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
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif