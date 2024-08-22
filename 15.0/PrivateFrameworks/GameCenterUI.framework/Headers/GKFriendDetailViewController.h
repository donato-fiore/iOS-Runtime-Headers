// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKFRIENDDETAILVIEWCONTROLLER_H
#define GKFRIENDDETAILVIEWCONTROLLER_H

@class UILabel, GKPlayer;


#import "GKDetailViewController.h"
#import "GKDashboardPlayerPhotoView.h"

@interface GKFriendDetailViewController : GKDetailViewController

@property (nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (nonatomic) UILabel *nicknameLabel; // ivar: _nicknameLabel
@property (retain, nonatomic) GKPlayer *player; // ivar: _player
@property (nonatomic) GKDashboardPlayerPhotoView *playerView; // ivar: _playerView


-(id)initWithPlayer:(id)arg0 ;
-(void)configureView;
-(void)report:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif