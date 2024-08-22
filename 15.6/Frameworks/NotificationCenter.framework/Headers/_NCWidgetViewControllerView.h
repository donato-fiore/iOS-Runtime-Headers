// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NCWIDGETVIEWCONTROLLERVIEW_H
#define _NCWIDGETVIEWCONTROLLERVIEW_H

@class NSString;
@protocol UIScrollViewDelayedTouchesBeganGestureRecognizerClient;


#import "NCSizeObservingView.h"

@interface _NCWidgetViewControllerView : NCSizeObservingView <UIScrollViewDelayedTouchesBeganGestureRecognizerClient>



@property (readonly, nonatomic, getter=_canScrollX) BOOL canScrollX;
@property (readonly, nonatomic, getter=_canScrollY) BOOL canScrollY;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL delaysContentTouches;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_scrollHysteresis) CGFloat scrollHysteresis;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=_touchDelayForScrollDetection) CGFloat touchDelayForScrollDetection;


-(BOOL)touchesShouldBegin:(id)arg0 withEvent:(id)arg1 inContentView:(id)arg2 ;
-(void)didMoveToWindow;


@end


#endif