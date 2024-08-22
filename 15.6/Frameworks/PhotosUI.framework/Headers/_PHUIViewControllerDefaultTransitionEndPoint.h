// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PHUIVIEWCONTROLLERDEFAULTTRANSITIONENDPOINT_H
#define _PHUIVIEWCONTROLLERDEFAULTTRANSITIONENDPOINT_H

@class NSString, UIViewController;
@protocol PXUIViewControllerTransitionEndPoint, PXUIViewControllerZoomTransitionEndPoint;

#import <Foundation/Foundation.h>


@interface _PHUIViewControllerDefaultTransitionEndPoint : NSObject <PXUIViewControllerTransitionEndPoint, PXUIViewControllerZoomTransitionEndPoint>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL keepsSourceRegionOfInterestContent;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIViewController *viewController; // ivar: _viewController


-(id)contentViewForZoomTransition:(id)arg0 ;
-(id)init;
-(id)initWithViewController:(id)arg0 ;
-(id)regionOfInterestForTransition:(id)arg0 ;
-(id)removeBackgroundColorForTransition:(id)arg0 ;
-(id)zoomAnimationCoordinatorForZoomTransition:(id)arg0 ;
-(void)preloadWithSourceRegionOfInterest:(id)arg0 forTransition:(id)arg1 ;
-(void)restoreBackgroundColor:(id)arg0 forTransition:(id)arg1 ;


@end


#endif