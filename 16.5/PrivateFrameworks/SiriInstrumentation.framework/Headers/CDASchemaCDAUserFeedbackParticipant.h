// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDASCHEMACDAUSERFEEDBACKPARTICIPANT_H
#define CDASCHEMACDAUSERFEEDBACKPARTICIPANT_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"
#import "CDASchemaCDAScoreBoosters.h"

@interface CDASchemaCDAUserFeedbackParticipant : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int alarmState; // ivar: _alarmState
@property (retain, nonatomic) SISchemaUUID *cdaId; // ivar: _cdaId
@property (nonatomic) int decision; // ivar: _decision
@property (nonatomic) CGFloat granularBoostDecay; // ivar: _granularBoostDecay
@property (nonatomic) unsigned int granularBoostValue; // ivar: _granularBoostValue
@property (retain, nonatomic) SISchemaUUID *halTargetSiriSpeechId; // ivar: _halTargetSiriSpeechId
@property (nonatomic) BOOL hasAlarmState;
@property (nonatomic) BOOL hasCdaId; // ivar: _hasCdaId
@property (nonatomic) BOOL hasDecision;
@property (nonatomic) BOOL hasGranularBoostDecay;
@property (nonatomic) BOOL hasGranularBoostValue;
@property (nonatomic) BOOL hasHalTargetSiriSpeechId; // ivar: _hasHalTargetSiriSpeechId
@property (nonatomic) BOOL hasMediaState;
@property (nonatomic) BOOL hasPsdScore;
@property (nonatomic) BOOL hasRawGoodnessScore;
@property (nonatomic) BOOL hasRequestId; // ivar: _hasRequestId
@property (nonatomic) BOOL hasRoomNameHash; // ivar: _hasRoomNameHash
@property (nonatomic) BOOL hasScoreBoosters; // ivar: _hasScoreBoosters
@property (nonatomic) BOOL hasSiriSpeechId; // ivar: _hasSiriSpeechId
@property (nonatomic) BOOL hasTimeSinceLastWinInMilliseconds;
@property (nonatomic) BOOL hasTimeSinceTriggerInMilliseconds;
@property (nonatomic) BOOL hasTimerState;
@property (nonatomic) BOOL hasTriggerType;
@property (nonatomic) BOOL hasTrumpReason;
@property (nonatomic) BOOL hasVoiceTriggerTimeNS;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int mediaState; // ivar: _mediaState
@property (nonatomic) unsigned int psdScore; // ivar: _psdScore
@property (nonatomic) unsigned int rawGoodnessScore; // ivar: _rawGoodnessScore
@property (retain, nonatomic) SISchemaUUID *requestId; // ivar: _requestId
@property (copy, nonatomic) NSString *roomNameHash; // ivar: _roomNameHash
@property (retain, nonatomic) CDASchemaCDAScoreBoosters *scoreBoosters; // ivar: _scoreBoosters
@property (retain, nonatomic) SISchemaUUID *siriSpeechId; // ivar: _siriSpeechId
@property (nonatomic) NSUInteger timeSinceLastWinInMilliseconds; // ivar: _timeSinceLastWinInMilliseconds
@property (nonatomic) NSUInteger timeSinceTriggerInMilliseconds; // ivar: _timeSinceTriggerInMilliseconds
@property (nonatomic) int timerState; // ivar: _timerState
@property (nonatomic) int triggerType; // ivar: _triggerType
@property (nonatomic) int trumpReason; // ivar: _trumpReason
@property (nonatomic) NSUInteger voiceTriggerTimeNS; // ivar: _voiceTriggerTimeNS


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAlarmState;
-(void)deleteCdaId;
-(void)deleteDecision;
-(void)deleteGranularBoostDecay;
-(void)deleteGranularBoostValue;
-(void)deleteHalTargetSiriSpeechId;
-(void)deleteMediaState;
-(void)deletePsdScore;
-(void)deleteRawGoodnessScore;
-(void)deleteRequestId;
-(void)deleteRoomNameHash;
-(void)deleteScoreBoosters;
-(void)deleteSiriSpeechId;
-(void)deleteTimeSinceLastWinInMilliseconds;
-(void)deleteTimeSinceTriggerInMilliseconds;
-(void)deleteTimerState;
-(void)deleteTriggerType;
-(void)deleteTrumpReason;
-(void)deleteVoiceTriggerTimeNS;
-(void)writeTo:(id)arg0 ;


@end


#endif