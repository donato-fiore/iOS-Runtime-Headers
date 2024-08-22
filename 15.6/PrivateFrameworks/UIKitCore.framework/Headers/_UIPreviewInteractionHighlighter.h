// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIPREVIEWINTERACTIONHIGHLIGHTER_H
#define _UIPREVIEWINTERACTIONHIGHLIGHTER_H

@class NSArray, NSUUID, NSString;
@protocol UIInteractionEffect, _UIInteractiveHighlighting, UIInteraction;

#import <Foundation/Foundation.h>

#import "UIControl.h"
#import "_UIInteractiveHighlightEffect.h"
#import "UIView.h"

@interface _UIPreviewInteractionHighlighter : NSObject <UIInteractionEffect>

 {
    id<_UIInteractiveHighlighting> *_interactiveHighlightView;
    UIControl *_compatibilityHighlightView;
    _UIInteractiveHighlightEffect *_interactiveHighlightEffect;
    NSArray *_accessoryHighlightEffects;
    _UIInteractiveHighlightEffect *_presentationControllerHighlightEffect;
    id<UIInteraction> *_interaction;
    BOOL _active;
    BOOL _animatesContentEffects;
    NSUUID *_contentAnimationIdentifier;
    BOOL _animatesBackgroundEffects;
    NSInteger _preferredAnimationStyle;
    CGFloat _preferredMinimumScale;
    CGFloat _preferredMaximumScale;
}


@property (copy, nonatomic) id *backgroundEffectApplyBlock; // ivar: _backgroundEffectApplyBlock
@property (nonatomic) BOOL cancelsInteractionWhenScrolling; // ivar: _cancelsInteractionWhenScrolling
@property (nonatomic) NSUInteger clickEffectPhase; // ivar: _clickEffectPhase
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (retain, nonatomic) UIView *customBackgroundEffectView; // ivar: _customBackgroundEffectView
@property (weak, nonatomic) UIView *customContainerView; // ivar: _customContainerView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _UIInteractiveHighlightEffect *interactiveHighlightEffect;
@property (copy, nonatomic) id *privateCompletionBlock; // ivar: _privateCompletionBlock
@property (nonatomic) BOOL shouldApplyBackgroundEffects; // ivar: _shouldApplyBackgroundEffects
@property (nonatomic) BOOL shouldApplyContentEffects; // ivar: _shouldApplyContentEffects
@property (nonatomic) BOOL shouldApplyEffectsOnProxyView; // ivar: _shouldApplyEffectsOnProxyView
@property (nonatomic) BOOL shouldEndWithCancelAnimation; // ivar: _shouldEndWithCancelAnimation
@property (nonatomic) BOOL shouldTransferViewOwnership; // ivar: _shouldTransferViewOwnership
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view


-(id)initWithView:(id)arg0 ;
-(void)_animateAlongsideViewControllerPresentationDismiss;
-(void)_animateForDelayedViewControllerPresentation;
-(void)_applyHighlightEffectsToViewControllerDuringCancellation:(id)arg0 ;
-(void)_delayedViewControllerPresentationDidCancel;
-(void)_finalizeAfterInteraction;
-(void)_finalizeAfterInteractionIfNeeded;
-(void)_prepareAccessoryViewsForScrollView:(id)arg0 environment:(id)arg1 ;
-(void)_prepareContentEffectsForInteraction:(id)arg0 ;
-(void)_prepareForInteraction:(id)arg0 ;
-(void)_prepareForViewControllerPresentation:(id)arg0 ;
-(void)_setHighlighted:(BOOL)arg0 forViewIfNeeded:(id)arg1 ;
-(void)_updateFromInteraction:(id)arg0 fractionComplete:(CGFloat)arg1 ended:(BOOL)arg2 ;
-(void)interaction:(id)arg0 didChangeWithContext:(id)arg1 ;


@end


#endif