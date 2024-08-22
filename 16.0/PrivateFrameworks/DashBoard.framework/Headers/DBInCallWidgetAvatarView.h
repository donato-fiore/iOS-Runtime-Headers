// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBINCALLWIDGETAVATARVIEW_H
#define DBINCALLWIDGETAVATARVIEW_H

@class UIButton, NSString, UIImageView, CNAvatarViewController, CNAvatarViewControllerSettings, TUCall;



@interface DBInCallWidgetAvatarView : UIButton

@property (copy, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (retain, nonatomic) UIImageView *appIconView; // ivar: _appIconView
@property (retain, nonatomic) CNAvatarViewController *avatarController; // ivar: _avatarController
@property (retain, nonatomic) CNAvatarViewControllerSettings *avatarControllerSettings; // ivar: _avatarControllerSettings
@property (retain, nonatomic) TUCall *currentCall; // ivar: _currentCall
@property (retain, nonatomic) UIImageView *focusRingView; // ivar: _focusRingView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupImagesIfNecessary;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)setupConstraints;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif