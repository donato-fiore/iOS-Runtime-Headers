// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHUISWIDGETSCENESETTINGSDIFFINSPECTOR_H
#define CHUISWIDGETSCENESETTINGSDIFFINSPECTOR_H

@class UIApplicationSceneSettingsDiffInspector;



@interface CHUISWidgetSceneSettingsDiffInspector : UIApplicationSceneSettingsDiffInspector



-(void)_observerForKey:(NSInteger)arg0 observer:(id)arg1 ;
-(void)inspectDiff:(id)arg0 withContext:(id)arg1 ;
-(void)observeAnimationsPausedWithBlock:(id)arg0 ;
-(void)observeCanAppearInSecureEnvironmentWithBlock:(id)arg0 ;
-(void)observeColorSchemeWithBlock:(id)arg0 ;
-(void)observeContentPausedWithBlock:(id)arg0 ;
-(void)observeContentTypeWithBlock:(id)arg0 ;
-(void)observeInlineTextParametersWithBlock:(id)arg0 ;
-(void)observeInteractionDisabledWithBlock:(id)arg0 ;
-(void)observeMetricsWithBlock:(id)arg0 ;
-(void)observePrefersUnredactedContentInLowLuminanceEnvironmentWithBlock:(id)arg0 ;
-(void)observeShowsWidgetLabelWithBlock:(id)arg0 ;
-(void)observeSupportsLowLuminanceWithBlock:(id)arg0 ;
-(void)observeTintingParametersWithBlock:(id)arg0 ;
-(void)observeVisibilityWithBlock:(id)arg0 ;
-(void)observeVisibleEntryShouldSnapshotWithBlock:(id)arg0 ;
-(void)observeWidgetConfigurationIdentifierBlock:(id)arg0 ;
-(void)observeWidgetPriorityWithBlock:(id)arg0 ;
-(void)observeWidgetWithBlock:(id)arg0 ;


@end


#endif