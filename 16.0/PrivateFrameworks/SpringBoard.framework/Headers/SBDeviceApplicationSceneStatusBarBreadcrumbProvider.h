// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDEVICEAPPLICATIONSCENESTATUSBARBREADCRUMBPROVIDER_H
#define SBDEVICEAPPLICATIONSCENESTATUSBARBREADCRUMBPROVIDER_H

@class SiriBreadcrumbSource, NSHashTable, NSString;
@protocol SBDeviceApplicationSceneHandleObserver;

#import <Foundation/Foundation.h>

#import "SBBreadcrumbActionContext.h"
#import "SBDeviceApplicationSceneHandle.h"

@interface SBDeviceApplicationSceneStatusBarBreadcrumbProvider : NSObject <SBDeviceApplicationSceneHandleObserver>

 {
    SiriBreadcrumbSource *_siriSource;
    SBBreadcrumbActionContext *_currentBreadcrumbActionContext;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    NSHashTable *_observers;
}


@property (readonly, copy, nonatomic) NSString *breadcrumbSecondaryTitle;
@property (readonly, copy, nonatomic) NSString *breadcrumbTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasBreadcrumb;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_shouldAddBreadcrumbToActivatingSceneEntity:(id)arg0 sceneHandle:(id)arg1 withTransitionContext:(id)arg2 ;
+(id)_breadcrumbBundleIdForActivatingSceneEntity:(id)arg0 withTransitionContext:(id)arg1 ;
+(id)_breadcrumbPrimaryTitleForAppWithBundleID:(id)arg0 sceneHandle:(id)arg1 activatingSceneEntity:(id)arg2 ;
+(id)_breadcrumbSceneIdForForAppWithBundleID:(id)arg0 activatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2 ;
+(id)_destinationContextsForActivatingSceneEntity:(id)arg0 withTransitionContext:(id)arg1 ;
-(BOOL)_hasPrimaryBreadcrumb;
-(BOOL)_hasSecondaryBreadcrumb;
-(BOOL)_showTransientOvelayInPlace;
-(BOOL)activateBreadcrumbIfPossible;
-(BOOL)activateSecondaryBreadcrumbIfPossible;
-(NSInteger)_openStrategyForAppLinkState:(id)arg0 ;
-(id)_breadcrumbNavigationActionContextForActivatingSceneEntity:(id)arg0 withTransitionContext:(id)arg1 ;
-(id)breadcrumbActionsForActivatingSceneEntity:(id)arg0 withTransitionContext:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithSceneHandle:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_activateAppLink:(id)arg0 withAppLinkState:(id)arg1 wasFromSpotlight:(BOOL)arg2 previousSideBundleID:(id)arg3 previousBreadcrumb:(id)arg4 ;
-(void)_activateBreadcrumbApplication:(id)arg0 withSceneIdentifier:(id)arg1 ;
-(void)_handleBreadcrumbAction:(NSUInteger)arg0 analyticsSide:(NSUInteger)arg1 ;
-(void)_installedApplicationsDidChange:(id)arg0 ;
-(void)_presentAssistantFromBreadcrumb;
-(void)_presentSpotlightFromBreadcrumb;
-(void)_setCurrentBreadcrumbActionContext:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)captureContextForActivatingSceneEntity:(id)arg0 withTransitionContext:(id)arg1 ;
-(void)noteDidUpdateDisplayProperties;
-(void)prepareForReuse;
-(void)removeObserver:(id)arg0 ;
-(void)sceneHandle:(id)arg0 didChangeEffectiveForegroundness:(BOOL)arg1 ;


@end


#endif