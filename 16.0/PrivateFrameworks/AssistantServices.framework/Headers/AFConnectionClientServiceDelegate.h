// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFCONNECTIONCLIENTSERVICEDELEGATE_H
#define AFCONNECTIONCLIENTSERVICEDELEGATE_H

@class NSString;
@protocol AFClientServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AFConnection.h"

@interface AFConnectionClientServiceDelegate : NSObject <AFClientServiceDelegate>

 {
    AFConnection *_connection;
    NSObject<OS_dispatch_queue> *_targetQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_connectionDelegate;
-(id)initWithConnection:(id)arg0 targetQueue:(id)arg1 ;
-(void)aceConnectionWillRetryOnError:(id)arg0 ;
-(void)acousticIDRequestDidFinishWithSuccess:(BOOL)arg0 ;
-(void)acousticIDRequestWillStart;
-(void)appLaunchFailedWithBundleIdentifier:(id)arg0 ;
-(void)audioPlaybackRequestDidStart:(id)arg0 ;
-(void)audioPlaybackRequestDidStop:(id)arg0 error:(id)arg1 ;
-(void)audioPlaybackRequestWillStart:(id)arg0 ;
-(void)audioSessionDidBecomeActive:(BOOL)arg0 ;
-(void)audioSessionDidBeginInterruptionWithUserInfo:(id)arg0 ;
-(void)audioSessionDidEndInterruption:(BOOL)arg0 userInfo:(id)arg1 ;
-(void)audioSessionIDChanged:(unsigned int)arg0 ;
-(void)audioSessionWillBecomeActive:(BOOL)arg0 ;
-(void)cacheImage:(id)arg0 ;
-(void)extensionRequestFinishedForApplication:(id)arg0 error:(id)arg1 ;
-(void)extensionRequestWillStartForApplication:(id)arg0 ;
-(void)getBulletinContext:(id)arg0 ;
-(void)invalidateCurrentUserActivity;
-(void)musicWasDetected;
-(void)quickStopWasHandledWithActions:(NSUInteger)arg0 ;
-(void)requestDidReceiveCommand:(id)arg0 reply:(id)arg1 ;
-(void)requestHandleCommand:(id)arg0 reply:(id)arg1 ;
-(void)requestRequestedDismissAssistant;
-(void)requestRequestedDismissAssistantWithReason:(NSInteger)arg0 ;
-(void)requestRequestedOpenApplicationWithBundleID:(id)arg0 URL:(id)arg1 reply:(id)arg2 ;
-(void)requestRequestedOpenURL:(id)arg0 reply:(id)arg1 ;
-(void)setUserActivityInfo:(id)arg0 webpageURL:(id)arg1 ;
-(void)shouldSpeakChanged:(BOOL)arg0 ;
-(void)speechRecognitionDidFail:(id)arg0 ;
-(void)speechRecognized:(id)arg0 ;
-(void)speechRecognizedAdditionalInterpretation:(id)arg0 refId:(id)arg1 ;
-(void)speechRecognizedPartialResult:(id)arg0 ;
-(void)speechRecordingDidBeginOnAVRecordRoute:(id)arg0 audioSessionID:(unsigned int)arg1 reply:(id)arg2 ;
-(void)speechRecordingDidCancelWithReply:(id)arg0 ;
-(void)speechRecordingDidChangeAVRecordRoute:(id)arg0 isDucking:(BOOL)arg1 isTwoShot:(BOOL)arg2 speechEndHostTime:(NSUInteger)arg3 reply:(id)arg4 ;
-(void)speechRecordingDidEndWithReply:(id)arg0 ;
-(void)speechRecordingDidFail:(id)arg0 reply:(id)arg1 ;
-(void)speechRecordingDidUpdateRecognitionPhrases:(id)arg0 utterances:(id)arg1 refId:(id)arg2 ;
-(void)speechRecordingPerformTwoShotPromptWithType:(NSInteger)arg0 reply:(id)arg1 ;
-(void)speechRecordingStartpointDetectedWithReply:(id)arg0 ;
-(void)speechRecordingWillBeginRecognitionUpdateForTask:(id)arg0 ;
-(void)speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg0 reply:(id)arg1 ;
-(void)startPlaybackDidFail:(NSInteger)arg0 ;
-(void)startUIRequestWithInfo:(id)arg0 completion:(id)arg1 ;
-(void)startUIRequestWithText:(id)arg0 completion:(id)arg1 ;
-(void)willProcessAppLaunchWithBundleIdentifier:(id)arg0 ;
-(void)willProcessStartPlayback:(NSInteger)arg0 intent:(id)arg1 completion:(id)arg2 ;
-(void)willStopRecordingWithSignpostID:(NSUInteger)arg0 ;


@end


#endif