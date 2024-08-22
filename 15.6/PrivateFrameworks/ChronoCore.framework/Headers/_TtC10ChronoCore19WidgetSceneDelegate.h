// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC10CHRONOCORE19WIDGETSCENEDELEGATE_H
#define _TTC10CHRONOCORE19WIDGETSCENEDELEGATE_H

@class UIResponder, NSString, UIWindow;
@protocol CHUISAvocadoWindowSceneDelegate, _UISceneSettingsDiffAction;



@interface _TtC10ChronoCore19WidgetSceneDelegate : UIResponder <CHUISAvocadoWindowSceneDelegate, _UISceneSettingsDiffAction>

 {
    ? timelineService;
    ? connection;
    ? foregroundScene;
    ? hasBeenVisiblySettledForCurrentVisibilitySession;
    ? effectiveVisibility;
    ? timelineReloadedNotificationCancellable;
    ? timelineServiceCanAppearInSecureEnvironmentAssertion;
    ? evaluateStaleTimelineContentTimer;
    ? layerSnapshotter;
    ? snapshotGeneration;
    ? invalidateAfterSnapshot;
    ? liveViewPresentationContext;
    ? sceneSettingsDiffInspector;
    ? sceneDiffActionKey;
    ? extensionSubscriptions;
    ? foregroundSceneContentLimiter;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) UIWindow *window; // ivar: window


-(id)init;
-(void)_performActionsForUIScene:(id)arg0 withUpdatedFBSScene:(id)arg1 settingsDiff:(id)arg2 fromSettings:(id)arg3 transitionContext:(id)arg4 lifecycleActionType:(unsigned int)arg5 ;
-(void)applicationDidReceiveMemoryWarning;
-(void)dealloc;
-(void)scene:(id)arg0 willConnectToSession:(id)arg1 options:(id)arg2 ;
-(void)sceneDidBecomeActive:(id)arg0 ;
-(void)sceneDidDisconnect:(id)arg0 ;
-(void)sceneDidEnterBackground:(id)arg0 ;
-(void)sceneWillEnterForeground:(id)arg0 ;
-(void)sceneWillResignActive:(id)arg0 ;


@end


#endif