// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12GAMECENTERUI17GKPICKERGROUPCELL_H
#define _TTC12GAMECENTERUI17GKPICKERGROUPCELL_H

@class TtC12GameCenterUI31GKPickerGroupCollectionViewCell, UILabel, UIView, UIImageView, UIVisualEffectView;
@protocol _TtP12GameCenterUI22GKPickerGroupCellProxy_;



@interface _TtC12GameCenterUI17GKPickerGroupCell : TtC12GameCenterUI31GKPickerGroupCollectionViewCell {
    ? longPressRecognizer;
    ? playerGroupView;
    ? players;
}


@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property (nonatomic, weak) UIView *container; // ivar: container
@property (nonatomic, weak) NSObject<_TtP12GameCenterUI22GKPickerGroupCellProxy_> *groupCellDelegate; // ivar: groupCellDelegate
@property (nonatomic) BOOL highlighted;
@property (nonatomic, weak) UIView *iconContainer; // ivar: iconContainer
@property (nonatomic, weak) UIImageView *messageIcon; // ivar: messageIcon
@property (nonatomic, weak) UIImageView *nearbyIcon; // ivar: nearbyIcon
@property (nonatomic, weak) UIView *nearbyIconContainer; // ivar: nearbyIconContainer
@property (nonatomic, weak) UIVisualEffectView *nearbyIconVisualEffectView; // ivar: nearbyIconVisualEffectView
@property (nonatomic, weak) UIView *ringView; // ivar: ringView
@property (nonatomic) BOOL selected;
@property (nonatomic, weak) UILabel *subtitleLabel; // ivar: subtitleLabel
@property (nonatomic, weak) UILabel *titleLabel; // ivar: titleLabel


+(id)reuseIdentifier;
+(id)reuseIdentifierAX;
-(BOOL)isHighlighted;
-(BOOL)isSelected;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)awakeFromNib;
-(void)configureWithPlayers:(id)arg0 title:(id)arg1 subtitle:(id)arg2 messagesGroupIdentifier:(id)arg3 source:(NSInteger)arg4 playerSelectionProxy:(id)arg5 ;
-(void)dealloc;
-(void)handleLongPressWithSender:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif