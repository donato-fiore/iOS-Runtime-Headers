// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKSCENEDELEGATE_H
#define CKSCENEDELEGATE_H

@class NSString, UIWindowScene, UIWindow;
@protocol UIWindowSceneDelegate;

#import <Foundation/Foundation.h>

#import "CKMacToolbarController.h"

@interface CKSceneDelegate : NSObject <UIWindowSceneDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isHandlingLaunchTask) BOOL handlingLaunchTask; // ivar: _handlingLaunchTask
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) UIWindowScene *scene; // ivar: _scene
@property (readonly) Class superclass;
@property (retain, nonatomic) CKMacToolbarController *toolbarController; // ivar: _toolbarController
@property (retain, nonatomic) UIWindow *window; // ivar: _window


+(Class)containerClassForType:(NSInteger)arg0 ;
+(id)stateFromUserInfoDictionary:(id)arg0 ;
+(id)userInfoDictionaryForState:(id)arg0 ;
-(NSInteger)type;
-(id)canActivatePredicate;
-(id)init;
-(id)predicateMatchingConversation:(id)arg0 ;
-(id)prefersToActivatePredicate;
-(id)stateRestorationActivityForScene:(id)arg0 ;
-(void)_setFrameNameForWindowIfNeeded;
-(void)scene:(id)arg0 continueUserActivity:(id)arg1 ;
-(void)scene:(id)arg0 openURLContexts:(id)arg1 ;
-(void)scene:(id)arg0 willConnectToSession:(id)arg1 options:(id)arg2 ;
-(void)sceneDidBecomeActive:(id)arg0 ;
-(void)sceneDidDisconnect:(id)arg0 ;
-(void)sceneDidEnterBackground:(id)arg0 ;
-(void)sceneWillEnterForeground:(id)arg0 ;
-(void)sceneWillResignActive:(id)arg0 ;
-(void)updateSceneActivationConditions;
-(void)updateSceneTitleForConversation:(id)arg0 ;
-(void)windowSceneDidBecomeVisible:(id)arg0 ;


@end


#endif