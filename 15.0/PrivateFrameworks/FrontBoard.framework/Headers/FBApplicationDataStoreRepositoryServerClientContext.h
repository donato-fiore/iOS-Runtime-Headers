// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBAPPLICATIONDATASTOREREPOSITORYSERVERCLIENTCONTEXT_H
#define FBAPPLICATIONDATASTOREREPOSITORYSERVERCLIENTCONTEXT_H

@class NSString, NSSet;
@protocol FBSServiceFacilityClientContext, FBApplicationDataStoreRepository, OS_dispatch_queue, FBSServiceFacilityClientHandle, FBApplicationDataStoreRepositoryServerClientContextDelegate;

#import <Foundation/Foundation.h>


@interface FBApplicationDataStoreRepositoryServerClientContext : NSObject <FBSServiceFacilityClientContext>

 {
    id<FBApplicationDataStoreRepository> *_dataStore;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _observingChanges;
}


@property (weak, nonatomic) NSObject<FBSServiceFacilityClientHandle> *clientHandle; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FBApplicationDataStoreRepositoryServerClientContextDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL interestedInAllChanges; // ivar: _interestedInAllChanges
@property (copy, nonatomic) NSSet *prefetchedKeys; // ivar: _prefetchedKeys
@property (readonly) Class superclass;


-(id)initWithDataStore:(id)arg0 ;
-(void)_queue_updateObservers;
-(void)_repositoryInvalidated:(id)arg0 ;
-(void)_valueChanged:(id)arg0 ;
-(void)dealloc;


@end


#endif