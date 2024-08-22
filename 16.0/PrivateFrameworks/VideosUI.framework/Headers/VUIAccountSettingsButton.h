// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIACCOUNTSETTINGSBUTTON_H
#define VUIACCOUNTSETTINGSBUTTON_H

@class AAUIProfilePictureStore;


#import "VUIButton.h"

@interface VUIAccountSettingsButton : VUIButton

@property (nonatomic) CGSize contentSize; // ivar: _contentSize
@property (nonatomic) CGSize preferedContentSize; // ivar: _preferedContentSize
@property (retain, nonatomic) AAUIProfilePictureStore *profilePictureStore; // ivar: _profilePictureStore


-(CGFloat)accountSettingsButtonDimension;
-(id)initWithType:(NSUInteger)arg0 interfaceStyle:(NSUInteger)arg1 ;
-(struct CGSize )calculateContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_accountStoreDidChange:(id)arg0 ;
-(void)_setup;
-(void)_setupAccountImageView;
-(void)_updateAccessibilityFrame;
-(void)_updateAccountButtonVisibility:(BOOL)arg0 ;
-(void)_updateAccountImage;
-(void)_updateImageViewFrame;
-(void)configureWithLayoutProperties;
-(void)layoutSubviews;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setTintColor:(id)arg0 ;
-(void)vui_traitCollectionDidChange:(id)arg0 ;


@end


#endif