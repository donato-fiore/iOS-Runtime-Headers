// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNBADGINGAVATARVIEW_H
#define CNBADGINGAVATARVIEW_H

@class UIView, UIImage, UIImageView;
@protocol CNCancelable;


#import "CNAvatarViewController.h"
#import "CNBadgingAvatarBadgeStyleSettings.h"
#import "CNAvatarAccessoryView.h"

@interface CNBadgingAvatarView : UIView

@property (retain, nonatomic) CNAvatarViewController *avatarViewController; // ivar: _avatarViewController
@property (retain, nonatomic) UIImage *badgeImage;
@property (retain, nonatomic) UIImageView *badgeImageView; // ivar: _badgeImageView
@property (retain, nonatomic) CNBadgingAvatarBadgeStyleSettings *badgeStyleSettings; // ivar: _badgeStyleSettings
@property (nonatomic) BOOL isDoNotDisturb; // ivar: _isDoNotDisturb
@property (nonatomic) BOOL isMarkedForSyndication; // ivar: _isMarkedForSyndication
@property (retain, nonatomic) NSObject<CNCancelable> *likenessBadgeRendererToken; // ivar: _likenessBadgeRendererToken
@property (retain, nonatomic) CNAvatarAccessoryView *mediaContextBadge; // ivar: _mediaContextBadge
@property (retain, nonatomic) UIImageView *mediaContextBadgeView; // ivar: _mediaContextBadgeView


-(id)currentLikenessScope;
-(id)imageRenderer;
-(id)initWithAvatarViewController:(id)arg0 ;
-(id)schedulerProvider;
-(void)dealloc;
-(void)layoutSubviews;
-(void)renderLikenessBadge:(id)arg0 ;
-(void)renderMediaContextBadgeImage;
-(void)setImage:(id)arg0 forAccessoryViewType:(NSUInteger)arg1 ;
-(void)updateBadgeCropStyle;
-(void)updateBadgeImageViewBackgroundColor;
-(void)updateBadgeImageViewContentMode;
-(void)updateBadgeImageViewFrame;
-(void)updateBadgeImageViewPosition;
-(void)updateBadgeTintColor;


@end


#endif