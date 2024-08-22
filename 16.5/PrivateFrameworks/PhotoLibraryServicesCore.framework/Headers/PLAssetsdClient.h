// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLASSETSDCLIENT_H
#define PLASSETSDCLIENT_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLAssetsdClientXPCConnection.h"
#import "PLAutoBindingProxyFactory.h"
#import "PLAssetsdClientSandboxExtensions.h"
#import "PLAssetsdLibraryClient.h"
#import "PLAssetsdLibraryInternalClient.h"
#import "PLAssetsdSystemLibraryURLReadOnlyClient.h"
#import "PLAssetsdLibraryManagementClient.h"
#import "PLAssetsdPhotoKitClient.h"
#import "PLAssetsdResourceAvailabilityClient.h"
#import "PLAssetsdPhotoKitAddClient.h"
#import "PLAssetsdResourceClient.h"
#import "PLAssetsdResourceWriteOnlyClient.h"
#import "PLAssetsdResourceInternalClient.h"
#import "PLAssetsdCloudClient.h"
#import "PLAssetsdCloudInternalClient.h"
#import "PLAssetsdMigrationClient.h"
#import "PLAssetsdSyncClient.h"
#import "PLAssetsdNotificationClient.h"
#import "PLAssetsdDemoClient.h"
#import "PLAssetsdDiagnosticsClient.h"
#import "PLAssetsdDebugClient.h"
#import "PLAssetsdPrivacySupportClient.h"

@interface PLAssetsdClient : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    PLAssetsdClientXPCConnection *_connection;
    PLAutoBindingProxyFactory *_autoBindingProxyFactory;
    PLAssetsdClientSandboxExtensions *_sandboxExtensions;
    PLAssetsdLibraryClient *_libraryClient;
    PLAssetsdLibraryInternalClient *_libraryInternalClient;
    PLAssetsdSystemLibraryURLReadOnlyClient *_systemLibraryURLReadOnlyClient;
    PLAssetsdLibraryManagementClient *_libraryManagementClient;
    PLAssetsdPhotoKitClient *_photoKitClient;
    PLAssetsdResourceAvailabilityClient *_resourceAvailabilityClient;
    PLAssetsdPhotoKitAddClient *_photoKitAddClient;
    PLAssetsdResourceClient *_resourceClient;
    PLAssetsdResourceWriteOnlyClient *_resourceWriteOnlyClient;
    PLAssetsdResourceInternalClient *_resourceInternalClient;
    PLAssetsdCloudClient *_cloudClient;
    PLAssetsdCloudInternalClient *_cloudInternalClient;
    PLAssetsdMigrationClient *_migrationClient;
    PLAssetsdSyncClient *_syncClient;
    PLAssetsdNotificationClient *_notificationClient;
    PLAssetsdDemoClient *_demoClient;
    PLAssetsdDiagnosticsClient *_diagnosticsClient;
    PLAssetsdDebugClient *_debugClient;
    PLAssetsdPrivacySupportClient *_privacySupportClient;
}


@property (readonly) PLAssetsdCloudClient *cloudClient;
@property (readonly) PLAssetsdCloudInternalClient *cloudInternalClient;
@property (readonly) PLAssetsdDebugClient *debugClient;
@property (readonly) PLAssetsdDemoClient *demoClient;
@property (readonly) PLAssetsdDiagnosticsClient *diagnosticsClient;
@property (readonly) PLAssetsdLibraryClient *libraryClient;
@property (readonly) PLAssetsdLibraryInternalClient *libraryInternalClient;
@property (readonly) PLAssetsdLibraryManagementClient *libraryManagementClient;
@property (readonly) PLAssetsdMigrationClient *migrationClient;
@property (readonly) PLAssetsdNotificationClient *notificationClient;
@property (readonly) PLAssetsdPhotoKitAddClient *photoKitAddClient;
@property (readonly) PLAssetsdPhotoKitClient *photoKitClient;
@property (readonly) PLAssetsdResourceAvailabilityClient *resourceAvailabilityClient;
@property (readonly) PLAssetsdResourceClient *resourceClient;
@property (readonly) PLAssetsdResourceInternalClient *resourceInternalClient;
@property (readonly) PLAssetsdSyncClient *syncClient;


+(id)sharedSystemLibraryAssetsdClient;
-(id)_setupClientClass:(Class)arg0 proxyGetter:(SEL)arg1 options:(NSInteger)arg2 ;
-(id)init;
-(id)initWithPhotoLibraryURL:(id)arg0 ;
-(id)privacySupportClient;
-(id)resourceWriteOnlyClient;
-(id)systemLibraryURLReadOnlyClient;
-(void)_updateLibraryStateConnectionInterrupted:(id)arg0 ;
-(void)addPhotoLibraryUnavailabilityHandler:(id)arg0 ;
-(void)dealloc;
-(void)sendDaemonJob:(id)arg0 shouldRunSerially:(BOOL)arg1 replyHandler:(id)arg2 ;
-(void)waitUntilConnectionSendsAllMessages;


@end


#endif