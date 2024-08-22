// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCLINICALAUTHORIZATIONBINARYCHOICEFOOTERVIEW_H
#define HKCLINICALAUTHORIZATIONBINARYCHOICEFOOTERVIEW_H

@class UIView, UIButton, NSLayoutConstraint;



@interface HKClinicalAuthorizationBinaryChoiceFooterView : UIView

@property (readonly, nonatomic) UIButton *primaryButton; // ivar: _primaryButton
@property (readonly, nonatomic) UIButton *secondaryButton; // ivar: _secondaryButton
@property (readonly, nonatomic) NSLayoutConstraint *secondaryFirstBaselineToPrimaryBottomConstraint; // ivar: _secondaryFirstBaselineToPrimaryBottomConstraint


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setUpConstraints;
-(void)_setUpSubviews;
-(void)_updateForCurrentContentSizeCategory;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif