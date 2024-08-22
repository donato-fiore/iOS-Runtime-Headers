// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFVARIABLECONFIGURATIONHEADERVIEW_H
#define WFVARIABLECONFIGURATIONHEADERVIEW_H

@class UIView, UIButton, UIImage, NSString;
@protocol WFVariableConfigurationHeaderViewDelegate;



@interface WFVariableConfigurationHeaderView : UIView

@property (weak, nonatomic) NSObject<WFVariableConfigurationHeaderViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL showsVariableType;
@property (weak, nonatomic) UIButton *titleButton; // ivar: _titleButton
@property (weak, nonatomic) UIButton *typeButton; // ivar: _typeButton
@property (retain, nonatomic) UIImage *variableIcon;
@property (copy, nonatomic) NSString *variableTitle;
@property (copy, nonatomic) NSString *variableType;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif