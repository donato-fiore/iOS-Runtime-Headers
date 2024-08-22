// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKTURNBASEDMATCHDETAILHEADERVIEW_H
#define GKTURNBASEDMATCHDETAILHEADERVIEW_H

@class UICollectionReusableView, UIButton, UIFocusGuide, NSString, NSArray, GKTurnBasedMatch, UILabel;


#import "GKDashboardPlayerPhotoView.h"
#import "GKLabel.h"

@interface GKTurnBasedMatchDetailHeaderView : UICollectionReusableView

@property (retain, nonatomic) UIButton *actionButton; // ivar: _actionButton
@property (retain, nonatomic) UIFocusGuide *actionFocusGuide; // ivar: _actionFocusGuide
@property (nonatomic) SEL actionSelector; // ivar: _actionSelector
@property (weak, nonatomic) id *actionTarget; // ivar: _actionTarget
@property (retain, nonatomic) NSString *actionText;
@property (retain, nonatomic) GKDashboardPlayerPhotoView *avatarView; // ivar: _avatarView
@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (retain, nonatomic) GKLabel *infoLabel; // ivar: _infoLabel
@property (retain, nonatomic) NSString *infoText; // ivar: _infoText
@property (retain, nonatomic) GKLabel *lastTurnLabel; // ivar: _lastTurnLabel
@property (retain, nonatomic) GKTurnBasedMatch *match; // ivar: _match
@property (retain, nonatomic) UILabel *playingWithLabel; // ivar: _playingWithLabel
@property (readonly, nonatomic) NSString *playingWithString;
@property (retain, nonatomic) GKLabel *startedLabel; // ivar: _startedLabel


+(BOOL)requiresConstraintBasedLayout;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)actionPressed:(id)arg0 ;
-(void)didUpdateModel;
-(void)establishConstraints;
-(void)setLabelAlpha:(CGFloat)arg0 ;


@end


#endif