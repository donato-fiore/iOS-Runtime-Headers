// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11POSTERBOARD21SWITCHERSCENEDELEGATE_H
#define _TTC11POSTERBOARD21SWITCHERSCENEDELEGATE_H

@class UIResponder, UIScene, UIWindow;
@protocol UIWindowSceneDelegate, _UISceneComponentProviding, _UISceneSettingsDiffAction, _UISceneBSActionHandler;



@interface _TtC11PosterBoard21SwitcherSceneDelegate : UIResponder <UIWindowSceneDelegate, _UISceneComponentProviding, _UISceneSettingsDiffAction, _UISceneBSActionHandler>

 {
    ? $__lazy_storage_$_sceneSettingsDiffInspector;
    ? switcherInUseAssertion;
}


@property (nonatomic, retain) UIScene *_scene; // ivar: _scene
@property (nonatomic, retain) UIWindow *window; // ivar: window


-(id)_actionHandlersForScene:(id)arg0 ;
-(id)_respondToActions:(id)arg0 forFBSScene:(id)arg1 inUIScene:(id)arg2 fromTransitionContext:(id)arg3 ;
-(id)_settingsDiffActionsForScene:(id)arg0 ;
-(id)init;
-(id)initWithScene:(id)arg0 ;
-(void)_performActionsForUIScene:(id)arg0 withUpdatedFBSScene:(id)arg1 settingsDiff:(id)arg2 fromSettings:(id)arg3 transitionContext:(id)arg4 lifecycleActionType:(unsigned int)arg5 ;
-(void)_setScene:(id)arg0 ;
-(void)dataStoreDidTearDown;
-(void)scene:(id)arg0 willConnectToSession:(id)arg1 options:(id)arg2 ;
-(void)sceneDidBecomeActive:(id)arg0 ;
-(void)sceneDidEnterBackground:(id)arg0 ;
-(void)sceneWillEnterForeground:(id)arg0 ;
-(void)sceneWillResignActive:(id)arg0 ;
-(void)windowDidAttachContext:(id)arg0 ;
-(void)windowDidDetachContext:(id)arg0 ;


@end


#endif