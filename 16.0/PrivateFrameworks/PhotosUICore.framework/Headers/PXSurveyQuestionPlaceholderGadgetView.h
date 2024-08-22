// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSURVEYQUESTIONPLACEHOLDERGADGETVIEW_H
#define PXSURVEYQUESTIONPLACEHOLDERGADGETVIEW_H

@class UICollectionViewCell, UIContentUnavailableView, UIContentUnavailableConfiguration;
@protocol PXSurveyQuestionPlaceholderGadgetViewDelegate;



@interface PXSurveyQuestionPlaceholderGadgetView : UICollectionViewCell {
    UIContentUnavailableView *_contentUnavailableView;
}


@property (weak, nonatomic) NSObject<PXSurveyQuestionPlaceholderGadgetViewDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) UIContentUnavailableConfiguration *loadingContentUnavailableConfiguration; // ivar: _loadingContentUnavailableConfiguration
@property (copy, nonatomic) UIContentUnavailableConfiguration *placeholderContentUnavailableConfiguration; // ivar: _placeholderContentUnavailableConfiguration


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_performContentUnavailableButtonAction;
-(void)_restorePlaceholderContentUnavailableConfiguration;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif