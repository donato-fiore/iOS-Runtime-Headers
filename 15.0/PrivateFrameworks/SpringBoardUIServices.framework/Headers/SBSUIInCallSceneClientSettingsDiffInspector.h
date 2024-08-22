// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSUIINCALLSCENECLIENTSETTINGSDIFFINSPECTOR_H
#define SBSUIINCALLSCENECLIENTSETTINGSDIFFINSPECTOR_H

@class UIApplicationSceneClientSettingsDiffInspector;



@interface SBSUIInCallSceneClientSettingsDiffInspector : UIApplicationSceneClientSettingsDiffInspector



-(void)observeCallConnectedWithBlock:(id)arg0 ;
-(void)observeExpanseHUDDodgingInsetsWithBlock:(id)arg0 ;
-(void)observePreferredStatusBarStyleOverridesToSuppressWithBlock:(id)arg0 ;
-(void)observePrefersBannersHiddenFromClonedDisplayWithBlock:(id)arg0 ;
-(void)observePrefersHiddenWhenDismissedWithBlock:(id)arg0 ;
-(void)observeTransientOverlayHomeIndicatorAutoHiddenWithBlock:(id)arg0 ;


@end


#endif