// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC15CONVERSATIONKIT15PARTICIPANTVIEW_H
#define _TTC15CONVERSATIONKIT15PARTICIPANTVIEW_H

@class UIView;


#import "_TtC15ConversationKit19ParticipantInfoView.h"
#import "_TtC15ConversationKit21ParticipantViewButton.h"
#import "_TtC15ConversationKit23ParticipantMonogramView.h"

@interface _TtC15ConversationKit15ParticipantView : UIView {
    ? backgroundEffectsView;
    ? contentView;
    ? videoView;
    ? alertView;
    ? videoOverlayView;
    ? prominenceBorderView;
    ? debugLabel;
    ? rotateButton;
    ? mostRecentViewModelHash;
    ? loggingIdentifier;
    ? hideInfoViewTimer;
    ? hideAlertViewTimer;
    ? audioMuteView;
    ? videoDisableView;
    ? participantIdentifier;
    ? delegate;
    ? customCornerRadius;
}


@property (nonatomic, readonly) _TtC15ConversationKit19ParticipantInfoView *infoView; // ivar: infoView
@property (nonatomic) BOOL isExpanded; // ivar: isExpanded
@property (nonatomic) BOOL isInRoster; // ivar: isInRoster
@property (nonatomic, readonly) _TtC15ConversationKit21ParticipantViewButton *kickMemberButton; // ivar: kickMemberButton
@property (nonatomic, readonly) _TtC15ConversationKit23ParticipantMonogramView *monogramView; // ivar: monogramView
@property (nonatomic) CGAffineTransform transform;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)didTapKickMember;
-(void)didTapRotate;
-(void)layoutSubviews;


@end


#endif