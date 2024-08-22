// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUIMESSAGEBUTTON_H
#define AMSUIMESSAGEBUTTON_H

@class AMSDialogAction, UIFont;


#import "AMSUICommonButton.h"

@interface AMSUIMessageButton : AMSUICommonButton

@property (readonly, nonatomic) AMSDialogAction *dialogAction; // ivar: _dialogAction
@property (nonatomic) NSUInteger messageStyle; // ivar: _messageStyle
@property (retain, nonatomic) UIFont *titleFont;


-(BOOL)isDefaultCloseButton;
-(id)_chevronImage;
-(id)_closeImage;
-(id)_defaultContentColor;
-(id)_defaultTextFont;
-(id)_symbolConfiguration;
-(id)initWithDialogAction:(id)arg0 messageStyle:(NSUInteger)arg1 ;
-(void)_setupWithDialogAction:(id)arg0 ;
-(void)setFooterStyle;


@end


#endif