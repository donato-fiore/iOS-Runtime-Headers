// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICINAPPMESSAGEMANAGER_H
#define ICINAPPMESSAGEMANAGER_H

@class NSOperationQueue, NSString, NSXPCListener, NSMutableSet, NSXPCConnection;
@protocol NSXPCListenerDelegate, ICInAppMessageManagerProtocol, ICEnvironmentMonitorObserver, OS_dispatch_queue, NSCopying;

#import <Foundation/Foundation.h>

#import "ICUserIdentityStore.h"
#import "ICInAppMessageStore.h"

@interface ICInAppMessageManager : NSObject <NSXPCListenerDelegate, ICInAppMessageManagerProtocol, ICEnvironmentMonitorObserver>

 {
    NSOperationQueue *_operationQueue;
    NSOperationQueue *_downloadOperationQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    ICUserIdentityStore *_identityStore;
    BOOL _isSystemService;
    NSString *_foregroundApplicationIdentifier;
    id<NSCopying> *_privacyObserverToken;
    NSXPCListener *_xpcServiceListener;
    NSMutableSet *_xpcConnections;
    NSXPCConnection *_xpcClientConnection;
}


@property (readonly, nonatomic) ICInAppMessageStore *_unsafeMessageStore; // ivar: _messageStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedManager;
-(BOOL)_privacyAcknowledgementRequired;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_init;
-(id)_resourceCacheDirectoryPath;
-(id)_storeRequestContext;
-(id)_xpcClientConnection;
-(id)initWithMessageStore:(id)arg0 identityStore:(id)arg1 ;
-(void)_addConnection:(id)arg0 ;
-(void)_addMessageEntry:(id)arg0 completion:(id)arg1 ;
-(void)_checkForMessageResourcesNeedingDownloadForcingIfNecessary:(BOOL)arg0 ;
-(void)_downloadResourcesForMessageWithIdentifier:(id)arg0 bundleIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)_handleICInAppMessagesDidChangeDistributedNotification:(id)arg0 ;
-(void)_handleUserIdentityStoreDidChangeNotification:(id)arg0 ;
-(void)_loadConfigurationWithCompletion:(id)arg0 ;
-(void)_performCacheConsistencyCheck;
-(void)_performSyncRetryIfPending:(BOOL)arg0 ;
-(void)_performSyncWithCompletion:(id)arg0 ;
-(void)_processSyncResponse:(id)arg0 completion:(id)arg1 ;
-(void)_removeAllMessageEntriesForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_removeConnection:(id)arg0 ;
-(void)_removeMessageEntryWithIdentifier:(id)arg0 forBundleIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)_schedulePeriodicUpdate;
-(void)_updateShouldDownloadResources:(BOOL)arg0 onMessageWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)addMessageEntry:(id)arg0 completion:(id)arg1 ;
-(void)addMessageEntryFromAMSDialogRequest:(id)arg0 bundleIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)allMessageEntriesWithCompletion:(id)arg0 ;
-(void)clearCachedResourcesForMessageWithIdentifier:(id)arg0 bundleIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)downloadResourcesForMessageWithIdentifier:(id)arg0 bundleIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg0 ;
-(void)flushEventsWithCompletion:(id)arg0 ;
-(void)getAllMetadataForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)getAllMetadataForBundleIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)getGlobalPropertyForKey:(id)arg0 completion:(id)arg1 ;
-(void)getMetadataForMessageIdentifier:(id)arg0 bundleIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)getPropertyForKey:(id)arg0 bundleIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)messageEntriesForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)messageEntriesForBundleIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)messageEntryWithIdentifier:(id)arg0 bundleIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)removeAllMessageEntriesForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)removeApplicationBadgeForBundleIdentifier:(id)arg0 fromPresentedMessageEntry:(id)arg1 completion:(id)arg2 ;
-(void)removeMessageEntryWithIdentifier:(id)arg0 forBundleIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)removeMetadataForMessageIdentifier:(id)arg0 bundleIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)reportEventForMessageIdentifier:(id)arg0 withParams:(id)arg1 completion:(id)arg2 ;
-(void)reportEventForMessageIdentifier:(id)arg0 withParams:(id)arg1 flushImmediately:(BOOL)arg2 completion:(id)arg3 ;
-(void)resetMessagesWithCompletion:(id)arg0 ;
-(void)setGlobalProperty:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)setProperty:(id)arg0 forKey:(id)arg1 bundleIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)startSystemService;
-(void)stopSystemService;
-(void)syncMessagesWithCompletion:(id)arg0 ;
-(void)updateMessageEntry:(id)arg0 completion:(id)arg1 ;
-(void)updateMetadata:(id)arg0 messageIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(id)arg3 ;


@end


#endif