// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12GAMECENTERUI42GKMULTIPLAYERPARTICIPANTCOLLECTIONVIEWCELL_H
#define _TTC12GAMECENTERUI42GKMULTIPLAYERPARTICIPANTCOLLECTIONVIEWCELL_H

@class UICollectionViewCell;


#import "_TtC12GameCenterUI16DynamicTypeLabel.h"
#import "_TtC12GameCenterUI23GKMultiplayerStatusView.h"

@interface _TtC12GameCenterUI42GKMultiplayerParticipantCollectionViewCell : UICollectionViewCell {
    ? contentBackgroundView;
    ? avatarView;
    ? silhouetteView;
    ? shouldDisplaySilhouette;
    ? nameLabel;
    ? subtitleLabel;
    ? removeButton;
    ? vibrantRemoveButton;
    ? focusGuide;
    ? displaysInviteeSourceIcon;
    ? messagesIconView;
    ? statusAccessoryView;
    ? tapHandler;
    ? layoutMode;
    ? viewStatus;
}


@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityNameLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI23GKMultiplayerStatusView *accessibilityStatusAccessoryView;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilitySubtitleLabel;
@property (nonatomic) BOOL removeButtonHidden;
@property (nonatomic) BOOL sharePlayEnabled; // ivar: sharePlayEnabled
@property (nonatomic, copy) id *tapHandler;


+(id)reuseIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)applyWithParticipant:(id)arg0 number:(NSInteger)arg1 isRemovingEnabled:(BOOL)arg2 isInvitingEnabled:(BOOL)arg3 layoutMode:(NSInteger)arg4 ;
-(void)didTapRemoveButton:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif