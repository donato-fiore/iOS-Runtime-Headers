// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPALETTEPENCILINTERACTIONFEEDBACKHOSTVIEW_H
#define PKPALETTEPENCILINTERACTIONFEEDBACKHOSTVIEW_H

@class UIView, UIViewFloatAnimatableProperty, NSLayoutConstraint, NSTimer, UILayoutGuide;
@protocol PKPalettePencilInteractionFeedbackHostViewDelegate;


#import "PKPalettePencilInteractionFeedbackView.h"

@interface PKPalettePencilInteractionFeedbackHostView : UIView

@property (weak, nonatomic) NSObject<PKPalettePencilInteractionFeedbackHostViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIViewFloatAnimatableProperty *feedbackViewVisibilityAnimatableProperty; // ivar: _feedbackViewVisibilityAnimatableProperty
@property (retain, nonatomic) NSLayoutConstraint *layoutGuideCenterXConstraint; // ivar: _layoutGuideCenterXConstraint
@property (retain, nonatomic) NSLayoutConstraint *layoutGuideCenterYConstraint; // ivar: _layoutGuideCenterYConstraint
@property (retain, nonatomic) NSLayoutConstraint *layoutGuideHeightConstraint; // ivar: _layoutGuideHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *layoutGuideWidthConstraint; // ivar: _layoutGuideWidthConstraint
@property (retain, nonatomic) PKPalettePencilInteractionFeedbackView *pencilInteractionFeedbackView; // ivar: _pencilInteractionFeedbackView
@property (retain, nonatomic) NSTimer *pencilInteractionFeedbackViewAutodismissTimer; // ivar: _pencilInteractionFeedbackViewAutodismissTimer
@property (retain, nonatomic) NSLayoutConstraint *pencilInteractionFeedbackViewBottomConstraint; // ivar: _pencilInteractionFeedbackViewBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *pencilInteractionFeedbackViewCenterXConstraint; // ivar: _pencilInteractionFeedbackViewCenterXConstraint
@property (retain, nonatomic) NSLayoutConstraint *pencilInteractionFeedbackViewCenterYConstraint; // ivar: _pencilInteractionFeedbackViewCenterYConstraint
@property (retain, nonatomic) UILayoutGuide *pencilInteractionFeedbackViewLayoutGuide; // ivar: _pencilInteractionFeedbackViewLayoutGuide
@property (retain, nonatomic) NSLayoutConstraint *pencilInteractionFeedbackViewLeftConstraint; // ivar: _pencilInteractionFeedbackViewLeftConstraint
@property (retain, nonatomic) NSLayoutConstraint *pencilInteractionFeedbackViewRightConstraint; // ivar: _pencilInteractionFeedbackViewRightConstraint
@property (retain, nonatomic) NSLayoutConstraint *pencilInteractionFeedbackViewTopConstraint; // ivar: _pencilInteractionFeedbackViewTopConstraint
@property (nonatomic, getter=isPencilInteractionFeedbackViewVisible) BOOL pencilInteractionFeedbackViewVisible; // ivar: _pencilInteractionFeedbackViewVisible


-(BOOL)_isPencilInteractionFeedbackViewAlmostOffScreen;
-(CGFloat)minimizedPaletteScaleFactor;
-(NSInteger)_palettePosition;
-(id)initWithDelegate:(id)arg0 ;
-(struct CGSize )minimizedPaletteSize;
-(void)_animatePencilInteractionFeedbackViewToVisible:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_updateLayoutGuideConstraints;
-(void)hideFeedbackView;
-(void)layoutSubviews;
-(void)showFeedbackForCurrentlySelectedToolInPaletteView;


@end


#endif