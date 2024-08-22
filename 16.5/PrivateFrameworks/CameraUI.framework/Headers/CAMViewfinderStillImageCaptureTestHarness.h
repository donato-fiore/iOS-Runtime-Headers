// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
@property (nonatomic) NSUInteger _generatedRequestsCount; // ivar: __generatedRequestsCount
@property (nonatomic) CGFloat _lastCaptureCompletionTime; // ivar: __lastCaptureCompletionTime
@property (nonatomic) NSUInteger _maxStillImageCount; // ivar: __maxStillImageCount
@property (nonatomic) NSInteger _mode; // ivar: __mode
@property (nonatomic) BOOL _performWarmupCapture; // ivar: __performWarmupCapture
@property (nonatomic) NSUInteger _receivedCallbackCount; // ivar: __receivedCallbackCount
@property (retain, nonatomic) NSCountedSet *_requestIDs; // ivar: __requestIDs
@property (retain, nonatomic) CAMViewfinderViewController *_viewfinderViewController; // ivar: __viewfinderViewController
@property (nonatomic) BOOL _waitingOnWarmupCapture; // ivar: __waitingOnWarmupCapture
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *didUpdateFinalThumbnailHandler; // ivar: _didUpdateFinalThumbnailHandler
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) CAMViewfinderActionIntervalometer *testIntervalometer; // ivar: _testIntervalometer


-(BOOL)_allowOverlappingCaptures;
-(BOOL)executeAction;
-(BOOL)shouldAttemptAction;
-(id)initWithTestName:(id)arg0 maxStillImageCount:(NSUInteger)arg1 expectedNumberOfCapturesPerRequest:(NSUInteger)arg2 viewfinderViewController:(id)arg3 performingWarmupCapture:(BOOL)arg4 forCaptureMode:(NSInteger)arg5 delayBetweenCaptures:(CGFloat)arg6 capturesOnTouchDown:(BOOL)arg7 ;
-(void)cancelTesting;
-(void)failedTestWithReason:(id)arg0 ;
-(void)startTesting;
-(void)stopTesting;
-(void)viewfinderViewController:(id)arg0 didGenerateCaptureRequest:(id)arg1 ;
-(void)viewfinderViewController:(id)arg0 didReceiveStillImageRequestDidCompleteCapture:(id)arg1 error:(id)arg2 ;
-(void)viewfinderViewController:(id)arg0 didReceiveStillImageRequestDidCompleteStillImageCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(void)viewfinderViewController:(id)arg0 didReceiveStillImageRequestDidStopCapturingStillImage:(id)arg1 ;
-(void)viewfinderViewController:(id)arg0 didUpdateImageWellWithRequest:(id)arg1 response:(id)arg2 error:(id)arg3 ;


@end


#endif