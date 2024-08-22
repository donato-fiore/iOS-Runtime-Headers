// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBDISPLAYMANAGER_H
#define DBDISPLAYMANAGER_H

@class CRCarPlayAppPolicyEvaluator, DBClusterControlChannel, FBSDisplayLayoutPublisher, NSString, NSMutableDictionary, NSMutableSet, FBSceneManager, CARSessionStatus;
@protocol CARSessionObserving, DBNavigationAppInfoProviding, FBSceneManagerDelegate, FBSDisplayObserving;

#import <Foundation/Foundation.h>

#import "DBIconBadgeController.h"
#import "DBIconImageCache.h"
#import "DBLayerMetadataService.h"
#import "DBNavigationStateProvider.h"
#import "DBProcessMonitor.h"

@interface DBDisplayManager : NSObject <CARSessionObserving, DBNavigationAppInfoProviding, FBSceneManagerDelegate, FBSDisplayObserving>



@property (nonatomic) BOOL activated; // ivar: _activated
@property (retain, nonatomic) CRCarPlayAppPolicyEvaluator *appPolicyEvaluator; // ivar: _appPolicyEvaluator
@property (retain, nonatomic) DBClusterControlChannel *clusterControlChannel; // ivar: _clusterControlChannel
@property (retain, nonatomic) FBSDisplayLayoutPublisher *dashboardDisplayLayoutPublisher; // ivar: _dashboardDisplayLayoutPublisher
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *displayToEndpointInjector; // ivar: _displayToEndpointInjector
@property (retain, nonatomic) NSMutableDictionary *displayToEnvironmentMap; // ivar: _displayToEnvironmentMap
@property (retain, nonatomic) NSMutableDictionary *displayToPresentationBinderMap; // ivar: _displayToPresentationBinderMap
@property (retain, nonatomic) NSMutableDictionary *displayToRootSceneMap; // ivar: _displayToRootSceneMap
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) DBIconBadgeController *iconBadgeController; // ivar: _iconBadgeController
@property (retain, nonatomic) DBIconImageCache *iconImageCache; // ivar: _iconImageCache
@property (retain, nonatomic) DBLayerMetadataService *layerMetadataService; // ivar: _layerMetadataService
@property (retain, nonatomic) NSMutableSet *layerMetadataServiceRequesters; // ivar: _layerMetadataServiceRequesters
@property (retain, nonatomic) FBSceneManager *manager; // ivar: _manager
@property (retain, nonatomic) DBNavigationStateProvider *navigationStateProvider; // ivar: _navigationStateProvider
@property (retain, nonatomic) NSMutableSet *navigationStateProviderRequesters; // ivar: _navigationStateProviderRequesters
@property (retain, nonatomic) NSMutableSet *pendingDisplays; // ivar: _pendingDisplays
@property (retain, nonatomic) DBProcessMonitor *processMonitor; // ivar: _processMonitor
@property (retain, nonatomic) NSMutableSet *processMonitorRequesters; // ivar: _processMonitorRequesters
@property (retain, nonatomic) CARSessionStatus *sessionStatus; // ivar: _sessionStatus
@property (readonly) Class superclass;


-(BOOL)bundleIdentifierIsCertificationApp:(id)arg0 ;
-(BOOL)bundleIdentifierSupportsDashboard:(id)arg0 ;
-(BOOL)bundleIdentifierSupportsInstrumentCluster:(id)arg0 ;
-(id)environmentForDisplayIdentity:(id)arg0 ;
-(id)initWithAppPolicyEvaluator:(id)arg0 ;
-(id)sceneManager:(id)arg0 createDefaultTransitionContextForScene:(id)arg1 ;
-(void)_handleConnectedDisplaysIfPossible;
-(void)_setNeedsLayerMetadataService:(BOOL)arg0 forDisplayIdentity:(id)arg1 ;
-(void)_setNeedsNavigationStateProvider:(BOOL)arg0 forDisplayIdentity:(id)arg1 ;
-(void)_setNeedsTemplateProcessMonitor:(BOOL)arg0 forDisplayIdentity:(id)arg1 ;
-(void)_setPrimaryDisplayCornerMaskImageIfNecessary;
-(void)_updateLayerMetadataService;
-(void)_updateNavigationStateProvider;
-(void)_updateTemplateProcessMonitor;
-(void)activate;
-(void)displayMonitor:(id)arg0 didConnectIdentity:(id)arg1 withConfiguration:(id)arg2 ;
-(void)displayMonitor:(id)arg0 didUpdateIdentity:(id)arg1 withConfiguration:(id)arg2 ;
-(void)displayMonitor:(id)arg0 willDisconnectIdentity:(id)arg1 ;
-(void)enumerateEnvironmentsUsingBlock:(id)arg0 ;
-(void)sceneManager:(id)arg0 didCreateScene:(id)arg1 ;
-(void)sceneManager:(id)arg0 didDestroyScene:(id)arg1 ;
-(void)sceneManager:(id)arg0 scene:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)sceneManager:(id)arg0 scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)sceneManager:(id)arg0 updateForScene:(id)arg1 appliedWithContext:(id)arg2 ;
-(void)sceneManager:(id)arg0 updateForScene:(id)arg1 completedWithContext:(id)arg2 error:(id)arg3 ;
-(void)sceneManager:(id)arg0 updateForScene:(id)arg1 preparedWithContext:(id)arg2 ;
-(void)sceneManager:(id)arg0 willDestroyScene:(id)arg1 ;
-(void)sessionDidConnect:(id)arg0 ;
-(void)sessionDidDisconnect:(id)arg0 ;


@end


#endif