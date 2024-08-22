// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSUILOGINUISCENECLIENTSETTINGS_H
#define SBSUILOGINUISCENECLIENTSETTINGS_H

@class UIApplicationSceneClientSettings, NSString;
@protocol SBSUILoginUISceneClientSettings;



@interface SBSUILoginUISceneClientSettings : UIApplicationSceneClientSettings <SBSUILoginUISceneClientSettings>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger idleTimerMode;
@property (readonly, nonatomic) NSInteger rotationMode;
@property (readonly, copy, nonatomic) NSString *statusBarUserNameOverride;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger wallpaperMode;


-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif