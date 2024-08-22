// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCXPCCLIENT_H
#define BRCXPCCLIENT_H

@class NSCountedSet, NSOperationQueue, NSMutableDictionary, NSString, NSXPCConnection, BRMangledID, NSSet;
@protocol BRCProcessMonitorDelegate, BRCForegroundClient, BRCNotificationPipeDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "brc_task_tracker.h"
#import "BRCClientPrivilegesDescriptor.h"
#import "BRCAccountSession.h"

@interface BRCXPCClient : NSObject <BRCProcessMonitorDelegate, BRCForegroundClient, BRCNotificationPipeDelegate>

 {
    NSCountedSet *_appLibraries;
    brc_task_tracker *_tracker;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    int _clientPid;
    ? auditToken;
    BOOL _isForeground;
    BOOL _invalidated;
    NSMutableDictionary *_personaMonitorCounts;
}


@property (readonly, nonatomic) NSString *bundleID;
@property (retain, nonatomic) BRCClientPrivilegesDescriptor *clientPriviledgesDescriptor; // ivar: _clientPriviledgesDescriptor
@property (readonly, weak, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BRMangledID *defaultMangledID;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL dieOnInvalidate; // ivar: _dieOnInvalidate
@property (readonly, nonatomic) NSSet *entitledAppLibraryIDs;
@property (readonly, nonatomic) BOOL hasPrivateSharingInterfaceEntitlement;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isSandboxed;
@property (nonatomic) BOOL isUsingUbiquity; // ivar: _isUsingUbiquity
@property (retain, nonatomic) BRCAccountSession *session; // ivar: __session
@property (readonly) Class superclass;


-(BOOL)_canCreateAppLibraryWithID:(id)arg0 error:(*id)arg1 ;
-(BOOL)_entitlementBooleanValueForKey:(id)arg0 ;
-(BOOL)_hasAccessToAppLibraryID:(id)arg0 error:(*id)arg1 ;
-(BOOL)_hasPrivateIPCEntitlementForSelector:(SEL)arg0 error:(*id)arg1 ;
-(BOOL)_isAppLibraryProxyEntitled;
-(BOOL)_isAppLibraryProxyWithError:(*id)arg0 ;
-(BOOL)_isAutomationEntitled;
-(BOOL)canAccessLogicalOrPhysicalURL:(id)arg0 accessKind:(NSInteger)arg1 session:(id)arg2 ;
-(BOOL)canAccessPath:(char *)arg0 accessKind:(NSInteger)arg1 ;
-(BOOL)canAccessPhysicalURL:(id)arg0 ;
-(char)cloudEnabledStatus;
-(id)_auditedURLFromPath:(id)arg0 ;
-(id)_createBookmarkWithTarget:(id)arg0 targetPath:(id)arg1 parentPath:(id)arg2 aliasName:(id)arg3 error:(*id)arg4 ;
-(id)_entitlementValueForKey:(id)arg0 ofClass:(Class)arg1 ;
-(id)_overrideSessionForURL:(id)arg0 ;
-(id)_setupAppLibrary:(id)arg0 error:(*id)arg1 ;
-(id)_sharingOperationItemFromLookup:(id)arg0 url:(id)arg1 allowDirectory:(BOOL)arg2 error:(*id)arg3 ;
-(id)initWithConnection:(id)arg0 ;
-(id)issueContainerExtensionForURL:(id)arg0 error:(*id)arg1 ;
-(void)_addExternalDocumentReferenceTo:(id)arg0 session:(id)arg1 underParent:(id)arg2 forceReparent:(BOOL)arg3 reply:(id)arg4 ;
-(void)_addExternalDocumentReferenceTo:(id)arg0 underParent:(id)arg1 forceReparent:(BOOL)arg2 reply:(id)arg3 ;
-(void)_auditURL:(id)arg0 ;
-(void)_becameXPCCLientOfSession:(id)arg0 ;
-(void)_finishedXPCClientOfSession:(id)arg0 ;
-(void)_process:(int)arg0 didBecomeForeground:(BOOL)arg1 ;
-(void)_setupAppLibraryAndZoneWithID:(id)arg0 recreateDocumentsIfNeeded:(BOOL)arg1 reply:(id)arg2 ;
-(void)_startDownloadItemsAtURLs:(id)arg0 pos:(NSUInteger)arg1 options:(NSUInteger)arg2 error:(id)arg3 reply:(id)arg4 ;
-(void)_startMonitoringProcessIfNeeded;
-(void)_startSharingOperationAfterAcceptation:(id)arg0 client:(id)arg1 item:(id)arg2 ;
-(void)_stopMonitoringProcess;
-(void)accessLogicalOrPhysicalURL:(id)arg0 accessKind:(NSInteger)arg1 dbAccessKind:(NSInteger)arg2 synchronouslyIfPossible:(BOOL)arg3 handler:(id)arg4 ;
-(void)addAppLibrary:(id)arg0 ;
-(void)addOperation:(id)arg0 ;
-(void)dumpToContext:(id)arg0 ;
-(void)invalidate;
-(void)notificationPipe:(id)arg0 didObserveAppLibrary:(id)arg1 ;
-(void)notificationPipe:(id)arg0 willObserveAppLibrary:(id)arg1 ;
// -(void)performBlock:(id)arg0 withSessionFromURL:(unk)arg1  ;
-(void)performBlockWithAnySession:(id)arg0 ;
-(void)process:(int)arg0 didBecomeForeground:(BOOL)arg1 ;
-(void)removeAppLibrary:(id)arg0 ;
-(void)setPrivilegesDescriptor:(id)arg0 ;
-(void)setupNonSandboxedAccessForUbiquityContainers:(id)arg0 forBundleID:(id)arg1 ;
-(void)wait;


@end


#endif