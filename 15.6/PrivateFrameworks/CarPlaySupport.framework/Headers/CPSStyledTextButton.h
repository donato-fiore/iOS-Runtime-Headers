// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSSTYLEDTEXTBUTTON_H
#define CPSSTYLEDTEXTBUTTON_H

@class UIFont;


#import "CPSButton.h"

@interface CPSStyledTextButton : CPSButton

@property (retain, nonatomic) UIFont *fontOverride; // ivar: _fontOverride


+(id)buttonWithTextButton:(id)arg0 ;
-(BOOL)canBecomeFocused;
-(id)_buttonFont;
-(id)_externalUnfocusedBorderColor;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif