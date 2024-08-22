// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMCDEVICEPINPANE_H
#define DMCDEVICEPINPANE_H

@class DevicePINPane, UIView, NSString;



@interface DMCDevicePINPane : DevicePINPane

@property (readonly, nonatomic) UIView *descriptionLabel;
@property (readonly, nonatomic) UIView *passcodeField;
@property (nonatomic) NSUInteger style; // ivar: _style
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText


-(id)_textFont;
-(void)setTitle:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif