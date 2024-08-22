// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BNBANNERSOURCEAPPLICATIONSCENESPECIFICATION_H
#define BNBANNERSOURCEAPPLICATIONSCENESPECIFICATION_H

@class UIApplicationSceneSpecification;



@interface BNBannerSourceApplicationSceneSpecification : UIApplicationSceneSpecification



+(id)_bundleIdentifiersRequestingAppLifecycleImpact;
-(BOOL)affectsAppLifecycleIfInternal;
-(BOOL)isInternal;
-(Class)clientSettingsClass;
-(Class)settingsClass;
-(id)baseSceneComponentClassDictionary;
-(id)uiSceneSessionRole;


@end


#endif