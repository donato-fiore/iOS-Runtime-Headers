// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIACCOUNTSETTINGSBUTTON_H
#define VUIACCOUNTSETTINGSBUTTON_H

@class AAUIProfilePictureStore;


#import "VUIButton.h"

@interface VUIAccountSettingsButton : VUIButton

@property (retain, nonatomic) AAUIProfilePictureStore *profilePictureStore; // ivar: _profilePictureStore


-(id)initWithType:(NSUInteger)arg0 interfaceStyle:(NSUInteger)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_accountStoreDidChange:(id)arg0 ;
-(void)_setup;
-(void)_setupAccountImageView;
-(void)_updateAccessibilityFrame;
-(void)_updateAccountButtonVisibility:(BOOL)arg0 ;
-(void)_updateAccountImage;
-(void)configureWithLayoutProperties;
-(void)layoutSubviews;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif