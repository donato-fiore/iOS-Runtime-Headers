// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15CONVERSATIONKIT39CONVERSATIONCONTROLSCOUNTDOWNJOINBUTTON_H
#define _TTC15CONVERSATIONKIT39CONVERSATIONCONTROLSCOUNTDOWNJOINBUTTON_H

@class TtC15ConversationKit19InCallControlButton;



@interface _TtC15ConversationKit39ConversationControlsCountdownJoinButton : TtC15ConversationKit19InCallControlButton {
    ? countdownView;
    ? delegate;
    ? countdownControllerDelegate;
}




-(id)initWithCoder:(id)arg0 ;
-(void)cancelJoinCountdown;
-(void)didMoveToWindow;
-(void)layoutSubviews;


@end


#endif