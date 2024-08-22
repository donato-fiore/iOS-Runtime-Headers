// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRUISWITCHERSCENECLIENTSETTINGSDIFFINSPECTOR_H
#define PRUISWITCHERSCENECLIENTSETTINGSDIFFINSPECTOR_H

@class UIApplicationSceneClientSettingsDiffInspector;



@interface PRUISwitcherSceneClientSettingsDiffInspector : UIApplicationSceneClientSettingsDiffInspector



+(id)diffInspectorForObservingDiffContext;
-(void)_observeOtherSetting:(NSUInteger)arg0 withBlock:(id)arg1 ;
-(void)observePrimaryPosterOffsetWithBlock:(id)arg0 ;
-(void)observePrimaryPosterScaleWithBlock:(id)arg0 ;
-(void)observeSwitcherContextIDWithBlock:(id)arg0 ;
-(void)observeSwitcherLayoutModeWithBlock:(id)arg0 ;


@end


#endif