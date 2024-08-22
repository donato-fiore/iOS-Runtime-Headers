// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSUIMUTABLELOGINUISCENECLIENTSETTINGS_H
#define SBSUIMUTABLELOGINUISCENECLIENTSETTINGS_H

@class UIMutableApplicationSceneClientSettings, NSString;
@protocol SBSUILoginUISceneClientSettings;



@interface SBSUIMutableLoginUISceneClientSettings : UIMutableApplicationSceneClientSettings <SBSUILoginUISceneClientSettings>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger idleTimerMode;
@property (nonatomic) NSInteger rotationMode;
@property (copy, nonatomic) NSString *statusBarUserNameOverride;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger wallpaperMode;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif