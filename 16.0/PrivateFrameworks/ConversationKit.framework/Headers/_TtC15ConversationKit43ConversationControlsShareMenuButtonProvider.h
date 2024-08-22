// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15CONVERSATIONKIT43CONVERSATIONCONTROLSSHAREMENUBUTTONPROVIDER_H
#define _TTC15CONVERSATIONKIT43CONVERSATIONCONTROLSSHAREMENUBUTTONPROVIDER_H

@class TtC15ConversationKit38ConversationControlsMenuButtonProvider;



@interface _TtC15ConversationKit43ConversationControlsShareMenuButtonProvider : TtC15ConversationKit38ConversationControlsMenuButtonProvider {
    ? foregroundAppCancellable;
    ? featureFlags;
    ? contentInsets;
    ? shareScreenCountdownView;
    ? screenSharingActionIdentifier;
    ? collaborationActionIdentifier;
    ? manageCollaborationActionIdentifier;
}




-(void)capturedDidChangeNotification:(id)arg0 ;
-(void)setAutomaticShareState:(BOOL)arg0 ;
-(void)startScreenSharing;
-(void)stopScreenSharing;


@end


#endif