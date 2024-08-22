// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IASCHEMAIAVOICETRIGGEREVENTSUMMARY_H
#define IASCHEMAIAVOICETRIGGEREVENTSUMMARY_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface IASchemaIAVoiceTriggerEventSummary : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) NSUInteger firstPassDetectionTimestampInSec; // ivar: _firstPassDetectionTimestampInSec
@property (nonatomic) float firstPassPeakScoreHS; // ivar: _firstPassPeakScoreHS
@property (nonatomic) float firstPassPeakScoreJS; // ivar: _firstPassPeakScoreJS
@property (nonatomic) BOOL hasAppIntentEvent; // ivar: _hasAppIntentEvent
@property (nonatomic) BOOL hasAppLaunchEvent; // ivar: _hasAppLaunchEvent
@property (nonatomic) BOOL hasDeviceUnlockEvent; // ivar: _hasDeviceUnlockEvent
@property (nonatomic) BOOL hasFirstPassDetectionTimestampInSec;
@property (nonatomic) BOOL hasFirstPassPeakScoreHS;
@property (nonatomic) BOOL hasFirstPassPeakScoreJS;
@property (nonatomic) BOOL hasHasAppIntentEvent;
@property (nonatomic) BOOL hasHasAppLaunchEvent;
@property (nonatomic) BOOL hasHasDeviceUnlockEvent;
@property (nonatomic) BOOL hasHasNextRejection;
@property (nonatomic) BOOL hasHasNextTurn;
@property (nonatomic) BOOL hasHasTextInputEvent;
@property (nonatomic) BOOL hasInvocationTypeId;
@property (nonatomic) BOOL hasIsNextTurnValid;
@property (nonatomic) BOOL hasMitigationScore;
@property (nonatomic) BOOL hasMitigationScoreThreshold;
@property (nonatomic) BOOL hasNextRejection; // ivar: _hasNextRejection
@property (nonatomic) BOOL hasNextTurn; // ivar: _hasNextTurn
@property (nonatomic) BOOL hasNextTurnId; // ivar: _hasNextTurnId
@property (nonatomic) BOOL hasNextTurnInvocationSource;
@property (nonatomic) BOOL hasRepetitionSimilarityScore;
@property (nonatomic) BOOL hasTdSpeakerRecognizerCombinedScore;
@property (nonatomic) BOOL hasTdSpeakerRecognizerCombinedThreshold;
@property (nonatomic) BOOL hasTextInputEvent; // ivar: _hasTextInputEvent
@property (nonatomic) BOOL hasTimeDeltaToAppIntentEventInSec;
@property (nonatomic) BOOL hasTimeDeltaToAppLaunchInSec;
@property (nonatomic) BOOL hasTimeDeltaToDeviceUnlockInSec;
@property (nonatomic) BOOL hasTimeDeltaToNextRejectionInSec;
@property (nonatomic) BOOL hasTimeDeltaToNextTurnInSec;
@property (nonatomic) BOOL hasTimeDeltaToTextInputInSec;
@property (nonatomic) BOOL hasTriggerScoreHS;
@property (nonatomic) BOOL hasTriggerScoreHSThreshold;
@property (nonatomic) BOOL hasTriggerScoreJS;
@property (nonatomic) BOOL hasTriggerScoreJSThreshold;
@property (nonatomic) BOOL hasUserActionTimeThreshold;
@property (nonatomic) BOOL hasVoiceTriggerConfigVersion; // ivar: _hasVoiceTriggerConfigVersion
@property (nonatomic) unsigned int invocationTypeId; // ivar: _invocationTypeId
@property (nonatomic) BOOL isNextTurnValid; // ivar: _isNextTurnValid
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) float mitigationScore; // ivar: _mitigationScore
@property (nonatomic) float mitigationScoreThreshold; // ivar: _mitigationScoreThreshold
@property (retain, nonatomic) SISchemaUUID *nextTurnId; // ivar: _nextTurnId
@property (nonatomic) unsigned int nextTurnInvocationSource; // ivar: _nextTurnInvocationSource
@property (nonatomic) float repetitionSimilarityScore; // ivar: _repetitionSimilarityScore
@property (nonatomic) float tdSpeakerRecognizerCombinedScore; // ivar: _tdSpeakerRecognizerCombinedScore
@property (nonatomic) float tdSpeakerRecognizerCombinedThreshold; // ivar: _tdSpeakerRecognizerCombinedThreshold
@property (nonatomic) float timeDeltaToAppIntentEventInSec; // ivar: _timeDeltaToAppIntentEventInSec
@property (nonatomic) float timeDeltaToAppLaunchInSec; // ivar: _timeDeltaToAppLaunchInSec
@property (nonatomic) float timeDeltaToDeviceUnlockInSec; // ivar: _timeDeltaToDeviceUnlockInSec
@property (nonatomic) float timeDeltaToNextRejectionInSec; // ivar: _timeDeltaToNextRejectionInSec
@property (nonatomic) float timeDeltaToNextTurnInSec; // ivar: _timeDeltaToNextTurnInSec
@property (nonatomic) float timeDeltaToTextInputInSec; // ivar: _timeDeltaToTextInputInSec
@property (nonatomic) float triggerScoreHS; // ivar: _triggerScoreHS
@property (nonatomic) float triggerScoreHSThreshold; // ivar: _triggerScoreHSThreshold
@property (nonatomic) float triggerScoreJS; // ivar: _triggerScoreJS
@property (nonatomic) float triggerScoreJSThreshold; // ivar: _triggerScoreJSThreshold
@property (nonatomic) float userActionTimeThreshold; // ivar: _userActionTimeThreshold
@property (copy, nonatomic) NSString *voiceTriggerConfigVersion; // ivar: _voiceTriggerConfigVersion


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteFirstPassDetectionTimestampInSec;
-(void)deleteFirstPassPeakScoreHS;
-(void)deleteFirstPassPeakScoreJS;
-(void)deleteHasAppIntentEvent;
-(void)deleteHasAppLaunchEvent;
-(void)deleteHasDeviceUnlockEvent;
-(void)deleteHasNextRejection;
-(void)deleteHasNextTurn;
-(void)deleteHasTextInputEvent;
-(void)deleteInvocationTypeId;
-(void)deleteIsNextTurnValid;
-(void)deleteMitigationScore;
-(void)deleteMitigationScoreThreshold;
-(void)deleteNextTurnId;
-(void)deleteNextTurnInvocationSource;
-(void)deleteRepetitionSimilarityScore;
-(void)deleteTdSpeakerRecognizerCombinedScore;
-(void)deleteTdSpeakerRecognizerCombinedThreshold;
-(void)deleteTimeDeltaToAppIntentEventInSec;
-(void)deleteTimeDeltaToAppLaunchInSec;
-(void)deleteTimeDeltaToDeviceUnlockInSec;
-(void)deleteTimeDeltaToNextRejectionInSec;
-(void)deleteTimeDeltaToNextTurnInSec;
-(void)deleteTimeDeltaToTextInputInSec;
-(void)deleteTriggerScoreHS;
-(void)deleteTriggerScoreHSThreshold;
-(void)deleteTriggerScoreJS;
-(void)deleteTriggerScoreJSThreshold;
-(void)deleteUserActionTimeThreshold;
-(void)deleteVoiceTriggerConfigVersion;
-(void)writeTo:(id)arg0 ;


@end


#endif