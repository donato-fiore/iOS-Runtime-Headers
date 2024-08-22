// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUHOURSSUMMARYVIEW_H
#define MUHOURSSUMMARYVIEW_H

@class UIView, UILayoutGuide, UIImageView, UIView<MULabelViewProtocol>, UITapGestureRecognizer, NSLayoutConstraint;


#import "MUHoursSummaryViewModel.h"

@interface MUHoursSummaryView : UIView {
    UILayoutGuide *_summaryStackLayoutGuide;
    UIImageView *_expansionIndicator;
    BOOL _expanded;
    UIView<MULabelViewProtocol> *_titleLabel;
    UIView<MULabelViewProtocol> *_hoursLabel;
    UIView<MULabelViewProtocol> *_openStateLabel;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSLayoutConstraint *_titleToOpenStateConstraint;
    NSLayoutConstraint *_titleToHoursConstraint;
    NSLayoutConstraint *_hoursToOpenStateConstraint;
}


@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (readonly, nonatomic) MUHoursSummaryViewModel *viewModel; // ivar: _viewModel


-(id)initWithViewModel:(id)arg0 ;
-(void)_contentSizeDidChange;
-(void)_handleAnimationStartForNormalHours;
-(void)_handleNormalHoursAnimation;
-(void)_handleServiceHoursAnimation;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)_updateAppearance;
-(void)_updateExpandButton;
-(void)expandButtonTapped;
-(void)handleAnimation;
-(void)handleAnimationStart;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif