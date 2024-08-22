// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKAVATARCONTAINERVIEW_H
#define GKAVATARCONTAINERVIEW_H

@class UIView, NSString, UIImageView, UILabel, NSLayoutConstraint, UITapGestureRecognizer;
@protocol GKPlayerAvatarViewDelegate, GKAvatarContainerViewDelegate;


#import "GKGradientLabel.h"
#import "GKDashboardPlayerPhotoView.h"

@interface GKAvatarContainerView : UIView <GKPlayerAvatarViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GKAvatarContainerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *editImage; // ivar: _editImage
@property (retain, nonatomic) UIImageView *editImageBackground; // ivar: _editImageBackground
@property (retain, nonatomic) GKGradientLabel *editLabel; // ivar: _editLabel
@property (retain, nonatomic) UILabel *emailLabel; // ivar: _emailLabel
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *imageContainer; // ivar: _imageContainer
@property (retain, nonatomic) NSLayoutConstraint *imageContainerTopConstraint; // ivar: _imageContainerTopConstraint
@property (retain, nonatomic) UILabel *nicknameLabel; // ivar: _nicknameLabel
@property (retain, nonatomic) GKDashboardPlayerPhotoView *playerAvatarView; // ivar: _playerAvatarView
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture; // ivar: _tapGesture


-(void)awakeFromNib;
-(void)didMoveToSuperview;
-(void)didSelectPlayerAvatarView:(id)arg0 ;
-(void)didSetPlayerAvatarImage:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForDefaultNicknameViewController;
-(void)refreshHeaderViewProfileImage;
-(void)refreshViewForLocalPlayer;
-(void)setUserInteractionEnabled:(BOOL)arg0 ;
-(void)setupEditImageBackground;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateAvatarEditingAvailability;


@end


#endif