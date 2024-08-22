// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSURVEYQUESTIONSGADGETCONTENTVIEW_H
#define PXSURVEYQUESTIONSGADGETCONTENTVIEW_H

@class UICollectionViewCell, UISelectionFeedbackGenerator, UILabel;
@protocol PXSurveyQuestionConfiguration, PXSurveyQuestionsGadgetContentViewDelegate;


#import "PXCapsuleButton.h"

@interface PXSurveyQuestionsGadgetContentView : UICollectionViewCell

@property (retain, nonatomic) NSObject<PXSurveyQuestionConfiguration> *configuration; // ivar: _configuration
@property (nonatomic) BOOL contentHidden; // ivar: _contentHidden
@property (readonly, nonatomic) CGRect contentRect; // ivar: _contentRect
@property (weak, nonatomic) NSObject<PXSurveyQuestionsGadgetContentViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL isInvalid; // ivar: _isInvalid
@property (retain, nonatomic) PXCapsuleButton *noButton; // ivar: _noButton
@property (readonly, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator; // ivar: _selectionFeedbackGenerator
@property (retain, nonatomic) PXCapsuleButton *skipButton; // ivar: _skipButton
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) PXCapsuleButton *yesButton; // ivar: _yesButton


+(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(id)_actionButtonWithTitle:(id)arg0 action:(SEL)arg1 buttonColor:(id)arg2 titleColor:(id)arg3 ;
-(id)focusEffect;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)keyCommands;
-(struct CGRect )_contentFrameInBounds:(struct CGRect )arg0 ;
-(struct CGRect )contentBoundsInCoordinateSpace:(id)arg0 ;
-(struct CGSize )_calculateLayoutWithInputSize:(struct CGSize )arg0 apply:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_askForAdditionalReasonForAnswer:(NSUInteger)arg0 completionBlock:(id)arg1 ;
-(void)_didAnswer:(NSUInteger)arg0 ;
-(void)_didAnswerNo;
-(void)_didAnswerSkip;
-(void)_didAnswerYes;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)updateButtonsWithAnswerState:(NSUInteger)arg0 ;


@end


#endif