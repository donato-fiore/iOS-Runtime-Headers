// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLASSETSDPHOTOKITSERVICE_H
#define PLASSETSDPHOTOKITSERVICE_H

@class NSPersistentStoreCoordinator, NSString;
@protocol PLPerformChangesRequestService, PLAssetsdPhotoKitServiceProtocol;


#import "PLAbstractLibraryServicesManagerService.h"
#import "PLAssetsdConnectionAuthorization.h"
#import "PLCameraCaptureTaskConstraintCoordinator.h"

@interface PLAssetsdPhotoKitService : PLAbstractLibraryServicesManagerService <PLPerformChangesRequestService, PLAssetsdPhotoKitServiceProtocol>

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
-(void)applyChangesRequest:(id)arg0 reply:(id)arg1 ;
-(void)commitRequest:(id)arg0 reply:(id)arg1 ;
-(void)dealloc;
-(void)getUUIDsForCloudIdentifiers:(id)arg0 reply:(id)arg1 ;


@end


#endif