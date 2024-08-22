// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10CHRONOCORE19WIDGETSCENEDELEGATE_H
#define _TTC10CHRONOCORE19WIDGETSCENEDELEGATE_H

@class UIResponder, NSString, UIWindow;
@protocol CHUISWidgetSceneDelegate, _UISceneSettingsDiffAction, _UISceneBSActionHandler;



@interface _TtC10ChronoCore19WidgetSceneDelegate : UIResponder <CHUISWidgetSceneDelegate, _UISceneSettingsDiffAction, _UISceneBSActionHandler>

 {
    ? timelineService;
    ? connection;
    ? foregroundScene;
    ? hasBeenVisiblySettledForCurrentVisibilitySession;
    ? effectiveVisibility;
    ? timelineReloadedNotificationCancellable;
    ? evaluateStaleTimelineContentTimer;
    ? layerSnapshotter;
    ? snapshotGeneration;
    ? invalidateAfterSnapshot;
    ? sceneSettingsDiffInspector;
    ? sceneDiffActionKey;
    ? confirmationActionSubscribers;
    ? foregroundSceneContentLimiter;
    ? environmentModifiersAssertion;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) UIWindow *window; // ivar: window


-(id)_respondToActions:(id)arg0 forFBSScene:(id)arg1 inUIScene:(id)arg2 fromTransitionContext:(id)arg3 ;
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