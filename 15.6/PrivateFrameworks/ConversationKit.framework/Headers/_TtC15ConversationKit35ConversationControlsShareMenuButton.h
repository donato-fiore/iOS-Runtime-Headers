// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15CONVERSATIONKIT35CONVERSATIONCONTROLSSHAREMENUBUTTON_H
#define _TTC15CONVERSATIONKIT35CONVERSATIONCONTROLSSHAREMENUBUTTON_H

@class TtC15ConversationKit30ConversationControlsMenuButton;



@interface _TtC15ConversationKit35ConversationControlsShareMenuButton : TtC15ConversationKit30ConversationControlsMenuButton {
    ? foregroundAppCancellable;
    ? shareScreenCountdownView;
    ? screenSharingActionIdentifier;
}




-(id)initWithCoder:(id)arg0 ;
-(void)capturedDidChangeNotification:(id)arg0 ;
-(void)setAutomaticShareState:(BOOL)arg0 ;
-(void)startScreenSharing;
-(void)stopScreenSharing;


@end


#endif