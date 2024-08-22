// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLASSETSDPHOTOKITSERVICE_H
#define PLASSETSDPHOTOKITSERVICE_H

@class NSPersistentStoreCoordinator, NSString;
@protocol PLPerformChangesRequestService, PLSyndicationSyncManagerDelegate, PLAssetsdPhotoKitServiceProtocol;


#import "PLAbstractLibraryServicesManagerService.h"
#import "PLAssetsdConnectionAuthorization.h"
#import "PLCameraCaptureTaskConstraintCoordinator.h"

@interface PLAssetsdPhotoKitService : PLAbstractLibraryServicesManagerService <PLPerformChangesRequestService, PLSyndicationSyncManagerDelegate, PLAssetsdPhotoKitServiceProtocol>

 {
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    PLCameraCaptureTaskConstraintCoordinator *_cameraTaskConstraintCoordinator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)clientBundleID;
-(id)clientDescription;
-(id)clientDisplayName;
-(id)initWithLibraryServicesManager:(id)arg0 connectionAuthorization:(id)arg1 ;
-(id)persistentStoreCoordinator;
-(void)_processUniversalSearchJITForAsset:(id)arg0 cssiUniqueIdentifier:(id)arg1 bundleID:(id)arg2 processingTypes:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)_retryWrapperForProcessUniversalSearchJITForAsset:(id)arg0 cssiUniqueIdentifier:(id)arg1 bundleID:(id)arg2 processingTypes:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)applyChangesRequest:(id)arg0 reply:(id)arg1 ;
-(void)commitRequest:(id)arg0 reply:(id)arg1 ;
-(void)dealloc;
// -(void)executeQueryForSyncManager:(id)arg0 type:(NSInteger)arg1 startDate:(id)arg2 endDate:(id)arg3 batchHandler:(id)arg4 completionHandler:(unk)arg5  ;
// -(void)executeQueryForSyncManager:(id)arg0 type:(NSInteger)arg1 startDate:(id)arg2 endDate:(id)arg3 itemHandler:(id)arg4 completionHandler:(unk)arg5  ;
-(void)getUUIDsForAssetObjectURIs:(id)arg0 filterPredicate:(id)arg1 reply:(id)arg2 ;
-(void)getUUIDsForCloudIdentifiers:(id)arg0 reply:(id)arg1 ;
-(void)processUniversalSearchJITForAssetUUID:(id)arg0 processingTypes:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)processUniversalSearchJITForCoreSpotlightUniqueIdentifier:(id)arg0 bundleID:(id)arg1 processingTypes:(NSUInteger)arg2 reply:(id)arg3 ;


@end


#endif