// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COSERVICE_H
#define COSERVICE_H

@class NSDictionary, NSArray, NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, COServiceAddOnProvider, COServiceDelegate, OS_dispatch_queue, COServiceListenerProvider;

#import <Foundation/Foundation.h>


@interface COService : NSObject <NSXPCListenerDelegate>



@property (readonly, nonatomic) NSObject<COServiceAddOnProvider> *addOnProvider; // ivar: _addOnProvider
@property (copy, nonatomic) NSDictionary *addOns; // ivar: _addOns
@property (copy, nonatomic) NSDictionary *assertions; // ivar: _assertions
@property (copy, nonatomic) NSArray *clients; // ivar: _clients
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<COServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (readonly, nonatomic) NSObject<COServiceListenerProvider> *listenerProvider; // ivar: _listenerProvider
@property (readonly) Class superclass;


+(BOOL)_isAllowedClient:(id)arg0 ;
-(BOOL)_applicableToCluster:(id)arg0 ;
-(BOOL)_canRequestCreationOfCluster:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_addOnForCluster:(id)arg0 ;
-(id)_clientForConnection:(id)arg0 ;
-(id)_clustersForAddOn:(id)arg0 ;
-(id)_currentClient;
-(id)_uniqueAddOns;
-(id)initWithListenerProvider:(id)arg0 addOnProvider:(id)arg1 delegate:(id)arg2 ;
-(void)_addMesh:(id)arg0 forCluster:(id)arg1 ;
-(void)_addMesh:(id)arg0 forClusters:(id)arg1 ;
-(void)_addOnAdded:(id)arg0 ;
-(void)_addOnForCluster:(id)arg0 completion:(id)arg1 ;
-(void)_addOnRemoved:(id)arg0 ;
-(void)_clientLost:(id)arg0 ;
-(void)_configureServiceInterfacesOnConnection:(id)arg0 ;
-(void)_releaseAssertionForCluster:(id)arg0 ;
-(void)_removeMeshForCluster:(id)arg0 ;
-(void)_removeMeshForClusters:(id)arg0 ;
-(void)_serviceReady;
-(void)_takeAssertionForCluster:(id)arg0 ;
-(void)joinClusters:(id)arg0 usingMeshController:(id)arg1 withClusterIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)leaveClusters:(id)arg0 withClusterIdentifier:(id)arg1 completion:(id)arg2 ;


@end


#endif