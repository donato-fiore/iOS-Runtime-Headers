// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBAPPLICATIONDATASTOREREPOSITORYSERVER_H
#define FBAPPLICATIONDATASTOREREPOSITORYSERVER_H

@class FBSServiceFacility, NSString;
@protocol FBApplicationDataStoreRepositoryServerClientContextDelegate, FBApplicationDataStoreRepository;


#import "FBServiceClientAuthenticator.h"

@interface FBApplicationDataStoreRepositoryServer : FBSServiceFacility <FBApplicationDataStoreRepositoryServerClientContextDelegate>

 {
    FBServiceClientAuthenticator *_connectionAuthenticator;
}


@property (retain, nonatomic) NSObject<FBApplicationDataStoreRepository> *dataStore; // ivar: _dataStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)shouldAllowClientConnection:(id)arg0 withMessage:(id)arg1 ;
-(id)_init;
-(id)_prerequisiteMilestones;
-(void)_handleGetAvailableDataStores:(id)arg0 ;
-(void)_handleGetObjectForKey:(id)arg0 ;
-(void)_handleRemoveAllObjects:(id)arg0 ;
-(void)_handleRemoveObjectForKey:(id)arg0 context:(id)arg1 ;
-(void)_handleSetChangesInterest:(id)arg0 context:(id)arg1 ;
-(void)_handleSetObjectForKey:(id)arg0 context:(id)arg1 ;
-(void)_handleSetPrefetchedKeys:(id)arg0 context:(id)arg1 ;
-(void)_handleSynchronize:(id)arg0 ;
-(void)applicationDataStoreRepositoryClientContext:(id)arg0 repositoryInvalidatedForBundleID:(id)arg1 ;
-(void)applicationDataStoreRepositoryClientContext:(id)arg0 valueChangedForObject:(id)arg1 key:(id)arg2 bundleID:(id)arg3 ;
-(void)noteClientDidConnect:(id)arg0 withMessage:(id)arg1 ;
-(void)noteClientDidDisconnect:(id)arg0 ;
-(void)noteDidReceiveMessage:(id)arg0 withType:(NSInteger)arg1 fromClient:(id)arg2 ;


@end


#endif