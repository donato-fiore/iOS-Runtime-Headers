// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSYSTEMSHELLEXTENDEDDISPLAYCONTROLLERPOLICY_H
#define SBSYSTEMSHELLEXTENDEDDISPLAYCONTROLLERPOLICY_H

@class FBSDisplayIdentity, CADisplay, SBExternalDisplayDefaults, SBSDisplayModeSettings, SBDisplayScaleMapping, FBSceneManager, FBScene, FBSDisplayConfiguration, NSString;
@protocol SBExternalDisplayServiceObserver, PTSettingsKeyObserver, SBSceneHostingDisplayControllerPolicy, BSDefaultObserver;

#import <Foundation/Foundation.h>

#import "SBSceneHostingDisplayController.h"
#import "SBExternalDisplayService.h"
#import "SBExternalDisplayRuntimeAvailabilitySettings.h"
#import "SBMousePointerManager.h"

@interface SBSystemShellExtendedDisplayControllerPolicy : NSObject <SBExternalDisplayServiceObserver, PTSettingsKeyObserver, SBSceneHostingDisplayControllerPolicy>

 {
    SBSceneHostingDisplayController *_displayController;
    FBSDisplayIdentity *_displayIdentity;
    CADisplay *_caDisplay;
    SBExternalDisplayDefaults *_externalDisplayDefaults;
    id<BSDefaultObserver> *_externalDisplayDefaultsToken;
    id<BSDefaultObserver> *_displayModeSettingsToken;
    SBExternalDisplayService *_externalDisplayService;
    SBExternalDisplayRuntimeAvailabilitySettings *_runtimeAvailabilitySettings;
    SBMousePointerManager *_mousePointerManager;
    BOOL _metRuntimeRequirementsAtLeastOnce;
    SBSDisplayModeSettings *_displayModeSettings;
    SBDisplayScaleMapping *_displayScaleMapping;
    FBSceneManager *_fbSceneManager;
    FBScene *_currentScene;
    NSUInteger _previouslyReceivedDeactivationReasons;
    FBSDisplayConfiguration *_lastPresentationUpdateDisplayConfiguration;
    CGFloat _contentScale;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_areRuntimeAvailabilityRequirementsMet;
-(BOOL)displayController:(id)arg0 shouldUpdatePresentationWithSceneManager:(id)arg1 displayConfiguration:(id)arg2 ;
-(BOOL)displayControllerShouldHaveControlOfDisplay:(id)arg0 ;
-(CGFloat)_preferredContentsScale;
-(NSInteger)_currentRuntimeMask;
-(NSInteger)preferredOverscanCompensationForDisplayController:(id)arg0 ;
-(NSUInteger)displayAssertionDeactivationReasons:(id)arg0 ;
-(NSUInteger)displayAssertionPriorityLevel:(id)arg0 ;
-(NSUInteger)preferredPointScaleForDisplayController:(id)arg0 ;
-(id)_fetchOrCreateSceneWithDisplayConfiguration:(id)arg0 deactivationReasons:(NSUInteger)arg1 ;
-(id)_preferredModeForDisplayForTargetCADisplay:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)displayArrangementForDisplayController:(id)arg0 ;
-(id)initWithExternalDisplayDefaults:(id)arg0 externalDisplayService:(id)arg1 mousePointerManager:(id)arg2 runtimeAvailabilitySettings:(id)arg3 sceneManager:(id)arg4 ;
-(id)powerLogEntryForDisplayConfiguration:(id)arg0 ;
-(id)preferredDisplayModeForDisplayController:(id)arg0 ;
-(struct CGSize )_preferredSizeInPixelsForTargetCADisplay:(id)arg0 ;
-(struct CGSize )_preferredSizeInPointsForTargetCADisplay:(id)arg0 ;
-(struct CGSize )preferredLogicalScaleForDisplayController:(id)arg0 ;
-(void)connectToDisplayController:(id)arg0 displayConfiguration:(id)arg1 ;
-(void)dealloc;
-(void)displayController:(id)arg0 didBeginTransaction:(id)arg1 sceneManager:(id)arg2 displayConfiguration:(id)arg3 deactivationReasons:(NSUInteger)arg4 ;
-(void)displayController:(id)arg0 didGainControlOfDisplayWithSceneManager:(id)arg1 ;
-(void)displayController:(id)arg0 sceneManager:(id)arg1 didLoseControlOfDisplayWithDeactivationReasons:(NSUInteger)arg2 ;
-(void)displayController:(id)arg0 sceneManager:(id)arg1 didReceiveNewDeactivationReasons:(NSUInteger)arg2 ;
-(void)displayController:(id)arg0 transformDisplayConfiguration:(id)arg1 withBuilder:(id)arg2 ;
-(void)displayController:(id)arg0 updatePresentationWithSceneManager:(id)arg1 displayConfiguration:(id)arg2 completion:(id)arg3 ;
-(void)displayControllerDidDisconnect:(id)arg0 sceneManager:(id)arg1 ;
-(void)externalDisplayServiceDidUpdatePreferredDisplayArrangement:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif