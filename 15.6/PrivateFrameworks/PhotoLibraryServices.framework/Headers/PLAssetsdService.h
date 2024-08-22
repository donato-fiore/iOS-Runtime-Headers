// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLASSETSDSERVICE_H
#define PLASSETSDSERVICE_H

@class NSXPCConnection, NSString, NSURL;
@protocol PLAssetsdServiceProtocol;

#import <Foundation/Foundation.h>

#import "PLAssetsdInnerService.h"
#import "PLPhotoLibraryBundleController.h"
#import "PLPhotoLibraryBundle.h"
#import "PLPhotoLibrary.h"
#import "PLAssetsdConnectionAuthorization.h"
#import "PLAssetsdCPLResourceDownloader.h"
#import "PLCacheMetricsCollectorServerShell.h"
#import "PLLibraryServicesManager.h"

@interface PLAssetsdService : NSObject <PLAssetsdServiceProtocol>

 {
    PLAssetsdInnerService *_innerLibraryService;
    PLAssetsdInnerService *_innerLibraryInternalService;
    PLAssetsdInnerService *_innerSystemLibraryURLReadOnlyService;
    PLAssetsdInnerService *_innerLibraryManagementService;
    PLAssetsdInnerService *_innerPhotoKitService;
    PLAssetsdInnerService *_innerPhotoKitAddService;
    PLAssetsdInnerService *_innerResourceAvailabilityService;
    PLAssetsdInnerService *_innerResourceService;
    PLAssetsdInnerService *_innerResourceWriteOnlyService;
    PLAssetsdInnerService *_innerResourceInternalService;
    PLAssetsdInnerService *_innerCloudService;
    PLAssetsdInnerService *_innerCloudInternalService;
    PLAssetsdInnerService *_innerMigrationService;
    PLAssetsdInnerService *_innerSyncService;
    PLAssetsdInnerService *_innerNotificationService;
    PLAssetsdInnerService *_innerDemoService;
    PLAssetsdInnerService *_innerDiagnosticsService;
    PLAssetsdInnerService *_innerDebugService;
    PLAssetsdInnerService *_innerPrivacySupportService;
    BOOL _readyForDaemonJobs;
    NSXPCConnection *_connection;
    int _remotePID;
    PLPhotoLibraryBundleController *_libraryBundleController;
    PLPhotoLibraryBundle *_libraryBundle;
    PLPhotoLibrary *_photoLibrary;
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
    PLAssetsdCPLResourceDownloader *_resourceDownloader;
}


@property (readonly, nonatomic) PLCacheMetricsCollectorServerShell *cacheMetricsShellObject; // ivar: _cacheMetricsShellObject
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPhotosClient;
@property (readonly, nonatomic) PLLibraryServicesManager *libraryServicesManager;
@property (readonly, nonatomic) NSURL *libraryURL; // ivar: _libraryURL
@property (readonly) Class superclass;


-(BOOL)_prepareToRunDaemonJob:(id)arg0 error:(*id)arg1 ;
-(NSInteger)requiredStateForCloudInternalService;
-(NSInteger)requiredStateForCloudService;
-(NSInteger)requiredStateForDebugService;
-(NSInteger)requiredStateForDemoService;
-(NSInteger)requiredStateForDiagnosticsService;
-(NSInteger)requiredStateForLibraryInternalService;
-(NSInteger)requiredStateForLibraryManagementService;
-(NSInteger)requiredStateForLibraryService;
-(NSInteger)requiredStateForMigrationService;
-(NSInteger)requiredStateForNotificationService;
-(NSInteger)requiredStateForPhotoKitAddService;
-(NSInteger)requiredStateForPhotoKitService;
-(NSInteger)requiredStateForPrivacySupportService;
-(NSInteger)requiredStateForResourceAvailabilityService;
-(NSInteger)requiredStateForResourceInternalService;
-(NSInteger)requiredStateForResourceService;
-(NSInteger)requiredStateForResourceWriteOnlyService;
-(NSInteger)requiredStateForSyncService;
-(NSInteger)requiredStateForSystemLibraryURLReadOnlyService;
-(id)_autoCreateWellKnownPhotoLibraryIfNeededWithURL:(id)arg0 wellKnownLibraryIdentifier:(*NSInteger)arg1 ;
-(id)_photoLibrary;
-(id)_waitForLibraryServicesForDaemonJob;
-(id)clientDebugDescription;
-(id)initWithConnection:(id)arg0 libraryBundleController:(id)arg1 ;
-(id)newCloudInternalService;
-(id)newCloudService;
-(id)newDebugService;
-(id)newDemoService;
-(id)newDiagnosticsService;
-(id)newLibraryInternalService;
-(id)newLibraryManagementService;
-(id)newLibraryService;
-(id)newMigrationService;
-(id)newNotificationService;
-(id)newPhotoKitAddService;
-(id)newPhotoKitService;
-(id)newPrivacySupportService;
-(id)newResourceAvailabilityService;
-(id)newResourceInternalService;
-(id)newResourceService;
-(id)newResourceWriteOnlyService;
-(id)newSyncService;
-(id)newSystemLibraryURLReadOnlyService;
-(id)permissionsForCloudInternalService;
-(id)permissionsForCloudService;
-(id)permissionsForDebugService;
-(id)permissionsForDemoService;
-(id)permissionsForDiagnosticsService;
-(id)permissionsForLibraryInternalService;
-(id)permissionsForLibraryManagementService;
-(id)permissionsForLibraryService;
-(id)permissionsForMigrationService;
-(id)permissionsForNotificationService;
-(id)permissionsForPhotoKitAddService;
-(id)permissionsForPhotoKitService;
-(id)permissionsForPrivacySupportService;
-(id)permissionsForResourceAvailabilityService;
-(id)permissionsForResourceInternalService;
-(id)permissionsForResourceService;
-(id)permissionsForResourceWriteOnlyService;
-(id)permissionsForSyncService;
-(id)permissionsForSystemLibraryURLReadOnlyService;
-(id)resourceDownloader;
-(id)serviceContextWithSelector:(SEL)arg0 ;
-(void)bindToPhotoLibraryURL:(id)arg0 sandboxExtension:(id)arg1 clientOptions:(id)arg2 withReply:(id)arg3 ;
-(void)bindToPhotoLibraryURL:(id)arg0 sandboxExtension:(id)arg1 withReply:(id)arg2 ;
-(void)getCloudInternalServiceWithReply:(id)arg0 ;
-(void)getCloudServiceWithReply:(id)arg0 ;
-(void)getDebugServiceWithReply:(id)arg0 ;
-(void)getDemoServiceWithReply:(id)arg0 ;
-(void)getDiagnosticsServiceWithReply:(id)arg0 ;
-(void)getLibraryInternalServiceWithReply:(id)arg0 ;
-(void)getLibraryManagementServiceWithReply:(id)arg0 ;
-(void)getLibraryServiceWithReply:(id)arg0 ;
-(void)getMigrationServiceWithReply:(id)arg0 ;
-(void)getNotificationServiceWithReply:(id)arg0 ;
-(void)getPhotoKitAddServiceWithReply:(id)arg0 ;
-(void)getPhotoKitServiceWithReply:(id)arg0 ;
-(void)getPrivacySupportServiceWithReply:(id)arg0 ;
-(void)getResourceAvailabilityServiceWithReply:(id)arg0 ;
-(void)getResourceInternalServiceWithReply:(id)arg0 ;
-(void)getResourceServiceWithReply:(id)arg0 ;
-(void)getResourceWriteOnlyServiceWithReply:(id)arg0 ;
-(void)getSyncServiceWithReply:(id)arg0 ;
-(void)getSystemLibraryURLReadOnlyServiceWithReply:(id)arg0 ;
-(void)handleInterruption;
-(void)handleInvalidation;
-(void)invalidateConnectionWithReason:(id)arg0 ;
-(void)logStatus;
-(void)runDaemonJob:(id)arg0 isSerial:(BOOL)arg1 ;
-(void)runDaemonJob:(id)arg0 isSerial:(BOOL)arg1 withReply:(id)arg2 ;


@end


#endif