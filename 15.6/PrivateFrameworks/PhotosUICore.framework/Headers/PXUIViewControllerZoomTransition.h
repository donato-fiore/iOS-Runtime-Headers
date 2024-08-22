// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXUIVIEWCONTROLLERZOOMTRANSITION_H
#define PXUIVIEWCONTROLLERZOOMTRANSITION_H



#import "PXUIViewControllerTransition.h"

@interface PXUIViewControllerZoomTransition : PXUIViewControllerTransition



+(BOOL)isTransitionSupportedWithMasterViewController:(id)arg0 detailViewController:(id)arg1 ;
+(id)_leafViewControllerForTransitionWithViewController:(id)arg0 ;
-(BOOL)supportsEdgeSwipeBackGesture;
-(CGFloat)transitionDuration:(id)arg0 ;
-(NSInteger)transitionIdentifierForTransitionMode:(NSUInteger)arg0 ;
-(void)animateTransition:(id)arg0 ;
-(void)animateZoomTransition:(id)arg0 withInitialVelocity:(struct PXDisplayVelocity )arg1 completionHandler:(id)arg2 ;


@end


#endif