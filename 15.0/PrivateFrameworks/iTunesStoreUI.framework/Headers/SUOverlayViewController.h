// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUOVERLAYVIEWCONTROLLER_H
#define SUOVERLAYVIEWCONTROLLER_H

@class NSMutableArray, UIViewController;


#import "SUViewController.h"
#import "SUOverlayTransition.h"
#import "SUScriptWindowContext.h"
#import "SUMaskedView.h"
#import "SUTouchCaptureView.h"
#import "SUMaskProvider.h"
#import "SUScriptFunction.h"

@interface SUOverlayViewController : SUViewController {
    NSMutableArray *_actionQueue;
    UIViewController *_activeViewController;
    SUOverlayTransition *_lastFlipTransition;
    SUScriptWindowContext *_scriptWindowContext;
    NSInteger _state;
    SUMaskedView *_subviewContainerView;
    SUTouchCaptureView *_touchCaptureView;
}


@property (readonly, nonatomic, getter=isActiveOverlay) BOOL activeOverlay;
@property (readonly, nonatomic) UIViewController *activeViewController;
@property (retain, nonatomic) UIViewController *backViewController; // ivar: _backViewController
@property (nonatomic) BOOL canSwipeToDismiss; // ivar: _canSwipeToDismiss
@property (retain, nonatomic) UIViewController *frontViewController; // ivar: _frontViewController
@property (retain, nonatomic) SUMaskProvider *maskProvider;
@property (readonly, nonatomic, getter=isOnFront) BOOL onFront;
@property (nonatomic) CGSize overlaySize; // ivar: _overlaySize
@property (retain, nonatomic) SUOverlayTransition *presentationTransition; // ivar: _presentationTransition
@property (nonatomic) CGFloat shadowOpacity; // ivar: _shadowOpacity
@property (nonatomic) CGFloat shadowRadius; // ivar: _shadowRadius
@property (retain, nonatomic) SUScriptFunction *shouldDismissFunction; // ivar: _shouldDismissFunction


+(struct CGSize )defaultOverlaySize;
-(BOOL)_isControllerLoaded:(id)arg0 ;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)shouldExcludeFromNavigationHistory;
-(id)_flipTransition;
-(id)_subviewContainerView;
-(id)copyArchivableContext;
-(id)init;
-(id)initWithOverlayConfiguration:(id)arg0 ;
-(id)scriptWindowContext;
-(void)_applyDisplayProperties;
-(void)_applyOverlayConfiguration:(id)arg0 ;
-(void)_enqueueAction:(id)arg0 ;
-(void)_finishFlipAction:(id)arg0 ;
-(void)_overlayActionDidFinish;
-(void)_overlayAnimationDidFinish;
-(void)_performFlipAction:(id)arg0 ;
-(void)_performFlipTransitionAction:(id)arg0 ;
-(void)_performNextAction;
-(void)_setShadowVisible:(BOOL)arg0 ;
-(void)_tearDownTouchCaptureView;
-(void)_touchCaptureAction:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)dealloc;
-(void)flipWithTransition:(id)arg0 ;
-(void)imagePageViewTapped:(id)arg0 ;
-(void)invalidateForMemoryPurge;
-(void)loadView;
-(void)restoreArchivableContext:(id)arg0 ;
-(void)setScriptWindowContext:(id)arg0 ;
-(void)storePage:(id)arg0 finishedWithSuccess:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDismissWithTransition:(id)arg0 ;


@end


#endif