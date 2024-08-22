// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHUISAVOCADOSCENESETTINGSDIFFINSPECTOR_H
#define CHUISAVOCADOSCENESETTINGSDIFFINSPECTOR_H

@class UIApplicationSceneSettingsDiffInspector;



@interface CHUISAvocadoSceneSettingsDiffInspector : UIApplicationSceneSettingsDiffInspector



-(void)_observerForKey:(NSInteger)arg0 observer:(id)arg1 ;
-(void)observeAnimationDisablementWithBlock:(id)arg0 ;
-(void)observeMetricsWithBlock:(id)arg0 ;
-(void)observeStyleWithBlock:(id)arg0 ;
-(void)observeVisibilityWithBlock:(id)arg0 ;
-(void)observeVisibleEntryShouldSnapshotWithBlock:(id)arg0 ;
-(void)observeWidgetConfigurationIdentifierBlock:(id)arg0 ;
-(void)observeWidgetWithBlock:(id)arg0 ;


@end


#endif