// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMINTERVALOMETERTESTHARNESS_H
#define CAMINTERVALOMETERTESTHARNESS_H

@class NSString, NSMutableDictionary;
@protocol CAMStillImageCaptureRequestDelegate, CAMCaptureRequestIntervalometerDelegate;


#import "CAMPerformanceTestHarness.h"
#import "CUCaptureController.h"
#import "CAMCaptureRequestIntervalometer.h"

@interface CAMIntervalometerTestHarness : CAMPerformanceTestHarness <CAMStillImageCaptureRequestDelegate, CAMCaptureRequestIntervalometerDelegate>

 {
    CUCaptureController *_captureController;
    BOOL _performWarmupCapture;
    BOOL _waitingOnWarmupCapture;
    NSString *_finalRequestPersistenceUUID;
    NSInteger _mode;
    NSMutableDictionary *_numberOfResponsesForRequest;
    NSUInteger _expectedNumberOfResponsesPerRequest;
    CGFloat _delayBetweenCaptures;
    CGFloat _lastCaptureCompletionTime;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) CAMCaptureRequestIntervalometer *testIntervalometer; // ivar: _testIntervalometer


-(BOOL)_allowOverlappingCaptures;
-(BOOL)_hasReceivedExpectedNumberOfResponsesForPersistenceUUID:(id)arg0 failureReason:(*id)arg1 ;
-(BOOL)_hasReceivedExpectedNumberOfResponsesForRequestsWithFailureReason:(*id)arg0 ;
-(BOOL)_shouldDelayBeforeCapturing;
-(BOOL)intervalometer:(id)arg0 didGenerateCaptureRequest:(id)arg1 ;
-(id)initWithTestName:(id)arg0 expectedNumberOfCapturesPerRequest:(NSUInteger)arg1 captureController:(id)arg2 performingWarmupCapture:(BOOL)arg3 forCaptureMode:(NSInteger)arg4 delayBetweenCaptures:(CGFloat)arg5 ;
-(void)failedTestwithReason:(id)arg0 ;
-(void)intervalometer:(id)arg0 didReachMaximumCountWithRequest:(id)arg1 ;
-(void)startTesting;
-(void)stillImageRequestDidCompleteCapture:(id)arg0 error:(id)arg1 ;
-(void)stillImageRequestDidCompleteStillImageCapture:(id)arg0 withResponse:(id)arg1 error:(id)arg2 ;
-(void)stillImageRequestDidStopCapturingStillImage:(id)arg0 ;
-(void)stopTesting;


@end


#endif