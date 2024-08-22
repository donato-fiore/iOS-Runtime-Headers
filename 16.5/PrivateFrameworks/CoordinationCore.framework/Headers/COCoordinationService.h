// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COCOORDINATIONSERVICE_H
#define COCOORDINATIONSERVICE_H

@class NSArray, NSMapTable, NSString, NSDictionary, NSOrderedSet;
@protocol COServiceDelegate, COClusterAssertionDelegate, COClusterAliasManagerMeshProvider, COClusterAliasManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "COMeshController.h"
#import "COClusterAliasManager.h"
#import "COHomeKitAdapter.h"
#import "COMediaGroupsAdapter.h"

@interface COCoordinationService : NSObject <COServiceDelegate, COClusterAssertionDelegate, COClusterAliasManagerMeshProvider, COClusterAliasManagerDelegate>

 {
    os_unfair_lock_s _lock;
    os_unfair_lock_s _servicesLock;
    BOOL _isMigrating;
}


@property (retain, nonatomic) COMeshController *activityGroupMesh; // ivar: _activityGroupMesh
@property (readonly, nonatomic) COClusterAliasManager *aliasManager; // ivar: _aliasManager
@property (readonly, nonatomic) NSArray *alwaysAssert; // ivar: _alwaysAssert
@property (readonly, nonatomic) NSMapTable *assertions; // ivar: _assertions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) COMeshController *dynamicGroupMesh; // ivar: _dynamicGroupMesh
@property (retain, nonatomic) COMeshController *groupMesh; // ivar: _groupMesh
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) COHomeKitAdapter *hkAdapter; // ivar: _hkAdapter
@property (retain, nonatomic) COMeshController *homeMesh; // ivar: _homeMesh
@property (readonly, nonatomic) NSDictionary *legacyServices; // ivar: _legacyServices
@property (retain, nonatomic) NSDictionary *meshes; // ivar: _meshes
@property (readonly, nonatomic) COMediaGroupsAdapter *mgAdapter; // ivar: _mgAdapter
@property (retain, nonatomic) COMeshController *pairMesh; // ivar: _pairMesh
@property (readonly, nonatomic) CGFloat pingMaximum; // ivar: _pingMaximum
@property (readonly, nonatomic) CGFloat pingMinimum; // ivar: _pingMinimum
@property (retain, nonatomic) COMeshController *roomMesh; // ivar: _roomMesh
@property (readonly, nonatomic) NSOrderedSet *services; // ivar: _services
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (retain, nonatomic) COMeshController *zoneMesh; // ivar: _zoneMesh


+(id)singleton;
+(void)setSingleton:(id)arg0 ;
+(void)startWithConstituentType:(NSUInteger)arg0 ;
-(id)_clusterNameForMeshController:(id)arg0 ;
-(id)_controllerForActivityGroup_unsafe;
-(id)_controllerForDynamicGroup_unsafe;
-(id)_controllerForHomeKitEntity_unsafe:(id)arg0 label:(id)arg1 ;
-(id)_initWithConstituentType:(NSUInteger)arg0 ;
-(id)_servicesForClusters:(id)arg0 ;
-(id)aliasManagerRequestsNewMesh:(id)arg0 ;
-(id)takeAssertionForCluster:(id)arg0 ;
-(void)_activityGroupsChange:(id)arg0 ;
-(void)_completeMigration;
-(void)_continueInitialization;
-(void)_continueMigration;
-(void)_controllerForCluster_unsafe:(id)arg0 label:(id)arg1 result:(id)arg2 ;
-(void)_initializeServices;
-(void)_initiateMigrationFrom:(NSInteger)arg0 ;
-(void)_linkServicesToMeshController:(id)arg0 withClusterIdentifier:(id)arg1 forClusters:(id)arg2 ;
-(void)_significantHomeChange:(id)arg0 ;
-(void)_unlinkServicesFromMeshController:(id)arg0 withClusterIdentifier:(id)arg1 forClusters:(id)arg2 ;
-(void)_withLock:(id)arg0 ;
-(void)_withServicesLock:(id)arg0 ;
-(void)aliasManager:(id)arg0 activatingMesh:(id)arg1 withClusterIdentifier:(id)arg2 forClusters:(id)arg3 completion:(id)arg4 ;
-(void)aliasManager:(id)arg0 deactivatingMesh:(id)arg1 withClusterIdentifier:(id)arg2 forClusters:(id)arg3 completion:(id)arg4 ;
-(void)didInvalidateAssertionForCluster:(id)arg0 ;
-(void)didStopMeshController:(id)arg0 ;
-(void)ensureOnDemandControllerForCluster:(id)arg0 completion:(id)arg1 ;
-(void)waitForClusterBootstrap:(id)arg0 completion:(id)arg1 ;


@end


#endif