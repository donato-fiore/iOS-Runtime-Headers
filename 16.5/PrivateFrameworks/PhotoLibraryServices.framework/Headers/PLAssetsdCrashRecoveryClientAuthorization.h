// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLASSETSDCRASHRECOVERYCLIENTAUTHORIZATION_H
#define PLASSETSDCRASHRECOVERYCLIENTAUTHORIZATION_H

@class NSString;
@protocol PLClientAuthorization;

#import <Foundation/Foundation.h>


@interface PLAssetsdCrashRecoveryClientAuthorization : NSObject <PLClientAuthorization>



@property (readonly, nonatomic) BOOL analyticsCacheReadEntitled; // ivar: _analyticsCacheReadEntitled
@property (readonly, nonatomic) BOOL analyticsCacheWriteEntitled; // ivar: _analyticsCacheWriteEntitled
@property (readonly, nonatomic) ? clientAuditToken; // ivar: _clientAuditToken
@property (readonly, nonatomic, getter=isClientAuthorizedForTCCServicePhotos) BOOL clientAuthorizedForTCCServicePhotos; // ivar: _clientAuthorizedForTCCServicePhotos
@property (readonly, nonatomic, getter=isClientAuthorizedForTCCServicePhotosAdd) BOOL clientAuthorizedForTCCServicePhotosAdd; // ivar: _clientAuthorizedForTCCServicePhotosAdd
@property (readonly, nonatomic) BOOL clientIsSandboxed; // ivar: _clientIsSandboxed
@property (readonly, nonatomic, getter=isClientLimitedLibraryCapable) BOOL clientLimitedLibraryCapable; // ivar: _clientLimitedLibraryCapable
@property (readonly, nonatomic) int clientProcessIdentifier; // ivar: _clientProcessIdentifier
@property (readonly, nonatomic) BOOL cloudInternalEntitled; // ivar: _cloudInternalEntitled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL directDatabaseAccessAuthorized; // ivar: _directDatabaseAccessAuthorized
@property (readonly, nonatomic) BOOL directDatabaseWriteAuthorized; // ivar: _directDatabaseWriteAuthorized
@property (readonly, nonatomic) NSString *fetchFilterIdentifier; // ivar: _fetchFilterIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL internalDataReadWriteAuthorized; // ivar: _internalDataReadWriteAuthorized
@property (readonly, nonatomic) BOOL limitedLibraryMode; // ivar: _limitedLibraryMode
@property (readonly, nonatomic) BOOL photoKitEntitled; // ivar: _photoKitEntitled
@property (readonly, nonatomic) BOOL photosDataVaultEntitled; // ivar: _photosDataVaultEntitled
@property (readonly, nonatomic) BOOL smartSharingCacheReadEntitled; // ivar: _smartSharingCacheReadEntitled
@property (readonly, nonatomic) BOOL smartSharingCacheWriteEntitled; // ivar: _smartSharingCacheWriteEntitled
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *trustedCallerBundleID; // ivar: _trustedCallerBundleID
@property (readonly, nonatomic) NSString *trustedCallerDisplayName; // ivar: _trustedCallerDisplayName
@property (readonly, nonatomic) NSString *trustedCallerPhotoLibraryUsageDescription; // ivar: _trustedCallerPhotoLibraryUsageDescription


-(BOOL)photoKitEntitledFor:(id)arg0 ;
-(id)init;


@end


#endif