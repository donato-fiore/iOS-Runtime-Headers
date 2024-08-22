// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COCLUSTERALIASMANAGER_H
#define COCLUSTERALIASMANAGER_H

@class NSDictionary, NSString, NSSet;
@protocol COClusterResolverDelegate, COClusterAliasManagerDelegate, OS_dispatch_queue, COClusterAliasManagerMeshProvider;

#import <Foundation/Foundation.h>


@interface COClusterAliasManager : NSObject <COClusterResolverDelegate>



@property (retain, nonatomic) NSDictionary *associations; // ivar: _associations
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<COClusterAliasManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateDispatchQueue; // ivar: _delegateDispatchQueue
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *identifiers; // ivar: _identifiers
@property (retain, nonatomic) NSDictionary *meshes; // ivar: _meshes
@property (readonly, weak, nonatomic) NSObject<COClusterAliasManagerMeshProvider> *provider; // ivar: _provider
@property (retain, nonatomic) NSDictionary *resolvers; // ivar: _resolvers
@property (retain, nonatomic) NSSet *starting; // ivar: _starting
@property (retain, nonatomic) NSSet *stopping; // ivar: _stopping
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *updates; // ivar: _updates


+(id)aliasManagerWithProvider:(id)arg0 delegate:(id)arg1 delegateDispatchQueue:(id)arg2 ;
-(id)_initWithProvider:(id)arg0 delegate:(id)arg1 delegateDispatchQueue:(id)arg2 ;
-(id)_labelForClusters:(id)arg0 ;
-(id)_prepareNewMeshWithClusterIdentifier:(id)arg0 forClusters:(id)arg1 ;
-(void)_activateMeshWithClusterIdentifier:(id)arg0 forClusters:(id)arg1 ;
-(void)_applyUpdates;
-(void)_deactivateMeshWithClusterIdentifier:(id)arg0 ;
-(void)_delegateNotifyActivatingMesh:(id)arg0 withClusterIdentifier:(id)arg1 forClusters:(id)arg2 completion:(id)arg3 ;
-(void)_delegateNotifyDeactivatingMesh:(id)arg0 withClusterIdentifier:(id)arg1 forClusters:(id)arg2 completion:(id)arg3 ;
-(void)_recomputeAssociations;
-(void)_updateClusterIdentifier:(id)arg0 forCluster:(id)arg1 ;
-(void)didStopMeshController:(id)arg0 ;
-(void)resolver:(id)arg0 clusterIdentifierChanged:(id)arg1 ;
-(void)startTrackingCluster:(id)arg0 ;
-(void)stopTrackingCluster:(id)arg0 ;
-(void)waitForBootstrapOfCluster:(id)arg0 withBlock:(id)arg1 ;


@end


#endif