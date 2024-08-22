// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKLOOKAROUNDPRESENTANIMATIONCONTROLLER_H
#define MKLOOKAROUNDPRESENTANIMATIONCONTROLLER_H

@class UIView, NSString;
@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>


@interface MKLookAroundPresentAnimationController : NSObject <UIViewControllerAnimatedTransitioning>

 {
    UIView *_sourceView;
    CGRect _initialFrame;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldUseSpringWithDampingAnimationStyle;
-(CGFloat)transitionDuration:(id)arg0 ;
-(id)initWithSourceView:(id)arg0 initialFrame:(struct CGRect )arg1 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif