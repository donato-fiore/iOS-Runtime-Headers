// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFVARIABLECONFIGURATIONINFOVIEW_H
#define WFVARIABLECONFIGURATIONINFOVIEW_H

@class UIView, NSString, UILabel;



@interface WFVariableConfigurationInfoView : UIView

@property (copy, nonatomic) NSString *heading; // ivar: _heading
@property (copy, nonatomic) NSString *subheading; // ivar: _subheading
@property (weak, nonatomic) UILabel *textLabel; // ivar: _textLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)updateLabel;


@end


#endif