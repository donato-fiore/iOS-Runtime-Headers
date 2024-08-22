// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCLINICALAUTHORIZATIONPRIMARYCHOICEFOOTERVIEW_H
#define HKCLINICALAUTHORIZATIONPRIMARYCHOICEFOOTERVIEW_H

@class UIView, UIButton;



@interface HKClinicalAuthorizationPrimaryChoiceFooterView : UIView

@property (readonly, nonatomic) UIButton *primaryButton; // ivar: _primaryButton


-(CGFloat)_bottomMarginForTraitCollection:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setUpConstraints;
-(void)_setUpSubviews;
-(void)_updateMetricsWithTraitCollection:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif