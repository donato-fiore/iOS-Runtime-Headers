// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15CONVERSATIONKIT19PARTICIPANTGRIDVIEW_H
#define _TTC15CONVERSATIONKIT19PARTICIPANTGRIDVIEW_H

@class UIView;



@interface _TtC15ConversationKit19ParticipantGridView : UIView {
    ? layoutStyle;
    ? participantIdentifiableTiles;
    ? unfocusedParticipantOverlay;
    ? deviceType;
    ? organicLayoutConfiguration;
    ? currentlyFocusedParticipantIdentifier;
    ? mostProminentParticipantIdentifier;
    ? fullScreenFocusedParticipantInfo;
    ? mostRecentAnimationIndex;
    ? delegate;
    ? currentAnimationInfo;
    ? cachedFrameSize;
    ? isLocalMemberAuthorizedToChangeGroupMembership;
    ? deviceOrientation;
}




-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif