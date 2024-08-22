// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MHSCHEMAMHVOICETRIGGEREVENTINFO_H
#define MHSCHEMAMHVOICETRIGGEREVENTINFO_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface MHSchemaMHVoiceTriggerEventInfo : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int activeChannel; // ivar: _activeChannel
@property (nonatomic) NSUInteger analyzerPrependingSamples; // ivar: _analyzerPrependingSamples
@property (nonatomic) NSUInteger analyzerTrailingSamples; // ivar: _analyzerTrailingSamples
@property (retain, nonatomic) SISchemaUUID *audioProviderUUID; // ivar: _audioProviderUUID
@property (nonatomic) int biometricClue; // ivar: _biometricClue
@property (copy, nonatomic) NSString *captureFilePath; // ivar: _captureFilePath
@property (nonatomic) NSUInteger clientStartSampleCount; // ivar: _clientStartSampleCount
@property (copy, nonatomic) NSString *configDataHash; // ivar: _configDataHash
@property (copy, nonatomic) NSString *configPath; // ivar: _configPath
@property (copy, nonatomic) NSString *configVersion; // ivar: _configVersion
@property (nonatomic) float cumulativeDowntimeInSec; // ivar: _cumulativeDowntimeInSec
@property (nonatomic) float cumulativeUptimeInSec; // ivar: _cumulativeUptimeInSec
@property (nonatomic) NSUInteger deltaTimeInNsFromlastPHSReject; // ivar: _deltaTimeInNsFromlastPHSReject
@property (nonatomic) BOOL deviceHandheld; // ivar: _deviceHandheld
@property (nonatomic) BOOL didWakeAP; // ivar: _didWakeAP
@property (nonatomic) float downtimeInSec; // ivar: _downtimeInSec
@property (nonatomic) float effectiveThreshold; // ivar: _effectiveThreshold
@property (nonatomic) int enhancedCarplayTriggerMode; // ivar: _enhancedCarplayTriggerMode
@property (nonatomic) NSUInteger extraSamplesAtStart; // ivar: _extraSamplesAtStart
@property (nonatomic) unsigned int hardwareSamplerate; // ivar: _hardwareSamplerate
@property (nonatomic) BOOL hasActiveChannel;
@property (nonatomic) BOOL hasAnalyzerPrependingSamples;
@property (nonatomic) BOOL hasAnalyzerTrailingSamples;
@property (nonatomic) BOOL hasAudioProviderUUID; // ivar: _hasAudioProviderUUID
@property (nonatomic) BOOL hasBiometricClue;
@property (nonatomic) BOOL hasCaptureFilePath; // ivar: _hasCaptureFilePath
@property (nonatomic) BOOL hasClientStartSampleCount;
@property (nonatomic) BOOL hasConfigDataHash; // ivar: _hasConfigDataHash
@property (nonatomic) BOOL hasConfigPath; // ivar: _hasConfigPath
@property (nonatomic) BOOL hasConfigVersion; // ivar: _hasConfigVersion
@property (nonatomic) BOOL hasCumulativeDowntimeInSec;
@property (nonatomic) BOOL hasCumulativeUptimeInSec;
@property (nonatomic) BOOL hasDeltaTimeInNsFromlastPHSReject;
@property (nonatomic) BOOL hasDeviceHandheld;
@property (nonatomic) BOOL hasDidWakeAP;
@property (nonatomic) BOOL hasDowntimeInSec;
@property (nonatomic) BOOL hasEffectiveThreshold;
@property (nonatomic) BOOL hasEnhancedCarplayTriggerMode;
@property (nonatomic) BOOL hasExtraSamplesAtStart;
@property (nonatomic) BOOL hasHardwareSamplerate;
@property (nonatomic) BOOL hasHostPowerStateAtTrigger;
@property (nonatomic) BOOL hasIsContinuous;
@property (nonatomic) BOOL hasIsMaximized;
@property (nonatomic) BOOL hasIsMediaPlaying;
@property (nonatomic) BOOL hasIsSecondChance;
@property (nonatomic) BOOL hasIsTriggerEvent;
@property (nonatomic) BOOL hasLastConsecutivePHSRejects;
@property (nonatomic) BOOL hasLastConsecutiveVTRejects;
@property (nonatomic) BOOL hasMediaVolume;
@property (nonatomic) BOOL hasOnBatteryPower;
@property (nonatomic) BOOL hasRecognizerScaleFactor;
@property (nonatomic) BOOL hasRecognizerScore;
@property (nonatomic) BOOL hasRecognizerThresholdOffset;
@property (nonatomic) BOOL hasRecognizerWaitTimeInNs;
@property (nonatomic) BOOL hasRemoteMicVADMyriadThreshold;
@property (nonatomic) BOOL hasRemoteMicVADScore;
@property (nonatomic) BOOL hasRemoteMicVADThreshold;
@property (nonatomic) BOOL hasSatBeingTrained;
@property (nonatomic) BOOL hasSatNumTrainingUtterances;
@property (nonatomic) BOOL hasSatScore;
@property (nonatomic) BOOL hasSatThreshold;
@property (nonatomic) BOOL hasSatTriggered;
@property (nonatomic) BOOL hasSecondPassAnalyerEndSampleCount;
@property (nonatomic) BOOL hasSecondPassAnalyerStartSampleCount;
@property (nonatomic) BOOL hasShadowMicScore;
@property (nonatomic) BOOL hasShadowMicScoreThresholdForVAD;
@property (nonatomic) BOOL hasSiriIsActiveOrOtherAssertion;
@property (nonatomic) BOOL hasTdSpeakerRecognizerCombinationWeight;
@property (nonatomic) BOOL hasTdSpeakerRecognizerCombinedScore;
@property (nonatomic) BOOL hasTdSpeakerRecognizerCombinedThreshold;
@property (nonatomic) BOOL hasTdSpeakerRecognizerScore;
@property (nonatomic) BOOL hasThreshold;
@property (nonatomic) BOOL hasTotalSampleCount;
@property (nonatomic) BOOL hasTotalSamplesAtEndOfCapture;
@property (nonatomic) BOOL hasTotalSamplesAtTriggerEnd;
@property (nonatomic) BOOL hasTotalSamplesAtTriggerStart;
@property (nonatomic) BOOL hasTriggerDurationInNs;
@property (nonatomic) BOOL hasTriggerEndNs;
@property (nonatomic) BOOL hasTriggerEndSampleCount;
@property (nonatomic) BOOL hasTriggerEndTime;
@property (nonatomic) BOOL hasTriggerEndTimeOffsetInNs;
@property (nonatomic) BOOL hasTriggerExplicitSatScore;
@property (nonatomic) BOOL hasTriggerExplicitTDSRSatScore;
@property (nonatomic) BOOL hasTriggerFireNs;
@property (nonatomic) BOOL hasTriggerFireSampleCount;
@property (nonatomic) BOOL hasTriggerFireTimeOffsetInNs;
@property (nonatomic) BOOL hasTriggerFiredTime;
@property (nonatomic) BOOL hasTriggerScore;
@property (nonatomic) BOOL hasTriggerStartNs;
@property (nonatomic) BOOL hasTriggerStartSampleCount;
@property (nonatomic) BOOL hasTriggerStartTime;
@property (nonatomic) BOOL hasTriggerStartTimeOffsetInNs;
@property (nonatomic) BOOL hasTwoShotAudibleFeedbackDelayInNs;
@property (nonatomic) BOOL hasUptimeInSec;
@property (nonatomic) int hostPowerStateAtTrigger; // ivar: _hostPowerStateAtTrigger
@property (nonatomic) BOOL isContinuous; // ivar: _isContinuous
@property (nonatomic) BOOL isMaximized; // ivar: _isMaximized
@property (nonatomic) BOOL isMediaPlaying; // ivar: _isMediaPlaying
@property (nonatomic) BOOL isSecondChance; // ivar: _isSecondChance
@property (nonatomic) BOOL isTriggerEvent; // ivar: _isTriggerEvent
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int lastConsecutivePHSRejects; // ivar: _lastConsecutivePHSRejects
@property (nonatomic) unsigned int lastConsecutiveVTRejects; // ivar: _lastConsecutiveVTRejects
@property (nonatomic) float mediaVolume; // ivar: _mediaVolume
@property (nonatomic) BOOL onBatteryPower; // ivar: _onBatteryPower
@property (nonatomic) float recognizerScaleFactor; // ivar: _recognizerScaleFactor
@property (nonatomic) float recognizerScore; // ivar: _recognizerScore
@property (nonatomic) float recognizerThresholdOffset; // ivar: _recognizerThresholdOffset
@property (nonatomic) NSUInteger recognizerWaitTimeInNs; // ivar: _recognizerWaitTimeInNs
@property (nonatomic) float remoteMicVADMyriadThreshold; // ivar: _remoteMicVADMyriadThreshold
@property (nonatomic) float remoteMicVADScore; // ivar: _remoteMicVADScore
@property (nonatomic) float remoteMicVADThreshold; // ivar: _remoteMicVADThreshold
@property (nonatomic) BOOL satBeingTrained; // ivar: _satBeingTrained
@property (nonatomic) unsigned int satNumTrainingUtterances; // ivar: _satNumTrainingUtterances
@property (nonatomic) float satScore; // ivar: _satScore
@property (nonatomic) float satThreshold; // ivar: _satThreshold
@property (nonatomic) BOOL satTriggered; // ivar: _satTriggered
@property (nonatomic) NSUInteger secondPassAnalyerEndSampleCount; // ivar: _secondPassAnalyerEndSampleCount
@property (nonatomic) NSUInteger secondPassAnalyerStartSampleCount; // ivar: _secondPassAnalyerStartSampleCount
@property (nonatomic) float shadowMicScore; // ivar: _shadowMicScore
@property (nonatomic) float shadowMicScoreThresholdForVAD; // ivar: _shadowMicScoreThresholdForVAD
@property (nonatomic) BOOL siriIsActiveOrOtherAssertion; // ivar: _siriIsActiveOrOtherAssertion
@property (nonatomic) float tdSpeakerRecognizerCombinationWeight; // ivar: _tdSpeakerRecognizerCombinationWeight
@property (nonatomic) float tdSpeakerRecognizerCombinedScore; // ivar: _tdSpeakerRecognizerCombinedScore
@property (nonatomic) float tdSpeakerRecognizerCombinedThreshold; // ivar: _tdSpeakerRecognizerCombinedThreshold
@property (nonatomic) float tdSpeakerRecognizerScore; // ivar: _tdSpeakerRecognizerScore
@property (nonatomic) float threshold; // ivar: _threshold
@property (nonatomic) NSUInteger totalSampleCount; // ivar: _totalSampleCount
@property (nonatomic) NSUInteger totalSamplesAtEndOfCapture; // ivar: _totalSamplesAtEndOfCapture
@property (nonatomic) NSUInteger totalSamplesAtTriggerEnd; // ivar: _totalSamplesAtTriggerEnd
@property (nonatomic) NSUInteger totalSamplesAtTriggerStart; // ivar: _totalSamplesAtTriggerStart
@property (nonatomic) float triggerDurationInNs; // ivar: _triggerDurationInNs
@property (nonatomic) NSUInteger triggerEndNs; // ivar: _triggerEndNs
@property (nonatomic) NSUInteger triggerEndSampleCount; // ivar: _triggerEndSampleCount
@property (nonatomic) CGFloat triggerEndTime; // ivar: _triggerEndTime
@property (nonatomic) NSUInteger triggerEndTimeOffsetInNs; // ivar: _triggerEndTimeOffsetInNs
@property (nonatomic) float triggerExplicitSatScore; // ivar: _triggerExplicitSatScore
@property (nonatomic) float triggerExplicitTDSRSatScore; // ivar: _triggerExplicitTDSRSatScore
@property (nonatomic) NSUInteger triggerFireNs; // ivar: _triggerFireNs
@property (nonatomic) NSUInteger triggerFireSampleCount; // ivar: _triggerFireSampleCount
@property (nonatomic) NSUInteger triggerFireTimeOffsetInNs; // ivar: _triggerFireTimeOffsetInNs
@property (nonatomic) CGFloat triggerFiredTime; // ivar: _triggerFiredTime
@property (nonatomic) float triggerScore; // ivar: _triggerScore
@property (nonatomic) NSUInteger triggerStartNs; // ivar: _triggerStartNs
@property (nonatomic) NSUInteger triggerStartSampleCount; // ivar: _triggerStartSampleCount
@property (nonatomic) CGFloat triggerStartTime; // ivar: _triggerStartTime
@property (nonatomic) NSUInteger triggerStartTimeOffsetInNs; // ivar: _triggerStartTimeOffsetInNs
@property (nonatomic) NSUInteger twoShotAudibleFeedbackDelayInNs; // ivar: _twoShotAudibleFeedbackDelayInNs
@property (nonatomic) float uptimeInSec; // ivar: _uptimeInSec


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif