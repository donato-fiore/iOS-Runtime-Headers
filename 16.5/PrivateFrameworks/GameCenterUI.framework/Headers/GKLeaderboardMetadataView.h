// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKLEADERBOARDMETADATAVIEW_H
#define GKLEADERBOARDMETADATAVIEW_H

@class UIView, UIStackView, NSLayoutConstraint, UILabel, UIVisualEffectView;



@interface GKLeaderboardMetadataView : UIView

@property (retain, nonatomic) UIView *avatarContainer1; // ivar: _avatarContainer1
@property (retain, nonatomic) UIView *avatarContainer2; // ivar: _avatarContainer2
@property (retain, nonatomic) UIView *avatarContainer3; // ivar: _avatarContainer3
@property (retain, nonatomic) UIStackView *body; // ivar: _body
@property (retain, nonatomic) UIStackView *container; // ivar: _container
@property (retain, nonatomic) NSLayoutConstraint *containerRightMargin; // ivar: _containerRightMargin
@property (retain, nonatomic) UILabel *footnote; // ivar: _footnote
@property (retain, nonatomic) UIStackView *header; // ivar: _header
@property (retain, nonatomic) NSLayoutConstraint *headerHeight; // ivar: _headerHeight
@property (retain, nonatomic) UILabel *rank; // ivar: _rank
@property (retain, nonatomic) UILabel *title; // ivar: _title
@property (retain, nonatomic) UIVisualEffectView *vibrancyView; // ivar: _vibrancyView


-(void)awakeFromNib;
-(void)configureFootnote:(id)arg0 altFootnote:(id)arg1 ;
-(void)configureVibrancy:(BOOL)arg0 ;
-(void)configureWithPlayers:(id)arg0 title:(id)arg1 footnote:(id)arg2 ;
-(void)configureWithPlayers:(id)arg0 title:(id)arg1 footnote:(id)arg2 altFootnote:(id)arg3 ;
-(void)configureWithRank:(id)arg0 title:(id)arg1 footnote:(id)arg2 altFootnote:(id)arg3 vibrant:(BOOL)arg4 ;
-(void)configureWithRank:(id)arg0 title:(id)arg1 footnote:(id)arg2 vibrant:(BOOL)arg3 ;
-(void)stackVertically:(BOOL)arg0 ;
-(void)updateAvatarContainer:(id)arg0 withPlayer:(id)arg1 ;


@end


#endif