// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCLICKPRESENTATIONINTERACTIONMANAGER_H
#define PLCLICKPRESENTATIONINTERACTIONMANAGER_H

@class UIViewController<PLClickPresentationInteractionPresenting>, _UIClickPresentationInteraction, _UIClickPresentation, NSString, UIGestureRecognizer, UIViewController<PLClickPresentationInteractionPresentable>;
@protocol UIGestureRecognizerDelegate, _UIClickPresentationInteractionDelegate, PLClickPresentationInteractionManagerDelegate;

#import <Foundation/Foundation.h>


@interface PLClickPresentationInteractionManager : NSObject <UIGestureRecognizerDelegate, _UIClickPresentationInteractionDelegate>

 {
    BOOL _didPresent;
    UIViewController<PLClickPresentationInteractionPresenting> *_presentingViewController;
    _UIClickPresentationInteraction *_clickPresentationInteraction;
    _UIClickPresentation *_clickPresentation;
    id *_presentationCompletion;
    id *_dismissalCompletion;
    ? _clickPresentationInteractionManagerDelegateFlags;
}


@property (readonly, nonatomic, getter=hasCommittedToPresentation) BOOL committedToPresentation;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PLClickPresentationInteractionManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, setter=_setDidInteractionInitiateWithHint:) BOOL didInteractionInitiateWithHint; // ivar: _didInteractionInitiateWithHint
@property (readonly, nonatomic) UIGestureRecognizer *gestureRecognizerForExclusionRelationship;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) UIViewController<PLClickPresentationInteractionPresentable> *presentedViewController; // ivar: _presentedViewController
@property (readonly) Class superclass;
@property (nonatomic, getter=_willPresent, setter=_setWillPresent:) BOOL willPresent; // ivar: _willPresent


+(void)initialize;
-(BOOL)_delegateShouldBeginInteractionWithTouchAtLocation:(struct CGPoint )arg0 ;
-(BOOL)_dismissIfPossibleWithTrigger:(NSInteger)arg0 ;
-(BOOL)clickPresentationInteractionShouldBegin:(id)arg0 ;
-(BOOL)clickPresentationInteractionShouldPresent:(id)arg0 ;
-(BOOL)dismissIfPossible:(id)arg0 ;
-(BOOL)presentIfPossible:(id)arg0 ;
-(NSUInteger)activationStyleForClickPresentationInteraction:(id)arg0 ;
-(id)clickPresentationInteraction:(id)arg0 presentationForPresentingViewController:(id)arg1 ;
-(id)clickPresentationInteraction:(id)arg0 previewForHighlightingAtLocation:(struct CGPoint )arg1 ;
-(id)initWithPresentingViewController:(id)arg0 ;
-(id)initWithPresentingViewController:(id)arg0 delegate:(id)arg1 ;
-(void)_clickInteractionDidEnd;
-(void)_clickPresentationTransitionDidDismiss:(BOOL)arg0 ;
-(void)_clickPresentationTransitionDidPresent:(BOOL)arg0 ;
-(void)_delegateDeclinedDismissingPresentedContentWithTrigger:(NSInteger)arg0 ;
-(void)_delegateShouldFinishInteractionThatReachedForceThreshold:(BOOL)arg0 withCompletionBlock:(id)arg1 ;
-(void)_delegateWillDismissPresentedContentWithTrigger:(NSInteger)arg0 ;
-(void)_setPresentingViewControllerHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)clickPresentationInteractionEnded:(id)arg0 wasCancelled:(BOOL)arg1 ;
-(void)resetForInitialInteraction;


@end


#endif