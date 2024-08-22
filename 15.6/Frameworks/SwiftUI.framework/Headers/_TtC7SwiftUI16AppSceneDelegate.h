// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC7SWIFTUI16APPSCENEDELEGATE_H
#define _TTC7SWIFTUI16APPSCENEDELEGATE_H

@class UIResponder, UIWindow;
@protocol UIWindowSceneDelegate;



@interface _TtC7SwiftUI16AppSceneDelegate : UIResponder <UIWindowSceneDelegate>

 {
    ? $__lazy_storage_$_appDelegate;
    ? sceneItemID;
    ? lastVersion;
    ? sceneBridge;
    ? scenePhase;
    ? sceneDelegateBox;
    ? sceneStorageValues;
    ? presentedID;
}


@property (nonatomic, retain) UIWindow *window; // ivar: window


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)stateRestorationActivityForScene:(id)arg0 ;
-(void)scene:(id)arg0 continueUserActivity:(id)arg1 ;
-(void)scene:(id)arg0 openURLContexts:(id)arg1 ;
-(void)scene:(id)arg0 willConnectToSession:(id)arg1 options:(id)arg2 ;
-(void)sceneDidBecomeActive:(id)arg0 ;
-(void)sceneDidDisconnect:(id)arg0 ;
-(void)sceneDidEnterBackground:(id)arg0 ;
-(void)sceneWillEnterForeground:(id)arg0 ;
-(void)sceneWillResignActive:(id)arg0 ;


@end


#endif