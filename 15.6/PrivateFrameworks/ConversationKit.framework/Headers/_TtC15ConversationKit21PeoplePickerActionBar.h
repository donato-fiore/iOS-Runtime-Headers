// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15CONVERSATIONKIT21PEOPLEPICKERACTIONBAR_H
#define _TTC15CONVERSATIONKIT21PEOPLEPICKERACTIONBAR_H

@class UIView;



@interface _TtC15ConversationKit21PeoplePickerActionBar : UIView {
    ? delegate;
    ? buttonsStyle;
    ? generatingLinksEnabled;
    ? serviceAvailability;
    ? style;
    ? $__lazy_storage_$_videoButton;
    ? $__lazy_storage_$_audioButtonConfiguration;
    ? $__lazy_storage_$_audioButton;
    ? audioButtonLeadingConstraint;
    ? $__lazy_storage_$_addPersonButton;
    ? $__lazy_storage_$_messageButton;
    ? messageButtonStackView;
    ? $__lazy_storage_$_audioCallDisambiguationMenu;
    ? $__lazy_storage_$_backgroundView;
    ? $__lazy_storage_$_backgroundGradientLayer;
    ? allButtons;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)addPersonButtonTapped:(id)arg0 ;
-(void)audioButtonTapped:(id)arg0 ;
-(void)layoutSubviews;
-(void)messageButtonTapped:(id)arg0 ;
-(void)videoButtonTapped:(id)arg0 ;


@end


#endif