// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16MAGNIFIERSUPPORT13SCENEDELEGATE_H
#define _TTC16MAGNIFIERSUPPORT13SCENEDELEGATE_H

@class UIResponder, UIWindow;
@protocol UIWindowSceneDelegate;



@interface _TtC16MagnifierSupport13SceneDelegate : UIResponder <UIWindowSceneDelegate>



@property (nonatomic, retain) UIWindow *window; // ivar: window


-(id)init;
-(void)scene:(id)arg0 openURLContexts:(id)arg1 ;
-(void)scene:(id)arg0 willConnectToSession:(id)arg1 options:(id)arg2 ;
-(void)sceneDidBecomeActive:(id)arg0 ;
-(void)sceneDidDisconnect:(id)arg0 ;
-(void)sceneDidEnterBackground:(id)arg0 ;
-(void)sceneWillEnterForeground:(id)arg0 ;
-(void)sceneWillResignActive:(id)arg0 ;
-(void)updateAppearanceForReduceTransparency:(id)arg0 ;


@end


#endif