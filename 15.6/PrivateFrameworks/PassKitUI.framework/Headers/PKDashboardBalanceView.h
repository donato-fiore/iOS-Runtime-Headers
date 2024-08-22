// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDASHBOARDBALANCEVIEW_H
#define PKDASHBOARDBALANCEVIEW_H

@class UILabel, NSString, UIColor;


#import "PKDashboardCollectionViewCell.h"
#import "PKContinuousButton.h"

@interface PKDashboardBalanceView : PKDashboardCollectionViewCell {
    BOOL _isTemplateLayout;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UILabel *_availableCreditLabel;
    NSString *_title;
    PKContinuousButton *_actionButton;
}


@property (copy, nonatomic) NSString *availableCredit; // ivar: _availableCredit
@property (copy, nonatomic) NSString *balance; // ivar: _balance
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIColor *titleColor; // ivar: _titleColor
@property (copy, nonatomic) id *topUpAction; // ivar: _topUpAction
@property (nonatomic) BOOL topUpEnabled; // ivar: _topUpEnabled
@property (copy, nonatomic) NSString *topUpTitle; // ivar: _topUpTitle


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_buttonPressed:(id)arg0 ;
-(void)createSubviews;
-(void)layoutSubviews;
-(void)resetFonts;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif