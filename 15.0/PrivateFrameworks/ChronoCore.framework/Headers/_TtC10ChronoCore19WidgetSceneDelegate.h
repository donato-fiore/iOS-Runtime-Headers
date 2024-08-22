// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC10CHRONOCORE19WIDGETSCENEDELEGATE_H
#define _TTC10CHRONOCORE19WIDGETSCENEDELEGATE_H

@class UIResponder, NSString, UIWindow;
@protocol CHUISAvocadoWindowSceneDelegate;



@interface _TtC10ChronoCore19WidgetSceneDelegate : UIResponder <CHUISAvocadoWindowSceneDelegate>

 {
    ? timelineService;
    ? connection;
    ? foregroundScene;
    ? hasBeenVisiblySettledForCurrentVisibilitySession;
    ? effectiveVisibility;
    ? timelineReloadedNotificationCancellable;
    ? evaluateStaleTimelineContentTimer;
    ? layerSnapshotter;
    ? extensionSubscriptions;
    ? foregroundSceneContentLimiter;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) UIWindow *window; // ivar: window


-(id)init;
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