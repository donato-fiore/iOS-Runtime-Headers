// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMVIEWFINDERSTILLIMAGECAPTURETESTHARNESS_H
#define CAMVIEWFINDERSTILLIMAGECAPTURETESTHARNESS_H

@class NSString, NSCountedSet;
@protocol CAMViewfinderViewControllerStillImageCaptureRequestTestingDelegate, CAMViewfinderActionIntervalometerDelegate;


#import "CAMPerformanceTestHarness.h"
#import "CAMViewfinderViewController.h"
#import "CAMViewfinderActionIntervalometer.h"

@interface CAMViewfinderStillImageCaptureTestHarness : CAMPerformanceTestHarness <CAMViewfinderViewControllerStillImageCaptureRequestTestingDelegate, CAMViewfinderActionIntervalometerDelegate>



@property (nonatomic) BOOL _capturesOnTouchDown; // ivar: __capturesOnTouchDown
@property (nonatomic) CGFloat _delayBetweenCaptures; // ivar: __delayBetweenCaptures
@property (nonatomic) NSUInteger _expectedNumberOfResponsesPerRequest; // ivar: __expectedNumberOfResponsesPerRequest
@property (retain, nonatomic) NSString *_finalRequestPersistenceUUID; // ivar: __finalRequestPersistenceUUID
@property (nonatomic) CGFloat _lastCaptureCompletionTime; // ivar: __lastCaptureCompletionTime
@property (retain, nonatomic) NSString *_lastReceivedPersistenceUUID; // ivar: __lastReceivedPersistenceUUID
@property (nonatomic) NSInteger _mode; // ivar: __mode
@property (nonatomic) BOOL _performWarmupCapture; // ivar: __performWarmupCapture
@property (retain, nonatomic) NSCountedSet *_requestIDs; // ivar: __requestIDs
@property (retain, nonatomic) CAMViewfinderViewController *_viewfinderViewController; // ivar: __viewfinderViewController
@property (nonatomic) BOOL _waitingOnWarmupCapture; // ivar: __waitingOnWarmupCapture
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) CAMViewfinderActionIntervalometer *testIntervalometer; // ivar: _testIntervalometer


-(BOOL)_allowOverlappingCaptures;
-(BOOL)shouldAttemptAction;
-(id)initWithTestName:(id)arg0 expectedNumberOfCapturesPerRequest:(NSUInteger)arg1 viewfinderViewController:(id)arg2 performingWarmupCapture:(BOOL)arg3 forCaptureMode:(NSInteger)arg4 delayBetweenCaptures:(CGFloat)arg5 capturesOnTouchDown:(BOOL)arg6 ;
-(void)failedTestWithReason:(id)arg0 ;
-(void)intervalometerDidReachMaximumCount:(id)arg0 ;
-(void)startTesting;
-(void)stopTesting;
-(void)viewfinderViewController:(id)arg0 didGenerateCaptureRequest:(id)arg1 ;
-(void)viewfinderViewController:(id)arg0 didReceiveStillImageRequestDidCompleteCapture:(id)arg1 error:(id)arg2 ;
-(void)viewfinderViewController:(id)arg0 didReceiveStillImageRequestDidCompleteStillImageCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(void)viewfinderViewController:(id)arg0 didReceiveStillImageRequestDidStopCapturingStillImage:(id)arg1 ;


@end


#endif