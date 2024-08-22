// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSURVEYQUESTIONSCONGRATULATIONSGADGETCONTENTVIEW_H
#define PXSURVEYQUESTIONSCONGRATULATIONSGADGETCONTENTVIEW_H

@class UIView, UILabel, UIView<_PXCKFullscreenEffectView>, UIImpactFeedbackGenerator, UISelectionFeedbackGenerator;
@protocol PXSurveyQuestionCongratulationsGadgetContentViewDelegate;


#import "PXCapsuleButton.h"
#import "PXRoundedCornerOverlayView.h"

@interface PXSurveyQuestionsCongratulationsGadgetContentView : UIView

@property (readonly, nonatomic) PXCapsuleButton *actionButton; // ivar: _actionButton
@property (readonly, nonatomic) UILabel *congratulationsLabel; // ivar: _congratulationsLabel
@property (weak, nonatomic) NSObject<PXSurveyQuestionCongratulationsGadgetContentViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UIView<_PXCKFullscreenEffectView> *effectView; // ivar: _effectView
@property (readonly, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator; // ivar: _impactFeedbackGenerator
@property (readonly, nonatomic) UILabel *messageLabel; // ivar: _messageLabel
@property (readonly, nonatomic) PXRoundedCornerOverlayView *roundedOverlayView; // ivar: _roundedOverlayView
@property (readonly, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator; // ivar: _selectionFeedbackGenerator


-(id)initWithDetailMessage:(id)arg0 buttonTitle:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_didSelectActionButton;
-(void)layoutSubviews;
-(void)startConfettiAnimation;


@end


#endif