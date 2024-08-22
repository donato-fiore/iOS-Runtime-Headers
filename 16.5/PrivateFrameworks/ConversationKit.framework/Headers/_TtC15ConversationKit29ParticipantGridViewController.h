// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15CONVERSATIONKIT29PARTICIPANTGRIDVIEWCONTROLLER_H
#define _TTC15CONVERSATIONKIT29PARTICIPANTGRIDVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC15ConversationKit29ParticipantGridViewController : UIViewController {
    ? participants;
    ? participantsBeforeFocus;
    ? layoutStyle;
    ? forceAudioPriorityButton;
    ? nonFullScreenConstraints;
    ? fullScreenConstraints;
    ? isLocalMemberAuthorizedToChangeGroupMembership;
    ? focusedParticipant;
    ? sashedParticipant;
    ? selectedParticipant;
    ? fullScreenFocusedParticipant;
    ? participantsViewControllerDelegate;
    ? participantGridViewControllerDelegate;
}




-(BOOL)_canShowWhileLocked;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)forceBumpPriority;
-(void)loadView;
-(void)viewDidLoad;


@end


#endif