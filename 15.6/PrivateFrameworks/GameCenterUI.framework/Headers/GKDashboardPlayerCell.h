// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKDASHBOARDPLAYERCELL_H
#define GKDASHBOARDPLAYERCELL_H

@class UIColor, UILabel, GKPlayer, NSLayoutConstraint, UIView;


#import "GKFocusHighlightingCollectionViewCell.h"
#import "GKDashboardPlayerShadowView.h"

@interface GKDashboardPlayerCell : GKFocusHighlightingCollectionViewCell

@property (retain, nonatomic) UIColor *defaultContentBackgroundColor; // ivar: _defaultContentBackgroundColor
@property (retain, nonatomic) UIColor *nameColor; // ivar: _nameColor
@property (nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (nonatomic) BOOL onDarkBackground; // ivar: _onDarkBackground
@property (retain, nonatomic) GKPlayer *player; // ivar: _player
@property (nonatomic) GKDashboardPlayerShadowView *playerView; // ivar: _playerView
@property (nonatomic) CGFloat playerViewBottomToNameLabelTopConstant; // ivar: _playerViewBottomToNameLabelTopConstant
@property (nonatomic) NSLayoutConstraint *playerViewBottomToNameLabelTopConstraint; // ivar: _playerViewBottomToNameLabelTopConstraint
@property (readonly, nonatomic) UIView *popoverSourceView;
@property (retain, nonatomic) UIColor *statusColor; // ivar: _statusColor
@property (nonatomic) UILabel *statusLabel; // ivar: _statusLabel


+(CGFloat)preferredCollectionHeight;
+(struct CGSize )defaultSize;
-(BOOL)canBecomeFocused;
-(void)awakeFromNib;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setNameText:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setStatusText:(id)arg0 ;
-(void)setStatusWithLastPlayedDate:(id)arg0 ;
-(void)updateLabelColorForDashboard;


@end


#endif