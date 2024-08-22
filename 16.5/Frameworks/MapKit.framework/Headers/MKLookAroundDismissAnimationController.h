// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKLOOKAROUNDDISMISSANIMATIONCONTROLLER_H
#define MKLOOKAROUNDDISMISSANIMATIONCONTROLLER_H

@class UIView, NSString;
@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>


@interface MKLookAroundDismissAnimationController : NSObject <UIViewControllerAnimatedTransitioning>

 {
    UIView *_sourceView;
    CGRect _finalFrame;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldUseSpringWithDampingAnimationStyle;
-(CGFloat)transitionDuration:(id)arg0 ;
-(id)initWithSourceView:(id)arg0 finalFrame:(struct CGRect )arg1 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif