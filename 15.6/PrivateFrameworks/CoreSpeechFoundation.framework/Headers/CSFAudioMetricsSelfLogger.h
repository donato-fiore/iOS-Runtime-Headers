// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSFAUDIOMETRICSSELFLOGGER_H
#define CSFAUDIOMETRICSSELFLOGGER_H


#import <Foundation/Foundation.h>


@interface CSFAudioMetricsSelfLogger : NSObject



+(id)sharedLogger;
-(id)_getPreprocessorCompletedMessageWithMetrics:(id)arg0 ;
-(id)_getRunPairs:(id)arg0 ;
-(id)_getSelfFanWithCSSiriFanInfo:(id)arg0 ;
-(id)init;
-(int)_getSelfStopRecordingReasonWithADStopRecordingEvent:(unsigned short)arg0 ;
-(void)logCoreSpeechPreprocessorCompletedWithMHUUID:(id)arg0 withMetricsDictionary:(id)arg1 ;
-(void)logMHASRAudioConfigureStartedWithMHUUID:(id)arg0 withAudioCodecString:(id)arg1 withAudioSkippedNumSamples:(NSUInteger)arg2 ;
-(void)logMHApplicationPlaybackAttemptedWithMHUUID:(id)arg0 withAppBundleName:(id)arg1 withAppBundleVersion:(id)arg2 ;
-(void)logMHAssistantDaemonAudioBluetoothInfoWithMHUUID:(id)arg0 withWirelessSplitterSessionState:(int)arg1 ;
-(void)logMHAssistantDaemonAudioConfigureContextWithMHUUID:(id)arg0 withConfigureStarted:(BOOL)arg1 ;
-(void)logMHAssistantDaemonAudioFetchRouteContextWithMHUUID:(id)arg0 withFetchRouteContextStarted:(BOOL)arg1 ;
-(void)logMHAssistantDaemonAudioInitContextWithMHUUID:(id)arg0 withInitStarted:(BOOL)arg1 ;
-(void)logMHAssistantDaemonAudioLateBufferDetectedWithMHUUID:(id)arg0 withBufferReceiptTimeInNs:(NSUInteger)arg1 ;
-(void)logMHAssistantDaemonAudioPrepareContextWithMHUUID:(id)arg0 withPrepareStarted:(BOOL)arg1 ;
-(void)logMHAssistantDaemonAudioPrewarmContextWithMHUUID:(id)arg0 withPrewarmStarted:(BOOL)arg1 ;
-(void)logMHAssistantDaemonAudioRecordingContextWithMHUUID:(id)arg0 withAudioRecordingStarted:(BOOL)arg1 withAudioInputRoute:(int)arg2 withAudioSource:(int)arg3 withAudioInterfaceVendorId:(id)arg4 withAudioInterfaceProductId:(id)arg5 ;
-(void)logMHAssistantDaemonAudioRecordingFirstBufferWithMHUUID:(id)arg0 withStartEvent:(BOOL)arg1 withFirstBufferStartTimeOffsetNs:(NSUInteger)arg2 withFirstBufferReceiptTimeOffsetNs:(NSUInteger)arg3 ;
-(void)logMHAssistantDaemonAudioRecordingInterruptionContextWithMHUUID:(id)arg0 withStartEvent:(BOOL)arg1 withLinkID:(id)arg2 withAvAudioSessionInterruptorName:(id)arg3 withAVAudioSessionInterrupterType:(id)arg4 ;
-(void)logMHAssistantDaemonAudioRecordingInterruptionStartedTier1WithMHUUID:(id)arg0 withLinkID:(id)arg1 withActiveSessionDisplayIDs:(id)arg2 ;
-(void)logMHAssistantDaemonAudioRecordingLastBufferWithMHUUID:(id)arg0 withStartEvent:(BOOL)arg1 withLastBufferStartTimeOffsetNs:(NSUInteger)arg2 withLastBufferReceiptTimeOffsetNs:(NSUInteger)arg3 ;
-(void)logMHAssistantDaemonAudioRecordingMissedBufferDetectedWithMHUUID:(id)arg0 ;
-(void)logMHAssistantDaemonAudioSessionSetActivateContextWithMHUUID:(id)arg0 withSetActivateStarted:(BOOL)arg1 ;
-(void)logMHAssistantDaemonAudioSessionSetInactiveWithMHUUID:(id)arg0 withSetInactiveStarted:(BOOL)arg1 ;
-(void)logMHAssistantDaemonAudioStartRecordingContextWithMHUUID:(id)arg0 withStartRecordingContext:(BOOL)arg1 withFanInfoArray:(id)arg2 withActiveSessionDisplayIDs:(id)arg3 ;
-(void)logMHAssistantDaemonAudioStopRecordingContextWithMHUUID:(id)arg0 withStopRecordingStarted:(BOOL)arg1 withADStopRecordingEvent:(unsigned short)arg2 ;


@end


#endif