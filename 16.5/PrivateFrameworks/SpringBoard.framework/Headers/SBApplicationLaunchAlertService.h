// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPLICATIONLAUNCHALERTSERVICE_H
#define SBAPPLICATIONLAUNCHALERTSERVICE_H

@class NSSet, NSMutableSet, NSMutableDictionary, NSString;
@protocol BSDescriptionProviding, SBSceneManagerObserver, FBSceneObserver, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBApplicationController.h"
#import "SBAlertItemsController.h"

@interface SBApplicationLaunchAlertService : NSObject <BSDescriptionProviding, SBSceneManagerObserver, FBSceneObserver, BSInvalidatable>

 {
    NSSet *_launchAlertEvaluators;
    SBApplicationController *_applicationController;
    SBAlertItemsController *_alertItemsController;
    NSSet *_sceneManagers;
    NSMutableSet *_foregroundingScenes;
    NSMutableDictionary *_mapBundleIDToLaunchAlertInfo;
    BOOL _invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initObservingSceneManagers:(id)arg0 launchAlertEvaluators:(id)arg1 applicationController:(id)arg2 alertItemsController:(id)arg3 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_invalidateAndDismissLaunchAlertsForLaunchAlertInfo:(id)arg0 ;
-(void)_reallyShowLaunchAlertOfType:(NSUInteger)arg0 withLaunchAlertInfo:(id)arg1 application:(id)arg2 ;
-(void)_sceneDidBecomeForeground:(id)arg0 ;
-(void)_sceneDidResignForeground:(id)arg0 ;
-(void)_sceneWillBecomeForeground:(id)arg0 ;
-(void)_tryShowLaunchAlertsForLaunchAlertInfo:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)sceneContentStateDidChange:(id)arg0 ;
-(void)sceneManager:(id)arg0 didAddExternalForegroundApplicationSceneHandle:(id)arg1 ;
-(void)sceneManager:(id)arg0 didRemoveExternalForegroundApplicationSceneHandle:(id)arg1 ;
-(void)showLaunchAlertOfType:(NSUInteger)arg0 forApplication:(id)arg1 ;


@end


#endif