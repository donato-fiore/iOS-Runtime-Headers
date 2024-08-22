// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SISCHEMAABSEVEREVENTMETADATA_H
#define SISCHEMAABSEVEREVENTMETADATA_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface SISchemaABSeverEventMetadata : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasSiriDeviceId; // ivar: _hasSiriDeviceId
@property (nonatomic) BOOL hasSpeechId; // ivar: _hasSpeechId
@property (nonatomic) BOOL hasTimestampNs;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *siriDeviceId; // ivar: _siriDeviceId
@property (retain, nonatomic) SISchemaUUID *speechId; // ivar: _speechId
@property (nonatomic) NSInteger timestampNs; // ivar: _timestampNs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteSiriDeviceId;
-(void)deleteSpeechId;
-(void)deleteTimestampNs;
-(void)writeTo:(id)arg0 ;


@end


#endif