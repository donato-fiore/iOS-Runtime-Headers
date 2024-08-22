// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKELECTROCARDIOGRAMINFOVIEW_H
#define HKELECTROCARDIOGRAMINFOVIEW_H

@class UIStackView, UILabel, NSString, NSLayoutConstraint;



@interface HKElectrocardiogramInfoView : UIStackView

@property (retain, nonatomic) UILabel *bodyLabel; // ivar: _bodyLabel
@property (retain, nonatomic) NSString *bodyText;
@property (retain, nonatomic) NSLayoutConstraint *heartImageViewHeightConstraint; // ivar: _heartImageViewHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *heartRateFirstBaselineConstraint; // ivar: _heartRateFirstBaselineConstraint
@property (retain, nonatomic) UILabel *heartRateLabel; // ivar: _heartRateLabel
@property (retain, nonatomic) NSLayoutConstraint *heartRateLabelLeadingConstraint; // ivar: _heartRateLabelLeadingConstraint
@property (retain, nonatomic) NSString *heartRateText;


-(id)_bodyView;
-(id)_heartRateView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_addSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif