// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12GAMECENTERUI39GKMULTIPLAYERCOLLECTIONVIEWCELLOBSOLETE_H
#define _TTC12GAMECENTERUI39GKMULTIPLAYERCOLLECTIONVIEWCELLOBSOLETE_H

@class UICollectionViewCell, UIButton;


#import "_TtC12GameCenterUI16DynamicTypeLabel.h"
#import "_TtC12GameCenterUI23GKMultiplayerStatusView.h"

@interface _TtC12GameCenterUI39GKMultiplayerCollectionViewCellObsolete : UICollectionViewCell {
    ? avatarView;
    ? silhouetteView;
    ? shouldDisplaySilhouette;
    ? nameLabel;
    ? subtitleLabel;
    ? displaysMessagesIcon;
    ? messagesIconView;
    ? statusAccessoryView;
    ? statusButtonView;
    ? tapHandler;
    ? layoutMode;
}


@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityNameLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI23GKMultiplayerStatusView *accessibilityStatusAccessoryView;
@property (nonatomic, readonly) UIButton *accessibilityStatusButtonView;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilitySubtitleLabel;
@property (nonatomic, copy) id *tapHandler;


+(id)reuseIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)applyWithParticipant:(id)arg0 number:(NSInteger)arg1 isRemovingEnabled:(BOOL)arg2 isInvitingEnabled:(BOOL)arg3 layoutMode:(NSInteger)arg4 ;
-(void)didTapAddButton:(id)arg0 ;
-(void)didTapRemoveButton:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif