// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUCAMERASTREAMFULLSCREENPRESENTINGANIMATOR_H
#define HUCAMERASTREAMFULLSCREENPRESENTINGANIMATOR_H

@class HMCameraSnapshot, NSString, NSURL;
@protocol UIViewControllerAnimatedTransitioning;


#import "HUCameraStreamFullScreenAnimator.h"

@interface HUCameraStreamFullScreenPresentingAnimator : HUCameraStreamFullScreenAnimator <UIViewControllerAnimatedTransitioning>



@property (readonly, nonatomic) HMCameraSnapshot *cameraSnapshot; // ivar: _cameraSnapshot
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSURL *demoSnapshotURL; // ivar: _demoSnapshotURL
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)initWithSourceCameraCell:(id)arg0 cameraSnapshot:(id)arg1 ;
-(id)initWithSourceCameraCell:(id)arg0 cameraSnapshot:(id)arg1 snapshotDemoURL:(id)arg2 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif