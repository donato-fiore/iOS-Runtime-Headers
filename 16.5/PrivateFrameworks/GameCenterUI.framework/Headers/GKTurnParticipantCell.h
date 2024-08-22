// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKTURNPARTICIPANTCELL_H
#define GKTURNPARTICIPANTCELL_H

@class UILabel, NSArray, NSLayoutConstraint, UIView, GKTurnBasedMatch, GKTurnBasedParticipant, NSDictionary, UIImageView, UIStackView;


#import "GKBasePlayerCell.h"
#import "GKLabel.h"
#import "GKFocusableButton.h"
#import "_TtC12GameCenterUI22OverlappingPlayersView.h"

@interface GKTurnParticipantCell : GKBasePlayerCell

@property (retain, nonatomic) UILabel *additionalPlayerCountLabel; // ivar: _additionalPlayerCountLabel
@property (retain, nonatomic) GKLabel *bottomLabel; // ivar: _bottomLabel
@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (retain, nonatomic) GKFocusableButton *detailButton; // ivar: _detailButton
@property (retain, nonatomic) NSLayoutConstraint *detailButtonConstraint; // ivar: _detailButtonConstraint
@property (nonatomic) SEL detailPressedAction; // ivar: _detailPressedAction
@property (retain, nonatomic) UIView *divider; // ivar: _divider
@property (retain, nonatomic) NSLayoutConstraint *iconLeadingConstraint; // ivar: _iconLeadingConstraint
@property (nonatomic) UIEdgeInsets insets; // ivar: _insets
@property (nonatomic) BOOL isDetail; // ivar: _isDetail
@property (retain, nonatomic) GKTurnBasedMatch *match; // ivar: _match
@property (retain, nonatomic) _TtC12GameCenterUI22OverlappingPlayersView *overlappingPlayersView; // ivar: _overlappingPlayersView
@property (retain, nonatomic) UIView *overlappingPlayersViewContainer; // ivar: _overlappingPlayersViewContainer
@property (retain, nonatomic) NSLayoutConstraint *overlappingPlayersViewTrailingConstraint; // ivar: _overlappingPlayersViewTrailingConstraint
@property (retain, nonatomic) NSLayoutConstraint *overlappingPlayersViewWidthConstraint; // ivar: _overlappingPlayersViewWidthConstraint
@property (retain, nonatomic) GKTurnBasedParticipant *participant; // ivar: _participant
@property (retain, nonatomic) NSDictionary *playerAvatarMapping; // ivar: _playerAvatarMapping
@property (retain, nonatomic) NSArray *previousParticipants; // ivar: _previousParticipants
@property (retain, nonatomic) NSLayoutConstraint *statusImageTrailingConstraint; // ivar: _statusImageTrailingConstraint
@property (retain, nonatomic) UIImageView *statusImageView; // ivar: _statusImageView
@property (retain, nonatomic) NSLayoutConstraint *textContainerTrailingConstraint; // ivar: _textContainerTrailingConstraint
@property (retain, nonatomic) UIStackView *textStackView; // ivar: _textStackView
@property (retain, nonatomic) NSLayoutConstraint *textStackViewToIconViewLeadingConstraint; // ivar: _textStackViewToIconViewLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *textStackViewToSuperViewLeadingConstraint; // ivar: _textStackViewToSuperViewLeadingConstraint


+(CGFloat)defaultRowHeight;
+(id)itemHeightList;
+(void)registerCellClassesForCollectionView:(id)arg0 ;
-(BOOL)canBecomeFocused;
-(BOOL)needsRefreshOverlappingPlayersView;
-(CGFloat)getOverlappingPlayerAvatarIconSize;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureForDetail;
-(void)configureForMatch;
-(void)configureOverlappingPlayersView;
-(void)detailPressed:(id)arg0 ;
-(void)didUpdateModel;
-(void)establishConstraints;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateMarginConstraints;
-(void)updateOverlappingPlayerViewsAvatar;
-(void)updateUIBasedOnTraitCollection;


@end


#endif