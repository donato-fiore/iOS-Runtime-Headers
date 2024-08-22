// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15CONVERSATIONKIT19PARTICIPANTINFOVIEW_H
#define _TTC15CONVERSATIONKIT19PARTICIPANTINFOVIEW_H

@class UIView;


#import "_TtC15ConversationKit33ParticipantViewLabelContainerView.h"

@interface _TtC15ConversationKit19ParticipantInfoView : UIView {
    ? gradientView;
    ? shutterButton;
    ? expandButton;
    ? localParticipant;
    ? audioMuteButton;
    ? toggleVideoButton;
    ? isExpanded;
    ? isMuted;
    ? videoDisabled;
    ? customCornerRadius;
    ? recordingLocalVideo;
    ? delegate;
}


@property (nonatomic) BOOL isMomentsAvailable; // ivar: isMomentsAvailable
@property (nonatomic, readonly) _TtC15ConversationKit33ParticipantViewLabelContainerView *nameLabel; // ivar: nameLabel


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)buttonTouchCancelledWithSender:(id)arg0 ;
-(void)buttonTouchDownWithSender:(id)arg0 ;
-(void)didTapAudioMuteButton;
-(void)didTapExpandButton;
-(void)didTapShutterButton;
-(void)didTapToggleVideoButton;
-(void)layoutSubviews;
-(void)toggleAudioTouchUpWithSender:(id)arg0 ;
-(void)toggleVideoTouchUpWithSender:(id)arg0 ;


@end


#endif