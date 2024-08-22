// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKFRIENDLISTCELL_H
#define GKFRIENDLISTCELL_H

@class UITableViewCell, UILabel, NSLayoutConstraint;


#import "GKDashboardPlayerPhotoView.h"

@interface GKFriendListCell : UITableViewCell

@property (weak) UILabel *friendLastPlayedGame; // ivar: _friendLastPlayedGame
@property (weak) UILabel *friendName; // ivar: _friendName
@property (weak) NSLayoutConstraint *friendNameTopConstraint; // ivar: _friendNameTopConstraint
@property (weak) GKDashboardPlayerPhotoView *friendPhoto; // ivar: _friendPhoto
@property (weak) NSLayoutConstraint *friendPhotoTopConstraint; // ivar: _friendPhotoTopConstraint


-(void)awakeFromNib;
-(void)prepareForReuse;
-(void)setPlayer:(id)arg0 ;


@end


#endif