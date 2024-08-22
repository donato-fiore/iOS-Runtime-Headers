// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSOFTWAREUPDATEDOCUMENTATIONMANAGER_H
#define HMDSOFTWAREUPDATEDOCUMENTATIONMANAGER_H

@class HMFObject, HMFNetMonitor, NSMutableOrderedSet, NSArray, NSString, NSMutableSet;
@protocol HMFLogging, HMFNetMonitorDelegate, OS_dispatch_queue;



@interface HMDSoftwareUpdateDocumentationManager : HMFObject <HMFLogging, HMFNetMonitorDelegate>

 {
    os_unfair_recursive_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
    HMFNetMonitor *_netMonitor;
    NSMutableOrderedSet *_assets;
}


@property (readonly) NSArray *assets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSMutableSet *registeredMetadata; // ivar: _registeredMetadata
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;


+(id)logCategory;
+(id)sharedManager;
-(id)assetForDocumentationMetadata:(id)arg0 ;
-(id)init;
-(void)addAsset:(id)arg0 ;
-(void)auditAsset:(id)arg0 ;
-(void)networkMonitorIsReachable:(id)arg0 ;
-(void)parseCachedAssets;
-(void)registerDocumentationMetadata:(id)arg0 ;
-(void)removeAsset:(id)arg0 ;
-(void)unregisterDocumentationMetadata:(id)arg0 ;


@end


#endif