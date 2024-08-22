// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISCROLLVIEWMOCKPINCHGESTURERECOGNIZER_H
#define _UISCROLLVIEWMOCKPINCHGESTURERECOGNIZER_H


#import <Foundation/Foundation.h>

#import "UIScrollViewPinchGestureRecognizer.h"

@interface _UIScrollViewMockPinchGestureRecognizer : NSObject {
    CGFloat _scale;
    CGFloat _velocity;
    NSInteger _state;
}


@property (retain, nonatomic) UIScrollViewPinchGestureRecognizer *gestureRecognizer; // ivar: _gestureRecognizer
@property (nonatomic) NSInteger state;


-(CGFloat)scale;
-(CGFloat)velocity;
-(id)_activeTouchesForEvent:(id)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(struct CGPoint )anchorPoint;
-(void)simulateScale:(CGFloat)arg0 velocity:(CGFloat)arg1 ;


@end


#endif