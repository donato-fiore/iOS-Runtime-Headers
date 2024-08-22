// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSPERMISSIONITEMVIEW_H
#define CPSPERMISSIONITEMVIEW_H

@class UIStackView, UIVisualEffectView, UIView, UISwitch;



@interface CPSPermissionItemView : UIStackView {
    UIVisualEffectView *_switchWithLabelVisualEffectView;
    UIView *_switchWithLabelBackgroundView;
    UISwitch *_permissionSwitch;
    BOOL _blurEffectNeedsUpdate;
}


@property (nonatomic) BOOL hasBlurEffect; // ivar: _hasBlurEffect
@property (nonatomic, getter=isOn) BOOL on;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithTitle:(id)arg0 label:(id)arg1 description:(id)arg2 ;
-(void)layoutSubviews;
-(void)setUpSwitchWithLabel:(id)arg0 ;


@end


#endif