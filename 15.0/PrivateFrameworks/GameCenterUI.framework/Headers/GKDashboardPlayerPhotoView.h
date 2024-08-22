// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKDASHBOARDPLAYERPHOTOVIEW_H
#define GKDASHBOARDPLAYERPHOTOVIEW_H

@class UIView, UIImageView, GKPlayer;
@protocol GKPlayerAvatarViewDelegate;



@interface GKDashboardPlayerPhotoView : UIView

@property (retain, nonatomic) UIImageView *avatarImageView; // ivar: _avatarImageView
@property (nonatomic) NSInteger avatarSize; // ivar: _avatarSize
@property (weak, nonatomic) NSObject<GKPlayerAvatarViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL dimmed; // ivar: _dimmed
@property (readonly, nonatomic) BOOL hasImage;
@property (retain, nonatomic) GKPlayer *player; // ivar: _player
@property (nonatomic) BOOL selected; // ivar: _selected
@property (nonatomic) BOOL useDarkerPlaceholder; // ivar: _useDarkerPlaceholder
@property (nonatomic, getter=isUsingPlaceholder) BOOL usingPlaceholder; // ivar: _usingPlaceholder


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)commonInit;
-(void)invalidatePhoto;
-(void)layoutSubviews;
-(void)refreshImageWithCompletionHandler:(id)arg0 ;
-(void)setAccessibilityLabel:(id)arg0 ;
-(void)setCustomImage:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif