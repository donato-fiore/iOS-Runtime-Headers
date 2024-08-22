// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSUTILS_H
#define CSUTILS_H


#import <Foundation/Foundation.h>


@interface CSUtils : NSObject



+(BOOL)deviceRequirePowerAssertionHeld;
+(BOOL)deviceRequirePreventStandbyAssertion;
+(BOOL)hasRemoteCoreSpeech;
+(BOOL)isAttentiveSiriEnabled;
+(BOOL)isBluetoothAudioDeviceConnected;
+(BOOL)isDarwinOS;
+(BOOL)isHFPWithRecordRoute:(id)arg0 ;
+(BOOL)isHeadphoneDeviceWithRecordRoute:(id)arg0 playbackRoute:(id)arg1 ;
+(BOOL)isIOSDeviceSupportingBargeIn;
+(BOOL)isLocalVoiceTriggerAvailable;
+(BOOL)shouldDeinterleaveAudioOnCS;
+(BOOL)shouldDelayPhaticForMyriadDecision;
+(BOOL)shouldDownloadVTAssetsOnDaemon;
+(BOOL)supportAcousticProgressiveChecker;
+(BOOL)supportAdBlocker;
+(BOOL)supportBeepCanceller:(NSUInteger)arg0 ;
+(BOOL)supportBluetoothDeviceVoiceTrigger;
+(BOOL)supportCSTwoShotDecision;
+(BOOL)supportCircularBuffer;
+(BOOL)supportCompactPlus;
+(BOOL)supportContinuousAudioFingerprint;
+(BOOL)supportContinuousVoiceTrigger;
+(BOOL)supportEndpointerWhileHostAsleep;
+(BOOL)supportHandsFree;
+(BOOL)supportHangUp;
+(BOOL)supportHearstVoiceTrigger;
+(BOOL)supportHybridEndpointer;
+(BOOL)supportJarvisVoiceTrigger;
+(BOOL)supportKeywordDetector;
+(BOOL)supportLanguageDetector;
+(BOOL)supportLazySessionActivation;
+(BOOL)supportMyriadLightHouse;
+(BOOL)supportNonInterruptibleSiri;
+(BOOL)supportOpportunisticZLL;
+(BOOL)supportPhatic;
+(BOOL)supportPremiumAssets;
+(BOOL)supportPremiumModel;
+(BOOL)supportPremiumWatchAssets;
+(BOOL)supportRaiseToSpeak;
+(BOOL)supportRemoraVoiceTrigger;
+(BOOL)supportRemoteDarwinVoiceTrigger;
+(BOOL)supportSAT;
+(BOOL)supportSelfTriggerSuppression:(NSUInteger)arg0 refChannelIdx:(NSUInteger)arg1 ;
+(BOOL)supportSessionActivateDelay;
+(BOOL)supportSmartVolume;
+(BOOL)supportTTS;
+(BOOL)supportTrialMitigationAssets;
+(BOOL)supportZeroFilter:(NSUInteger)arg0 ;
+(BOOL)supportsANE;
+(BOOL)supportsDictationOnDevice;
+(BOOL)supportsEndpointingOnATV;
+(BOOL)supportsSiriLiminal;
+(BOOL)supportsSpeakerRecognitionAssets;
+(BOOL)supportsSpeechRecognitionOnDevice;
+(BOOL)supportsUnderstandingOnDevice;
+(BOOL)supportsVoiceTriggerFides;
+(CGFloat)systemUpTime;
+(NSInteger)processIdentifier;
+(id)audioPortSubtypeAsString:(unsigned int)arg0 ;
+(id)deviceBuildVersion;
+(id)deviceHwRevision;
+(id)deviceIdentifier;
+(id)deviceProductType;
+(id)deviceProductVersion;
+(id)deviceUserAssignedName;
+(id)getFixedHighPrioritySerialQueueWithLabel:(id)arg0 priority:(int)arg1 ;
+(id)getFixedPrioritySerialQueueWithLabel:(id)arg0 fixedPriority:(int)arg1 ;
+(id)getSerialQueue:(id)arg0 qualityOfService:(unsigned int)arg1 ;
+(id)getSerialQueue:(id)arg0 withQualityOfService:(unsigned int)arg1 andTargetQueue:(id)arg2 ;
+(id)rootQueueWithFixedPriority:(int)arg0 ;
+(id)timeStampWithSaltGrain;


@end


#endif