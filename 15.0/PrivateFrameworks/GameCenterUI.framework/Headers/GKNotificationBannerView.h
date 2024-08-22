// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKNOTIFICATIONBANNERVIEW_H
#define GKNOTIFICATIONBANNERVIEW_H

@class UIView, UILabel, UIImageView;


#import "GKDashboardPlayerPhotoView.h"

@interface GKNotificationBannerView : UIView

@property (retain, nonatomic) UILabel *actionLabel; // ivar: _actionLabel
@property (nonatomic) BOOL canTransitionToPlayerAvatar; // ivar: _canTransitionToPlayerAvatar
@property (retain, nonatomic) UIView *centeringView; // ivar: _centeringView
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UILabel *messageLabel; // ivar: _messageLabel
@property (retain, nonatomic) UILabel *messageLabel2; // ivar: _messageLabel2
@property (retain, nonatomic) GKDashboardPlayerPhotoView *playerAvatarView; // ivar: _playerAvatarView
@property (readonly, nonatomic) CGFloat preferredBannerWidth; // ivar: _preferredBannerWidth
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (copy, nonatomic) id *touchHandler; // ivar: _touchHandler
@property (nonatomic) BOOL useShortBanner; // ivar: _useShortBanner


+(BOOL)_preventsAppearanceProxyCustomization;
-(id)initWithTitle:(id)arg0 image:(id)arg1 message:(id)arg2 useShortBanner:(BOOL)arg3 ;
-(id)initWithTitle:(id)arg0 player:(id)arg1 imageView:(id)arg2 message:(id)arg3 useShortBanner:(BOOL)arg4 ;
-(void)_wasTouched:(id)arg0 ;
-(void)awakeFromNib;
-(void)callCompletionHandler;
-(void)createBackdropViewWithBlurStyle:(NSInteger)arg0 ;
-(void)createMessageLabel:(id)arg0 withTextStyle:(id)arg1 ;
-(void)createTitleLabel:(id)arg0 withTextStyle:(id)arg1 ;
-(void)dealloc;
-(void)fadeInWithCompletionHandler:(id)arg0 ;
-(void)fadeOutQuickly:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)hideBanner;
-(void)layoutSubviews;
-(void)showPlayerAvatarAnimationWithCompletionHandler:(id)arg0 ;
-(void)showWithCompletionHandler:(id)arg0 ;
-(void)showWithTouchHandler:(id)arg0 ;
-(void)startLoadingPlayerAvatar;
-(void)transitionToPlayerAvatar;


@end


#endif