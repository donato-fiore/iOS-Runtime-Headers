// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISCROLLVIEWMOCKPANGESTURERECOGNIZER_H
#define _UISCROLLVIEWMOCKPANGESTURERECOGNIZER_H


#import <Foundation/Foundation.h>

#import "UIScrollViewPanGestureRecognizer.h"

@interface _UIScrollViewMockPanGestureRecognizer : NSObject {
    CGPoint _translation;
    CGPoint _velocity;
    NSInteger _state;
}


@property (retain, nonatomic) UIScrollViewPanGestureRecognizer *gestureRecognizer; // ivar: _gestureRecognizer
@property (nonatomic) NSInteger state;


-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(struct CGPoint )locationInView:(id)arg0 ;
-(struct CGPoint )translationInView:(id)arg0 ;
-(struct CGPoint )velocityInView:(id)arg0 ;
-(void)setTranslation:(struct CGPoint )arg0 inView:(id)arg1 ;
-(void)simulateTranslation:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 ;


@end


#endif