// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VTAGGREGATOR_H
#define VTAGGREGATOR_H

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface VTAggregator : NSObject {
    NSUInteger _currentState;
    CGFloat _lastAggTime;
    CGFloat _cumulativeUptime;
    CGFloat _cumulativeDowntime;
    CGFloat _lastAggTimeFalseWakeUp;
    NSUInteger _numFalseWakeUp;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSString *_languageCode;
    NSString *_assetString;
}




+(id)sharedAggregator;
-(id)_makeKey:(id)arg0 ;
-(id)_makeKeyWithLanguageAndAssetString:(id)arg0 ;
-(id)_makeKeyWithLanguageCode:(id)arg0 ;
-(id)init;
-(void)_addValueForScalarKey:(id)arg0 withValue:(NSInteger)arg1 ;
-(void)_logUptime;
-(void)_pushValueForDistributionKey:(id)arg0 withValue:(CGFloat)arg1 ;
-(void)cumulativeUptime:(*id)arg0 cumulativeDowntime:(*id)arg1 reset:(BOOL)arg2 ;
-(void)logActivation;
-(void)logFalseWakeUp:(BOOL)arg0 ;
-(void)logProfileUpdateNumDeletedUttsStrategy:(int)arg0 ;
-(void)logProfileUpdateNumDiscardedUttsPHS:(int)arg0 ;
-(void)logProfileUpdateNumPrunedUttsPHS:(int)arg0 ;
-(void)logProfileUpdateNumRetainedUttsPHS:(int)arg0 ;
-(void)logProfileUpdateScoreMSE:(CGFloat)arg0 ;
-(void)logProfileUpdateUtt:(id)arg0 withScore:(CGFloat)arg1 ;
-(void)logRecognizerTimedOut;
-(void)logSecondPassResult:(BOOL)arg0 ;
-(void)logTdPsrExtraAudioSamplesProcessed:(NSUInteger)arg0 ;
-(void)logTdPsrFailedDuringSATDetection;
-(void)logTdPsrFailedDuringSATRetraining;
-(void)logTdPsrSATDetectionTimedOut;
-(void)logTdPsrSATDetectionWaitTimeMs:(CGFloat)arg0 ;
-(void)logTdPsrSATRetrainingTimedOut;
-(void)logTdPsrSATRetrainingWaitTimeMs:(CGFloat)arg0 ;
-(void)logTimeVoiceTriggerTransitionsToState:(NSUInteger)arg0 ;
-(void)logVoiceProfilePruningFailureWithReasonCode:(NSUInteger)arg0 ;
-(void)logZeroRunAudio:(int)arg0 ;
-(void)setAssetString:(id)arg0 ;
-(void)setLanguageCode:(id)arg0 ;


@end


#endif