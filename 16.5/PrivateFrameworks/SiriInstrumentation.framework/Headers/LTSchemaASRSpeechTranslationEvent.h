// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LTSCHEMAASRSPEECHTRANSLATIONEVENT_H
#define LTSCHEMAASRSPEECHTRANSLATIONEVENT_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface LTSchemaASRSpeechTranslationEvent : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasLatencyFinalResultMs;
@property (nonatomic) BOOL hasNumAudioPacket;
@property (nonatomic) BOOL hasRequestID; // ivar: _hasRequestID
@property (nonatomic) BOOL hasSelectedLocale; // ivar: _hasSelectedLocale
@property (nonatomic) BOOL hasTimeToFinalResultMs;
@property (nonatomic) BOOL hasTimeToFirstPartialMs;
@property (nonatomic) BOOL hasTimeToReceiveFirstAudioPacket;
@property (nonatomic) BOOL hasTimeToSendFinishAudio;
@property (nonatomic) BOOL hasTimeToSendFirstAudioPacket;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int latencyFinalResultMs; // ivar: _latencyFinalResultMs
@property (nonatomic) unsigned int numAudioPacket; // ivar: _numAudioPacket
@property (copy, nonatomic) NSString *requestID; // ivar: _requestID
@property (copy, nonatomic) NSString *selectedLocale; // ivar: _selectedLocale
@property (nonatomic) unsigned int timeToFinalResultMs; // ivar: _timeToFinalResultMs
@property (nonatomic) unsigned int timeToFirstPartialMs; // ivar: _timeToFirstPartialMs
@property (nonatomic) unsigned int timeToReceiveFirstAudioPacket; // ivar: _timeToReceiveFirstAudioPacket
@property (nonatomic) unsigned int timeToSendFinishAudio; // ivar: _timeToSendFinishAudio
@property (nonatomic) unsigned int timeToSendFirstAudioPacket; // ivar: _timeToSendFirstAudioPacket


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteLatencyFinalResultMs;
-(void)deleteNumAudioPacket;
-(void)deleteRequestID;
-(void)deleteSelectedLocale;
-(void)deleteTimeToFinalResultMs;
-(void)deleteTimeToFirstPartialMs;
-(void)deleteTimeToReceiveFirstAudioPacket;
-(void)deleteTimeToSendFinishAudio;
-(void)deleteTimeToSendFirstAudioPacket;
-(void)writeTo:(id)arg0 ;


@end


#endif