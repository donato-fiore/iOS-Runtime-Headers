// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFAGGREGATOR_H
#define AFAGGREGATOR_H


#import <Foundation/Foundation.h>


@interface AFAggregator : NSObject {
    CGFloat _startTime;
    BOOL _sessionIsRetrying;
    BOOL _retryPrefersWWAN;
}


@property (nonatomic) NSUInteger connectionType; // ivar: _type
@property (nonatomic) BOOL hasActiveRequest; // ivar: _hasActiveRequest


+(id)_fullAggDKeyWithPrefix:(id)arg0 error:(id)arg1 ;
+(id)_stringForGatekeeperType:(NSUInteger)arg0 ;
+(void)logCDMAssetEvictedForAssetType:(id)arg0 language:(id)arg1 ;
+(void)logCreateAssistant;
+(void)logDESEvaluationForLanguage:(id)arg0 error:(id)arg1 ;
+(void)logDESRecordingForLanguage:(id)arg0 error:(id)arg1 ;
+(void)logDictationCancelled;
+(void)logDictationFailedWithError:(id)arg0 ;
+(void)logDictationFollowedByContinueOccurredForLanguage:(id)arg0 ;
+(void)logDictationFollowedByKeyboardDeleteOccurredForLanguage:(id)arg0 ;
+(void)logDictationFollowedByKeyboardInputOccurredForLanguage:(id)arg0 ;
+(void)logDictationStarted;
+(void)logDictationSucceeded;
+(void)logEnabledState:(NSUInteger)arg0 ;
+(void)logHomeButtonPressToActivationDuration:(CGFloat)arg0 ;
+(void)logKeyboardInputFollowedByContinueOccurredForLanguage:(id)arg0 ;
+(void)logLoadAssistant;
+(void)logLocalFinalSpeechRecognitionWithDuration:(CGFloat)arg0 ;
+(void)logLocalRecognitionAssetEvictedForLanguage:(id)arg0 ;
+(void)logLocalRecognitionLoadedForLanguage:(id)arg0 duration:(CGFloat)arg1 ;
+(void)logLocalRecognitionLostForLanguage:(id)arg0 ;
+(void)logLocalRecognitionWonForLanguage:(id)arg0 ;
+(void)logLocalSpeechStartedWithDuration:(CGFloat)arg0 ;
+(void)logPingTimeout;
+(void)logRequestCancelAfterSeconds:(CGFloat)arg0 ;
+(void)logRequestCompletedWithDuration:(CGFloat)arg0 ;
+(void)logRequestLaunchedApp;
+(void)logSiriInvokedVia:(NSInteger)arg0 ;
+(void)logSiriMediaVolumeAction:(NSInteger)arg0 ;
+(void)logSiriOtherRequestStarted;
+(void)logSiriPausedMedia;
+(void)logSiriQuickStopAction:(NSUInteger)arg0 ;
+(void)logSiriRequestCancelled;
+(void)logSiriRequestFailedWithError:(id)arg0 ;
+(void)logSiriRequestSucceeded;
+(void)logSiriSpeechRequestStarted;
+(void)logStarkGatekeeperAppearedForType:(NSUInteger)arg0 ;
+(void)logStarkGatekeeperDismissedManuallyForType:(NSUInteger)arg0 ;
+(void)logTimeToBeepWithDuration:(CGFloat)arg0 ;
+(void)logUILockCanceledVTActivation;
+(void)missedAlertContextForRequest;
+(void)missedAppContextForRequest;
+(void)noteConnectedToCarPlayHeadunit;
+(void)noteSuccessOfRequest:(id)arg0 inCar:(BOOL)arg1 ;
-(void)beginSessionRetryPreferringWWAN:(BOOL)arg0 ;
-(void)connectionDidDrop;
-(void)connectionDidFail;
-(void)recordFailure:(int)arg0 forConnectionType:(NSUInteger)arg1 ;
-(void)recordSessionRetrySuccess;
-(void)recordSuccessForConnectionType:(NSUInteger)arg0 isWarm:(BOOL)arg1 forTimeInterval:(CGFloat)arg2 ;
-(void)speechResponseFailure;
-(void)speechResponseReceived;
-(void)startWaitingForSpeechResponse;


@end


#endif