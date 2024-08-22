// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCOREDATACLOUDTRANSFORM_H
#define HMDCOREDATACLOUDTRANSFORM_H

@class HMFObject, NSManagedObjectContext, NSMutableSet, NSString, NSMutableDictionary;
@protocol HMDCoreDataCloudTransformDelegate, HMFLogging, HMDCoreDataNotificationListener;



@interface HMDCoreDataCloudTransform : HMFObject <HMDCoreDataCloudTransformDelegate, HMFLogging, HMDCoreDataNotificationListener>

 {
    hmf_unfair_data_lock_s _lock;
    NSManagedObjectContext *_lazyManagedObjectContext;
    NSMutableSet *_pendingChangedStoreIdentifiers;
    NSMutableSet *_cloudImportInProgressStoreIdentifiers;
    NSString *_cloudStoreConfigurationName;
    NSString *_workingStoreConfigurationName;
    NSMutableDictionary *_historyTokensByStoreIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMDCoreDataCloudTransformDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)exportTransformableClassFromEntity:(id)arg0 ;
+(Class)importTransformableClassFromEntity:(id)arg0 ;
+(id)_new;
+(id)exportTransformableEntityFromEntity:(id)arg0 ;
+(id)localTransformableEntityFromEntity:(id)arg0 ;
+(id)logCategory;
+(id)sharedInstance;
-(BOOL)cloudTransform:(id)arg0 isPermittedForHomeWithModelID:(id)arg1 ;
-(id)initWithCloudStoreConfigurationName:(id)arg0 workingStoreConfigurationName:(id)arg1 ;
-(id)managedObjectContextForCoreData:(id)arg0 ;
-(void)coreData:(id)arg0 cloudKitExportFinishedForStoreWithIdentifier:(id)arg1 duration:(CGFloat)arg2 error:(id)arg3 ;
-(void)coreData:(id)arg0 cloudKitExportStartedForStoreWithIdentifier:(id)arg1 ;
-(void)coreData:(id)arg0 cloudKitImportFinishedForStoreWithIdentifier:(id)arg1 duration:(CGFloat)arg2 error:(id)arg3 ;
-(void)coreData:(id)arg0 cloudKitImportStartedForStoreWithIdentifier:(id)arg1 ;
-(void)coreData:(id)arg0 persistentStoreWithIdentifierDidChange:(id)arg1 ;
-(void)runTransformForCoreData:(id)arg0 completion:(id)arg1 ;


@end


#endif