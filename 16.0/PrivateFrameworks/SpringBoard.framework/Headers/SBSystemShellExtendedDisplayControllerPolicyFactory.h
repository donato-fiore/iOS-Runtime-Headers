// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSYSTEMSHELLEXTENDEDDISPLAYCONTROLLERPOLICYFACTORY_H
#define SBSYSTEMSHELLEXTENDEDDISPLAYCONTROLLERPOLICYFACTORY_H

@class SBExternalDisplayDefaults, FBSceneManager, NSString;
@protocol SBSceneHostingDisplayControllerPolicyFactory;

#import <Foundation/Foundation.h>

#import "SBExternalDisplayService.h"
#import "SBMousePointerManager.h"
#import "SBExternalDisplayRuntimeAvailabilitySettings.h"

@interface SBSystemShellExtendedDisplayControllerPolicyFactory : NSObject <SBSceneHostingDisplayControllerPolicyFactory>

 {
    SBExternalDisplayService *_externalDisplayService;
    SBExternalDisplayDefaults *_externalDisplayDefaults;
    SBMousePointerManager *_mousePointerManager;
    SBExternalDisplayRuntimeAvailabilitySettings *_runtimeAvailabilitySettings;
    FBSceneManager *_sceneManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithExternalDisplayService:(id)arg0 externalDisplayDefaults:(id)arg1 mousePointerManager:(id)arg2 runtimeAvailabilitySettings:(id)arg3 sceneManager:(id)arg4 ;
-(id)policyForConnectingDisplay:(id)arg0 ;
-(void)transformDisplayForControllersWithBuilder:(id)arg0 ;


@end


#endif