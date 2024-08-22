// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSUIINCALLSCENECLIENTSETTINGS_H
#define SBSUIINCALLSCENECLIENTSETTINGS_H

@class UIApplicationSceneClientSettings;



@interface SBSUIInCallSceneClientSettings : UIApplicationSceneClientSettings

@property (readonly, nonatomic, getter=isCallConnected) BOOL callConnected;
@property (readonly, nonatomic) UIEdgeInsets expanseHUDDodgingInsets;
@property (readonly, nonatomic) NSUInteger preferredHardwareButtonEventTypes;
@property (readonly, nonatomic) NSUInteger preferredStatusBarStyleOverridesToSuppress;
@property (readonly, nonatomic) BOOL prefersBannersHiddenFromClonedDisplay;
@property (readonly, nonatomic) BOOL prefersHiddenWhenDismissed;
@property (readonly, nonatomic) BOOL shouldBecomeVisibleWhenWakingDisplay;
@property (readonly, nonatomic) BOOL shouldNeverBeShownWhenLaunchingFaceTime;
@property (readonly, nonatomic) BOOL supportsDeviceLockActions;
@property (readonly, nonatomic) BOOL transientOverlayHomeIndicatorAutoHidden;


-(BOOL)homeIndicatorAutoHidden;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif