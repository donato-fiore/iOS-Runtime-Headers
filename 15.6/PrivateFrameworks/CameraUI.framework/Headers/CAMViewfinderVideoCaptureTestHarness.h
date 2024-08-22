// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMVIEWFINDERVIDEOCAPTURETESTHARNESS_H
#define CAMVIEWFINDERVIDEOCAPTURETESTHARNESS_H

@class NSString;
@protocol CAMViewfinderViewControllerVideoCaptureRequestTestingDelegate;


#import "CAMPerformanceTestHarness.h"
#import "CAMViewfinderViewController.h"

@interface CAMViewfinderVideoCaptureTestHarness : CAMPerformanceTestHarness <CAMViewfinderViewControllerVideoCaptureRequestTestingDelegate>



@property (readonly, nonatomic) CGFloat _videoDurationInSeconds; // ivar: __videoDurationInSeconds
@property (retain, nonatomic) CAMViewfinderViewController *_viewfinderViewController; // ivar: __viewfinderViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithTestName:(id)arg0 viewfinderViewController:(id)arg1 videoDurationInSeconds:(CGFloat)arg2 ;
-(void)startTesting;
-(void)viewfinderViewController:(id)arg0 didReceiveVideoRequestDidCompleteCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(void)viewfinderViewController:(id)arg0 didReceiveVideoRequestDidStartCapturing:(id)arg1 ;


@end


#endif