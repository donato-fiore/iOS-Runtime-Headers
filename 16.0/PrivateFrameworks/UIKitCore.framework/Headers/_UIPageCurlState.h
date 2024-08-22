// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIPAGECURLSTATE_H
#define _UIPAGECURLSTATE_H

@class UITransitionState, NSString;
@protocol CAAnimationDelegate;


#import "UIView.h"
#import "_UIPageCurl.h"

@interface _UIPageCurlState : UITransitionState <CAAnimationDelegate>

 {
    UIView *_frontPageView;
    UIView *_backPageView;
    NSInteger _completionCount;
    BOOL _finished;
    BOOL _willComplete;
    id *_finally;
}


@property (readonly, nonatomic) UIView *backPageView;
@property (readonly, nonatomic) UIView *backView; // ivar: _backView
@property (readonly, nonatomic) NSInteger curlState; // ivar: _curlState
@property (readonly, nonatomic) NSInteger curlType; // ivar: _curlType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIView *frontPageView;
@property (readonly, nonatomic) UIView *frontView; // ivar: _frontView
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGPoint initialLocation; // ivar: _initialLocation
@property (readonly, nonatomic) _UIPageCurl *pageCurl; // ivar: _pageCurl
@property (readonly, nonatomic, getter=hasPendingAnimations) BOOL pendingAnimations;
@property (readonly, nonatomic) CGPoint referenceLocation; // ivar: _referenceLocation
@property (readonly) Class superclass;


-(BOOL)isCompatibleWithCurlOfType:(NSInteger)arg0 inDirection:(NSInteger)arg1 ;
-(NSInteger)_effectiveTransitionDirection;
// -(id)initWithPageCurl:(id)arg0 andCurlType:(NSInteger)arg1 fromLocation:(struct CGPoint )arg2 withReferenceLocation:(struct CGPoint )arg3 inDirection:(NSInteger)arg4 withView:(id)arg5 revealingView:(id)arg6 completion:(id)arg7 finally:(unk)arg8  ;
-(struct CGRect )_pageViewFrame;
-(void)addBackPageContent;
-(void)addFrontPageContent;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)cleanup;
-(void)cleanupWithFinishedState:(BOOL)arg0 completedState:(BOOL)arg1 ;
-(void)dealloc;
-(void)finally;
-(void)incrementCompletionCount;
-(void)invalidatePageCurl;


@end


#endif