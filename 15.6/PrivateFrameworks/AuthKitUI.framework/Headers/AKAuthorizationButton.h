// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKAUTHORIZATIONBUTTON_H
#define AKAUTHORIZATIONBUTTON_H

@class UIControl, NSString, UILabel;



@interface AKAuthorizationButton : UIControl

@property (copy, nonatomic) NSString *buttonText;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(void)addTarget:(id)arg0 action:(SEL)arg1 ;


@end


#endif