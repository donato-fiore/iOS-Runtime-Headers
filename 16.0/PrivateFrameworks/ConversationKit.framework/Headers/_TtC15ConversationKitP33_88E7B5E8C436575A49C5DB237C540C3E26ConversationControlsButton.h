// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15CONVERSATIONKITP33_88E7B5E8C436575A49C5DB237C540C3E26CONVERSATIONCONTROLSBUTTON_H
#define _TTC15CONVERSATIONKITP33_88E7B5E8C436575A49C5DB237C540C3E26CONVERSATIONCONTROLSBUTTON_H

@class UIButton, NSString;



@interface _TtC15ConversationKitP33_88E7B5E8C436575A49C5DB237C540C3E26ConversationControlsButton : UIButton {
    ? provider;
}


@property (nonatomic, readonly) NSString *description;


-(id)_contextMenuInteraction:(id)arg0 styleForMenuWithConfiguration:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )menuAttachmentPointForConfiguration:(id)arg0 ;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)updateConfiguration;


@end


#endif