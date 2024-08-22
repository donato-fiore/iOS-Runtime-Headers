// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIAPPLICATIONSCENESETTINGSDIFFINSPECTOR_H
#define UIAPPLICATIONSCENESETTINGSDIFFINSPECTOR_H

@class FBSSceneSettingsDiffInspector;



@interface UIApplicationSceneSettingsDiffInspector : FBSSceneSettingsDiffInspector



-(void)_observeOtherSetting:(NSUInteger)arg0 withBlock:(id)arg1 ;
-(void)observeAccessibilityContrastWithBlock:(id)arg0 ;
-(void)observeCanShowAlertsWithBlock:(id)arg0 ;
-(void)observeDeactivationReasonsWithBlock:(id)arg0 ;
-(void)observeDeviceOrientationEventsEnabledWithBlock:(id)arg0 ;
-(void)observeDeviceOrientationWithBlock:(id)arg0 ;
-(void)observeForcedStatusBarForegroundTransparentWithBlock:(id)arg0 ;
-(void)observeForcedStatusBarStyleWithBlock:(id)arg0 ;
-(void)observeIdleModeEnabledWithBlock:(id)arg0 ;
-(void)observeInterfaceOrientationModeWithBlock:(id)arg0 ;
-(void)observePersistenceIdentifierWithBlock:(id)arg0 ;
-(void)observePointerLockStatusWithBlock:(id)arg0 ;
-(void)observeSafeAreaInsetsLandscapeLeftWithBlock:(id)arg0 ;
-(void)observeSafeAreaInsetsLandscapeRightWithBlock:(id)arg0 ;
-(void)observeSafeAreaInsetsPortraitUpsideDownWithBlock:(id)arg0 ;
-(void)observeSafeAreaInsetsPortraitWithBlock:(id)arg0 ;
-(void)observeStatusBarAvoidanceFrameWithBlock:(id)arg0 ;
-(void)observeStatusBarHeightWithBlock:(id)arg0 ;
-(void)observeStatusBarPartsWithBlock:(id)arg0 ;
-(void)observeStatusBarStyleOverridesToSuppressWithBlock:(id)arg0 ;
-(void)observeTargetOfEventDeferringEnvironmentsWithBlock:(id)arg0 ;
-(void)observeUnderLockWithBlock:(id)arg0 ;
-(void)observeUserInterfaceStyleWithBlock:(id)arg0 ;


@end


#endif