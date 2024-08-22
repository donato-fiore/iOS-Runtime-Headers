// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12GAMECENTERUI17GKPLAYERGROUPVIEW_H
#define _TTC12GAMECENTERUI17GKPLAYERGROUPVIEW_H

@class TtC12GameCenterUI21GKPlayerGroupBaseView, UIView, NSLayoutConstraint;


#import "GKDashboardPlayerPhotoView.h"

@interface _TtC12GameCenterUI17GKPlayerGroupView : TtC12GameCenterUI21GKPlayerGroupBaseView {
    ? playerCount;
    ? playerSelectionProxy;
    ? groupImageView;
}


@property (nonatomic, weak) UIView *iconContainer; // ivar: iconContainer
@property (nonatomic, weak) GKDashboardPlayerPhotoView *playerView1; // ivar: playerView1
@property (nonatomic, weak) NSLayoutConstraint *playerView1LeadingConstraint; // ivar: playerView1LeadingConstraint
@property (nonatomic, weak) NSLayoutConstraint *playerView1TopConstraint; // ivar: playerView1TopConstraint
@property (nonatomic, weak) NSLayoutConstraint *playerView1WidthContraint; // ivar: playerView1WidthContraint
@property (nonatomic, weak) GKDashboardPlayerPhotoView *playerView2; // ivar: playerView2
@property (nonatomic, weak) NSLayoutConstraint *playerView2BottomConstraint; // ivar: playerView2BottomConstraint
@property (nonatomic, weak) NSLayoutConstraint *playerView2TrailingConstraint; // ivar: playerView2TrailingConstraint
@property (nonatomic, weak) NSLayoutConstraint *playerView2WidthContraint; // ivar: playerView2WidthContraint
@property (nonatomic, weak) GKDashboardPlayerPhotoView *playerView3; // ivar: playerView3
@property (nonatomic, weak) NSLayoutConstraint *playerView3BottomConstraint; // ivar: playerView3BottomConstraint
@property (nonatomic, weak) NSLayoutConstraint *playerView3LeadingConstraint; // ivar: playerView3LeadingConstraint
@property (nonatomic, weak) NSLayoutConstraint *playerView3WidthContraint; // ivar: playerView3WidthContraint
@property (nonatomic, weak) GKDashboardPlayerPhotoView *playerView4; // ivar: playerView4
@property (nonatomic, weak) NSLayoutConstraint *playerView4TopConstraint; // ivar: playerView4TopConstraint
@property (nonatomic, weak) NSLayoutConstraint *playerView4TrailingConstraint; // ivar: playerView4TrailingConstraint
@property (nonatomic, weak) NSLayoutConstraint *playerView4WidthContraint; // ivar: playerView4WidthContraint
@property (nonatomic, weak) GKDashboardPlayerPhotoView *playerView5; // ivar: playerView5
@property (nonatomic, weak) NSLayoutConstraint *playerView5BottomConstraint; // ivar: playerView5BottomConstraint
@property (nonatomic, weak) NSLayoutConstraint *playerView5LeadingConstraint; // ivar: playerView5LeadingConstraint
@property (nonatomic, weak) NSLayoutConstraint *playerView5WidthContraint; // ivar: playerView5WidthContraint
@property (nonatomic, weak) GKDashboardPlayerPhotoView *playerView6; // ivar: playerView6
@property (nonatomic, weak) NSLayoutConstraint *playerView6LeadingConstraint; // ivar: playerView6LeadingConstraint
@property (nonatomic, weak) NSLayoutConstraint *playerView6TopConstraint; // ivar: playerView6TopConstraint
@property (nonatomic, weak) NSLayoutConstraint *playerView6WidthContraint; // ivar: playerView6WidthContraint
@property (nonatomic, weak) GKDashboardPlayerPhotoView *playerView7; // ivar: playerView7
@property (nonatomic, weak) NSLayoutConstraint *playerView7BottomConstraint; // ivar: playerView7BottomConstraint
@property (nonatomic, weak) NSLayoutConstraint *playerView7LeadingConstraint; // ivar: playerView7LeadingConstraint
@property (nonatomic, weak) NSLayoutConstraint *playerView7WidthContraint; // ivar: playerView7WidthContraint


+(id)create;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)awakeFromNib;
-(void)configureWithPlayers:(id)arg0 messagesGroupIdentifier:(id)arg1 playerSelectionProxy:(id)arg2 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif