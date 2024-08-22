// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12GAMECENTERUI23GKPICKERGROUPNEARBYCELL_H
#define _TTC12GAMECENTERUI23GKPICKERGROUPNEARBYCELL_H

@class TtC12GameCenterUI37GKPickerGroupNearbyCollectionViewCell, UILabel, UIView;



@interface _TtC12GameCenterUI23GKPickerGroupNearbyCell : TtC12GameCenterUI37GKPickerGroupNearbyCollectionViewCell

@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property (nonatomic, weak) UILabel *badgeLabel; // ivar: badgeLabel
@property (nonatomic) BOOL highlighted;
@property (nonatomic, weak) UIView *iconContainer; // ivar: iconContainer
@property (nonatomic, weak) UILabel *titleLabel; // ivar: titleLabel


+(id)reuseIdentifier;
+(id)reuseIdentifierAX;
-(BOOL)isHighlighted;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)awakeFromNib;
-(void)configureWithBadgeCount:(NSInteger)arg0 ;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif