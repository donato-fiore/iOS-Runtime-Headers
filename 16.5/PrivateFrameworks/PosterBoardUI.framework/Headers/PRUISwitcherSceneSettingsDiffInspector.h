// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRUISWITCHERSCENESETTINGSDIFFINSPECTOR_H
#define PRUISWITCHERSCENESETTINGSDIFFINSPECTOR_H

@class UIApplicationSceneSettingsDiffInspector;



@interface PRUISwitcherSceneSettingsDiffInspector : UIApplicationSceneSettingsDiffInspector



+(id)diffInspectorForObservingDiffContext;
-(void)_observeOtherSetting:(NSUInteger)arg0 withBlock:(id)arg1 ;
-(void)observeLeadingTopButtonFrameWithBlock:(id)arg0 ;
-(void)observeLockPosterComplicationRowHiddenWithBlock:(id)arg0 ;
-(void)observeLockPosterFloatingLayerInlinedWithBlock:(id)arg0 ;
-(void)observeLockPosterLiveContentLayerWithBlock:(id)arg0 ;
-(void)observeLockPosterLiveFloatingLayerWithBlock:(id)arg0 ;
-(void)observeLockPosterOverlayLayerWithBlock:(id)arg0 ;
-(void)observePreferredSwitcherLayoutModeWithBlock:(id)arg0 ;
-(void)observeTrailingTopButtonFrameWithBlock:(id)arg0 ;
-(void)observeVibrancyConfigurationWithBlock:(id)arg0 ;


@end


#endif