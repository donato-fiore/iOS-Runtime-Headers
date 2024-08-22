// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLASSETSDCONNECTIONAUTHORIZATION_H
#define PLASSETSDCONNECTIONAUTHORIZATION_H

@class NSSet, NSNumber, PLSandboxedURL, NSDate, BKSApplicationStateMonitor, NSString;
@protocol PLClientAuthorization, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PLAssetsdConnectionAuthorization : NSObject <PLClientAuthorization>

 {
    ? _auditToken;
    NSSet *_photoKitEntitlements;
    NSNumber *_photosAccessAllowed;
    NSNumber *_photosAddAccessAllowed;
    BOOL _libraryUpgradeAuthorized;
    BOOL _directDatabaseAccessAuthorized;
    BOOL _directDatabaseWriteAuthorized;
    BOOL _isEntitledForPhotoKitOrPrivatePhotosTCC;
    PLSandboxedURL *_clientMainBundleSandboxedURL;
    NSDate *_connectionStartDate;
    BKSApplicationStateMonitor *_applicationStateMonitor;
    NSObject<OS_dispatch_queue> *_duetUpdateQueue;
}


@property (readonly, nonatomic) BOOL analyticsCacheReadEntitled; // ivar: _analyticsCacheReadEntitled
@property (readonly, nonatomic) BOOL analyticsCacheWriteEntitled; // ivar: _analyticsCacheWriteEntitled
@property (readonly, nonatomic) ? clientAuditToken;
@property (readonly, nonatomic, getter=isClientAuthorizedForTCCServicePhotos) BOOL clientAuthorizedForTCCServicePhotos;
@property (readonly, nonatomic, getter=isClientAuthorizedForTCCServicePhotosAdd) BOOL clientAuthorizedForTCCServicePhotosAdd;
@property (readonly, nonatomic) BOOL clientIsSandboxed; // ivar: _clientIsSandboxed
@property (readonly, nonatomic, getter=isClientLimitedLibraryCapable) BOOL clientLimitedLibraryCapable; // ivar: _clientLimitedLibraryCapable
@property (readonly, nonatomic) int clientProcessIdentifier; // ivar: _clientProcessIdentifier
@property (readonly, nonatomic) BOOL cloudInternalEntitled; // ivar: _cloudInternalEntitled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL directDatabaseAccessAuthorized;
@property (readonly, nonatomic) BOOL directDatabaseWriteAuthorized;
@property (readonly, nonatomic) NSString *fetchFilterIdentifier; // ivar: _fetchFilterIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL internalDataReadWriteAuthorized; // ivar: _internalDataReadWriteAuthorized
@property (readonly, nonatomic) BOOL limitedLibraryMode;
@property (readonly, nonatomic) BOOL photoKitEntitled; // ivar: _photoKitEntitled
@property (readonly, nonatomic) BOOL photosDataVaultEntitled; // ivar: _photosDataVaultEntitled
@property (readonly, nonatomic) BOOL smartSharingCacheReadEntitled; // ivar: _smartSharingCacheReadEntitled
@property (readonly, nonatomic) BOOL smartSharingCacheWriteEntitled; // ivar: _smartSharingCacheWriteEntitled
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *trustedCallerBundleID; // ivar: _trustedCallerBundleID
@property (readonly, nonatomic) NSString *trustedCallerDisplayName; // ivar: _trustedCallerDisplayName
@property (readonly, nonatomic) NSString *trustedCallerPhotoLibraryUsageDescription; // ivar: _trustedCallerPhotoLibraryUsageDescription


-(BOOL)_shouldTrackEventForBundle:(id)arg0 ;
-(BOOL)isClientAuthorizedForLibraryUpgrade;
-(BOOL)isClientAuthorizedForSandboxExtensions;
-(BOOL)isClientEntitledForPhotoKitOrPrivatePhotosTCC;
-(BOOL)isClientInFullLibraryMode;
-(BOOL)isClientInLimitedLibraryMode;
-(BOOL)isClientInRestrictedMode;
-(BOOL)isPhotosClient;
-(BOOL)photoKitEntitledFor:(id)arg0 ;
-(id)initWithConnection:(id)arg0 ;
-(void)_handleDuetReportIsForeground:(BOOL)arg0 ;
-(void)_trackCAConnectionEvent;
-(void)_trackDKEventIfNecessary;
-(void)handleInvalidation;
-(void)invalidateClientAuthorizationCache;
-(void)setClientMainBundleSandboxedURL:(id)arg0 ;
-(void)setupFromConnection:(id)arg0 ;


@end


#endif