// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLASSETSDPHOTOKITADDSERVICE_H
#define PLASSETSDPHOTOKITADDSERVICE_H

@class NSPersistentStoreCoordinator, NSString;
@protocol PLPerformChangesRequestService, PLAssetsdPhotoKitAddServiceProtocol;


#import "PLAbstractLibraryServicesManagerService.h"
#import "PLAssetsdConnectionAuthorization.h"

@interface PLAssetsdPhotoKitAddService : PLAbstractLibraryServicesManagerService <PLPerformChangesRequestService, PLAssetsdPhotoKitAddServiceProtocol>

 {
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)validatePhotosAccessScopeForChangesRequest:(id)arg0 ;
-(id)clientBundleID;
-(id)clientDescription;
-(id)clientDisplayName;
-(id)initWithLibraryServicesManager:(id)arg0 connectionAuthorization:(id)arg1 ;
-(id)persistentStoreCoordinator;
-(void)applyChangesRequest:(id)arg0 reply:(id)arg1 ;
-(void)commitRequest:(id)arg0 reply:(id)arg1 ;


@end


#endif