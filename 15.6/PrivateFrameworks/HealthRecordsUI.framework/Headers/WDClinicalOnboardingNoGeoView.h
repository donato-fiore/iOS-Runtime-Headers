// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDCLINICALONBOARDINGNOGEOVIEW_H
#define WDCLINICALONBOARDINGNOGEOVIEW_H

@class UIView, NSLayoutConstraint, UIButton, UILabel;



@interface WDClinicalOnboardingNoGeoView : UIView

@property (retain, nonatomic) NSLayoutConstraint *containerCenterYConstraint; // ivar: _containerCenterYConstraint
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (retain, nonatomic) UIButton *locationServicesButton; // ivar: _locationServicesButton
@property (retain, nonatomic) NSLayoutConstraint *locationServicesButtonBaselineConstraint; // ivar: _locationServicesButtonBaselineConstraint
@property (retain, nonatomic) NSLayoutConstraint *subtitleBaselineConstraint; // ivar: _subtitleBaselineConstraint
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)init;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)_tappedLocationServices:(id)arg0 ;
-(void)_updateForCurrentSizeCategory;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif