// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PHUIVIEWCONTROLLERDEFAULTZOOMANIMATIONCOORDINATOR_H
#define _PHUIVIEWCONTROLLERDEFAULTZOOMANIMATIONCOORDINATOR_H

@class PXZoomAnimationCoordinator, UIViewController;



@interface _PHUIViewControllerDefaultZoomAnimationCoordinator : PXZoomAnimationCoordinator

@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController


-(id)init;
-(id)initWithViewController:(id)arg0 ;
-(void)animateContentForEndPointType:(NSInteger)arg0 inView:(id)arg1 withLayerType:(NSInteger)arg2 zoomAnimationContext:(id)arg3 ;
-(void)animateContentForEndPointType:(NSInteger)arg0 withZoomAnimationContext:(id)arg1 ;


@end


#endif