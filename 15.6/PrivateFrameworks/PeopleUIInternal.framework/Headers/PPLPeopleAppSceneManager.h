// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPLPEOPLEAPPSCENEMANAGER_H
#define PPLPEOPLEAPPSCENEMANAGER_H

@class NSString, FBScene, NSPointerArray, FBApplicationUpdateScenesTransaction;
@protocol FBProcessWatchdogProviding, FBSceneObserver, FBApplicationUpdateScenesTransactionObserver, PPLPeopleAppLauncherDelegate;

#import <Foundation/Foundation.h>

#import "PPLPeopleAppLauncher.h"

@interface PPLPeopleAppSceneManager : NSObject <FBProcessWatchdogProviding, FBSceneObserver, FBApplicationUpdateScenesTransactionObserver, PPLPeopleAppLauncherDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PPLPeopleAppLauncher *peopleAppLauncher; // ivar: _peopleAppLauncher
@property (retain, nonatomic) FBScene *scene; // ivar: _scene
@property (readonly, copy, nonatomic) NSPointerArray *sceneRequesters; // ivar: _sceneRequesters
@property (readonly) Class superclass;
@property (retain, nonatomic) FBApplicationUpdateScenesTransaction *transaction; // ivar: _transaction


+(id)sharedSceneManager;
-(id)initWithAppLauncher:(id)arg0 ;
-(id)watchdogPolicyForProcess:(id)arg0 eventContext:(id)arg1 ;
-(void)_configureSceneForRequester:(id)arg0 ;
-(void)_createSceneForRequester:(id)arg0 ;
-(void)_launchPeopleAppIfNeededWithForegroundPriority:(BOOL)arg0 ;
-(void)_sendSceneToBackground;
-(void)_updateSceneSettingsForRequester:(id)arg0 ;
-(void)_updateTraitCollection;
-(void)addSceneRequester:(id)arg0 ;
-(void)removeSceneRequester:(id)arg0 ;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)sceneDidInvalidate:(id)arg0 ;
-(void)transaction:(id)arg0 didCreateScene:(id)arg1 ;
-(void)willLaunchPeopleAppInBackground:(id)arg0 ;


@end


#endif