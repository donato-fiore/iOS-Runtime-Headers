// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKDASHBOARDSINGLEBUTTONREUSABLEFOOTERVIEW_H
#define GKDASHBOARDSINGLEBUTTONREUSABLEFOOTERVIEW_H

@class UICollectionReusableView, UIButton, NSLayoutConstraint;



@interface GKDashboardSingleButtonReusableFooterView : UICollectionReusableView

@property (retain, nonatomic) UIButton *button; // ivar: _button
@property (retain, nonatomic) NSLayoutConstraint *buttonLeadingConstraint; // ivar: _buttonLeadingConstraint
@property (copy, nonatomic) id *buttonTapHandler; // ivar: _buttonTapHandler


-(void)awakeFromNib;
-(void)buttonTapped:(id)arg0 ;


@end


#endif