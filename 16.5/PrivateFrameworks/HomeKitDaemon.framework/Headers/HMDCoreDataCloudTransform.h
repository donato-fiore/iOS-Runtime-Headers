// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCOREDATACLOUDTRANSFORM_H
#define HMDCOREDATACLOUDTRANSFORM_H

@class HMFObject, NSManagedObjectContext, NSMutableSet, NSMutableDictionary, NSMapTable, NSString;
@protocol HMDCoreDataCloudTransformDelegate, HMFLogging, HMDCoreDataNotificationListener, OS_os_log, HMMLogEventSubmitting;


#import "HMDCoreDataCloudTransformMergePolicy.h"
#import "HMDCoreData.h"

@interface HMDCoreDataCloudTransform : HMFObject <HMDCoreDataCloudTransformDelegate, HMFLogging, HMDCoreDataNotificationListener>

 {
    NSObject<OS_os_log> *_logger;
    hmf_unfair_data_lock_s _lock;
    NSUInteger _importSignpostID;
    HMDCoreDataCloudTransformMergePolicy *_mergePolicy;
    BOOL _fakeRecordsEnabled;
    NSManagedObjectContext *_lazyManagedObjectContext;
    NSMutableSet *_pendingChangedStoreIdentifiers;
    NSMutableSet *_cloudImportInProgressStoreIdentifiers;
    HMDCoreData *_coreData;
    id<HMMLogEventSubmitting> *_logEventSubmitter;
    NSMutableDictionary *_historyTokensByStoreIdentifier;
    NSMapTable *_cloudChangeListeners;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMDCoreDataCloudTransformDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSManagedObjectContext *managedObjectContext;
@property (readonly) Class superclass;


+(BOOL)transactionIsCloudStoreReset:(id)arg0 context:(id)arg1 ;
+(Class)exportTransformableClassFromEntity:(id)arg0 ;
+(Class)importTransformableClassFromEntity:(id)arg0 ;
+(id)exportTransformableEntityFromEntity:(id)arg0 ;
+(id)localTransformableEntityFromEntity:(id)arg0 ;
+(id)logCategory;
+(id)new;
+(id)sharedInstance;
+(void)wipeCoreDataStorageDueToPCSIdentityLossAndRelaunchHomeKitDaemon;
-(BOOL)cloudTransform:(id)arg0 isPermittedForHomeWithModelID:(id)arg1 isImport:(BOOL)arg2 ;
-(BOOL)runTransformWithError:(*id)arg0 ;
-(id)init;
-(id)initWithCoreData:(id)arg0 fakeRecordsEnabled:(BOOL)arg1 logEventSubmitter:(id)arg2 ;
-(id)initWithCoreData:(id)arg0 logEventSubmitter:(id)arg1 ;
-(id)newCloudMirrorExportStatusMonitor;
-(void)coreData:(id)arg0 cloudKitExportFinishedForStoreWithIdentifier:(id)arg1 duration:(CGFloat)arg2 error:(id)arg3 ;
-(void)coreData:(id)arg0 cloudKitExportStartedForStoreWithIdentifier:(id)arg1 ;
-(void)coreData:(id)arg0 cloudKitImportFinishedForStoreWithIdentifier:(id)arg1 duration:(CGFloat)arg2 error:(id)arg3 ;
-(void)coreData:(id)arg0 cloudKitImportStartedForStoreWithIdentifier:(id)arg1 ;
-(void)coreData:(id)arg0 persistentStoreWithIdentifierDidChange:(id)arg1 ;
-(void)countResidentsInHomeWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)registerCloudChangeListener:(id)arg0 forEntities:(id)arg1 ;
-(void)runCompleteMergeTransformForHomeWithModelID:(id)arg0 completion:(id)arg1 ;
-(void)runTransformWithCompletion:(id)arg0 ;


@end


#endif