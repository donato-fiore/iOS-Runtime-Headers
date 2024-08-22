// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIMESSAGEBUTTON_H
#define AMSUIMESSAGEBUTTON_H

@class AMSDialogAction, UIColor, UIFont;


#import "AMSUICommonButton.h"

@interface AMSUIMessageButton : AMSUICommonButton

@property (readonly, nonatomic) AMSDialogAction *dialogAction; // ivar: _dialogAction
@property (nonatomic) BOOL isFooterButton; // ivar: _isFooterButton
@property (nonatomic) NSUInteger messageStyle; // ivar: _messageStyle
@property (retain, nonatomic) UIColor *preferredBackgroundColor;
@property (retain, nonatomic) UIFont *preferredFont; // ivar: _preferredFont
@property (retain, nonatomic) UIColor *preferredForegroundColor;


-(BOOL)isDefaultCloseButton;
-(id)_appendChevronToString:(id)arg0 ;
-(id)_chevronImage;
-(id)_closeImage;
-(id)_defaultContentColor;
-(id)_defaultIconColor;
-(id)_defaultTextFont;
-(id)_symbolConfiguration;
-(id)initWithDialogAction:(id)arg0 messageStyle:(NSUInteger)arg1 ;
-(void)_axSettingsDidUpdate:(id)arg0 ;
-(void)_endObservations;
-(void)_refresh;
-(void)_setAXSettings;
-(void)_setAccessibilityIdentifier;
-(void)_setImagePadding;
-(void)_setLocalOverrideTraitCollection:(id)arg0 ;
-(void)_setupWithDialogAction:(id)arg0 ;
-(void)_startObservations;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setFooterStyle;


@end


#endif