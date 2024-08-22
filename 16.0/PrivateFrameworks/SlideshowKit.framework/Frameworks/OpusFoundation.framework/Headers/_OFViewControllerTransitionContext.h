// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _OFVIEWCONTROLLERTRANSITIONCONTEXT_H
#define _OFVIEWCONTROLLERTRANSITIONCONTEXT_H

@class NSString;
@protocol OFViewControllerTransitioningContext, OFViewControllerAnimatedTransitioning, OFViewControllerInteractiveTransitioning;

#import <Foundation/Foundation.h>

#import "OFUIViewController.h"
#import "OFUIView.h"

@interface _OFViewControllerTransitionContext : NSObject <OFViewControllerTransitioningContext>

 {
    OFUIViewController *_fromViewController;
    OFUIViewController *_toViewController;
    OFUIView *_containerView;
    CGFloat _progress;
    CGFloat _progressVelocity;
    CGFloat _lastUpdateTimestamp;
    NSInteger _state;
    ? _flags;
}


@property (readonly) NSObject<OFViewControllerAnimatedTransitioning> *animator; // ivar: _animator
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL doEaseIn; // ivar: _doEaseIn
@property (nonatomic) BOOL doEaseOut; // ivar: _doEaseOut
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *interactiveUpdateHandler; // ivar: _interactiveUpdateHandler
@property (readonly) NSObject<OFViewControllerInteractiveTransitioning> *interactor; // ivar: _interactor
@property (nonatomic) BOOL isInFlight;
@property (nonatomic) BOOL isRubberBanding; // ivar: _isRubberBanding
@property (nonatomic) CGFloat progressVelocity;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *willCompleteHandler; // ivar: _willCompleteHandler


-(BOOL)initiallyInteractive;
-(BOOL)isCompleting;
-(BOOL)isInteractive;
-(BOOL)wasCancelled;
-(CGFloat)progress;
-(id)containerView;
-(id)fromViewController;
-(id)initWithContainerView:(id)arg0 fromViewController:(id)arg1 toViewController:(id)arg2 animator:(id)arg3 interactor:(id)arg4 ;
-(id)toViewController;
-(void)cancelInteractiveTransitionWithVelocity:(CGFloat)arg0 ;
-(void)completeTransition:(BOOL)arg0 ;
-(void)dealloc;
-(void)finishInteractiveTransitionWithVelocity:(CGFloat)arg0 ;
-(void)makeTransitionInteractiveWithInteractor:(id)arg0 andProgress:(CGFloat)arg1 ;
-(void)setIsCompleting:(BOOL)arg0 ;
-(void)startInteractiveTransition;
-(void)updateInteractiveTransition:(CGFloat)arg0 ;
-(void)updateNonInteractiveTransitionWithProgress:(CGFloat)arg0 ;


@end


#endif