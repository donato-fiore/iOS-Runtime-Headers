// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAPPLICATIONSUPPORTSERVICEREQUESTCONTEXT_H
#define SBAPPLICATIONSUPPORTSERVICEREQUESTCONTEXT_H

@class UISApplicationInitializationContext, FBSDisplayConfiguration;
@protocol SBApplicationSupportServiceRequestPersistenceIdentifierProvider, SBApplicationSceneIdentityProviding, SBApplicationSupportServiceRequestSceneIdentityTokenProvider;

#import <Foundation/Foundation.h>

#import "SBApplication.h"

@interface SBApplicationSupportServiceRequestContext : NSObject {
    BOOL _hostIsSpringBoard;
    SBApplication *_app;
    SBApplication *_hostApp;
    SBApplication *_extensionContainingApp;
    UISApplicationInitializationContext *_applicationInitializationContext;
    FBSDisplayConfiguration *_launchDisplayConfiguration;
    id<SBApplicationSupportServiceRequestPersistenceIdentifierProvider> *_preferredAppPersistenceIDProvider;
    id<SBApplicationSceneIdentityProviding> *_preferredAppSceneIdentityProvider;
    id<SBApplicationSupportServiceRequestSceneIdentityTokenProvider> *_preferredSceneIdentityTokenProvider;
}


@property (readonly, nonatomic) UISApplicationInitializationContext *applicationInitializationContext;


+(id)_hostProcessForProcess:(id)arg0 ;
+(id)hostingApplicationBundleIDForPid:(int)arg0 ;
+(id)initializationContextForClient:(id)arg0 ;
-(NSInteger)_main_effectiveClassicMode;
-(NSUInteger)_main_effectiveScreenType;
-(id)_main_appPersistenceIDProvider;
-(id)_main_appSceneIdentityProvider;
-(id)_main_deviceContext;
-(id)_main_displayContextForDisplayConfiguration:(id)arg0 ;
-(id)_main_effectiveApplicationForCompatibility;
-(id)_main_embeddedDisplayContext;
-(id)_main_launchDisplayContext;
-(id)_main_persistenceIDs;
-(id)_main_sceneIdentityTokenProvider;
-(id)initWithApplication:(id)arg0 launchDisplayConfiguration:(id)arg1 ;
-(id)initWithApplication:(id)arg0 launchDisplayConfiguration:(id)arg1 persistenceIdentifierProvider:(id)arg2 sceneIdentityProvider:(id)arg3 sceneIdentityTokenProvider:(id)arg4 ;
-(id)initWithClient:(id)arg0 host:(id)arg1 ;
-(void)_main_applyClassicModeLiesIfNecessaryToDisplayContext:(id)arg0 ;


@end


#endif