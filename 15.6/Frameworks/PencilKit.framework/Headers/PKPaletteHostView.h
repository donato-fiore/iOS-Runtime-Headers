// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPALETTEHOSTVIEW_H
#define PKPALETTEHOSTVIEW_H

@class UIView, NSString, NSLayoutConstraint, UIPanGestureRecognizer, UITapGestureRecognizer, UILongPressGestureRecognizer;
@protocol UIGestureRecognizerDelegate, PKPaletteViewInternalDelegate, UIPopoverPresentationControllerDelegate, PKPalettePencilInteractionFeedbackHostViewDelegate, PKPaletteTransitionDelegate, PKPaletteViewHosting, PKPaletteHostViewDelegate;


#import "PKColorPicker.h"
#import "PKPaletteTransition.h"
#import "PKPaletteView.h"
#import "PKPalettePencilInteractionFeedbackHostView.h"

@interface PKPaletteHostView : UIView <UIGestureRecognizerDelegate, PKPaletteViewInternalDelegate, UIPopoverPresentationControllerDelegate, PKPalettePencilInteractionFeedbackHostViewDelegate, PKPaletteTransitionDelegate, PKPaletteViewHosting>



@property (retain, nonatomic) PKColorPicker *colorPickerPopover; // ivar: _colorPickerPopover
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaletteHostViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) CGPoint draggingInitialPaletteCenterInSelf; // ivar: _draggingInitialPaletteCenterInSelf
@property (nonatomic) NSInteger draggingPendingPaletteVisualState; // ivar: _draggingPendingPaletteVisualState
@property (nonatomic, getter=isEffectivePaletteVisible) BOOL effectivePaletteVisible; // ivar: _effectivePaletteVisible
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *hostingView;
@property (nonatomic) NSInteger lastNonCompactPalettePosition; // ivar: _lastNonCompactPalettePosition
@property (retain, nonatomic) NSLayoutConstraint *paletteBottomConstraint; // ivar: _paletteBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *paletteCenterXConstraint; // ivar: _paletteCenterXConstraint
@property (retain, nonatomic) NSLayoutConstraint *paletteCenterYConstraint; // ivar: _paletteCenterYConstraint
@property (readonly, nonatomic, getter=isPaletteDragging) BOOL paletteDragging;
@property (nonatomic) NSInteger paletteDraggingBehavior; // ivar: _paletteDraggingBehavior
@property (retain, nonatomic) NSLayoutConstraint *paletteHeightConstraint; // ivar: _paletteHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *paletteLeftConstraint; // ivar: _paletteLeftConstraint
@property (nonatomic) NSInteger palettePosition; // ivar: _palettePosition
@property (retain, nonatomic) NSLayoutConstraint *paletteRightConstraint; // ivar: _paletteRightConstraint
@property (retain, nonatomic) NSLayoutConstraint *paletteTopConstraint; // ivar: _paletteTopConstraint
@property (retain, nonatomic) PKPaletteTransition *paletteTransition; // ivar: _paletteTransition
@property (retain, nonatomic) PKPaletteView *paletteView; // ivar: _paletteView
@property (nonatomic, getter=isPaletteVisible) BOOL paletteVisible; // ivar: _paletteVisible
@property (nonatomic, setter=_setPaletteVisualState:) NSInteger paletteVisualState; // ivar: _paletteVisualState
@property (readonly, nonatomic, getter=isPaletteVisualStateMinimized) BOOL paletteVisualStateMinimized;
@property (retain, nonatomic) NSLayoutConstraint *paletteWidthConstraint; // ivar: _paletteWidthConstraint
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // ivar: _panGestureRecognizer
@property (retain, nonatomic) PKPalettePencilInteractionFeedbackHostView *pencilInteractionFeedbackHostView; // ivar: _pencilInteractionFeedbackHostView
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapToExpandPaletteFromMinimizedGestureRecognizer; // ivar: _tapToExpandPaletteFromMinimizedGestureRecognizer
@property (retain, nonatomic) UILongPressGestureRecognizer *touchDownFeedbackGestureRecognizer; // ivar: _touchDownFeedbackGestureRecognizer


-(BOOL)_isPaletteAnimating;
-(BOOL)_shouldBeCompact;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)paletteBorderWidth;
-(CGFloat)paletteEdgeSpacing;
-(CGFloat)paletteEdgeSpacingForMinimized;
-(CGFloat)paletteShadowOpacity;
-(CGFloat)paletteShadowRadius;
-(CGFloat)paletteSpringAnimationDampingRatio;
-(CGFloat)paletteSpringAnimationResponse;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithPaletteView:(id)arg0 ;
-(id)paletteBorderColor;
-(id)paletteShadowColor;
-(struct CGPoint )_projectedLandingPointForGestureRecognizerEnd:(id)arg0 ;
-(struct CGSize )_paletteSizeForVisualState:(NSInteger)arg0 ;
-(struct CGSize )paletteShadowOffset;
-(void)_activatePaletteCenterConstraints;
-(void)_cancelPanGestureIfNecessary;
-(void)_deactivatePaletteCenterConstraints;
-(void)_deactivatePaletteEdgeConstraints;
-(void)_dockPaletteToPosition:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)_dockPaletteToPosition:(NSInteger)arg0 isFromUserReposition:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_fixToBottomEdge;
-(void)_installPencilInteractionFeedbackHostViewIfNeeded;
-(void)_paletteDidDockToPosition:(NSInteger)arg0 fromUserReposition:(BOOL)arg1 ;
-(void)_paletteWillDockToPosition:(NSInteger)arg0 prepareForExpansion:(BOOL)arg1 ;
-(void)_panGestureHandler:(id)arg0 ;
// -(void)_performAnimated:(BOOL)arg0 tracking:(BOOL)arg1 animations:(id)arg2 completion:(unk)arg3  ;
-(void)_processPendingDraggingTransition;
-(void)_scheduleDraggingTransitionToVisualState:(NSInteger)arg0 ;
-(void)_tapToExpandPaletteFromMinimizedGestureHandler:(id)arg0 ;
-(void)_touchDownFeedbackGestureHandler:(id)arg0 ;
-(void)_updateConstraintsToDockPaletteToPosition:(NSInteger)arg0 ;
-(void)_updateConstraintsToFixToBottomEdge;
-(void)_updatePaletteAppearance;
-(void)_updatePaletteContentAlpha;
-(void)_updatePaletteHeightConstraint;
-(void)_updatePaletteSizeAnimated:(BOOL)arg0 ;
-(void)_updatePaletteViewSizeConstraints;
-(void)_updateToolPreviewMinimizedStateAnimated:(BOOL)arg0 ;
-(void)_updateToolPreviewRotationAnimated:(BOOL)arg0 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)paletteViewContentSizeDidChange:(id)arg0 ;
-(void)paletteViewReturnKeyTypeDidChange:(id)arg0 ;
-(void)paletteViewShowFeedbackForToolChange:(id)arg0 ;
-(void)paletteViewStateDidChange:(id)arg0 ;
-(void)paletteViewStateDidChangeAutoHide:(id)arg0 ;
-(void)paletteViewStateDidChangeEnableKeyboardButtons:(id)arg0 ;
-(void)paletteViewStateDidChangeInputAssistantItems:(id)arg0 ;
-(void)paletteViewStateDidChangeIsVisible:(id)arg0 ;
-(void)paletteViewStateDidChangeScaleFactor:(id)arg0 ;
-(void)paletteViewStateDidChangeSelectedTool:(id)arg0 ;
-(void)paletteViewStateDidChangeShowsHandwritingTool:(id)arg0 ;
-(void)safeAreaInsetsDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)transitionExpandedToCollapsedRatioDidChange:(id)arg0 ;
-(void)transitionIntermediateVisualStateDidChange:(id)arg0 ;
-(void)transitionPointingDirectionDidChange:(id)arg0 ;
-(void)updateKeyboardAvoidanceForPalette:(BOOL)arg0 ;


@end


#endif