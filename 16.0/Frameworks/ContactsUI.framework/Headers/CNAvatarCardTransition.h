// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNAVATARCARDTRANSITION_H
#define CNAVATARCARDTRANSITION_H

@class NSString, UIPanGestureRecognizer, UIView;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerContextTransitioning;

#import <Foundation/Foundation.h>


@interface CNAvatarCardTransition : NSObject <UIViewControllerAnimatedTransitioning>



@property (retain, nonatomic) NSObject<UIViewControllerContextTransitioning> *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIPanGestureRecognizer *gestureRecognizer; // ivar: _gestureRecognizer
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL interactive; // ivar: _interactive
@property (retain, nonatomic) UIView *presentedView; // ivar: _presentedView
@property BOOL reversed; // ivar: _reversed
@property (readonly) Class superclass;


-(CGFloat)transitionDuration:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif