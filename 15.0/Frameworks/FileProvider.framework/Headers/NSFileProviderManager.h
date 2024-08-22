// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSFILEPROVIDERMANAGER_H
#define NSFILEPROVIDERMANAGER_H

@class NSXPCConnection<FPDDaemon>, NSURL, NSString, NSMutableDictionary, NSArray;
@protocol OS_dispatch_semaphore, FPDDomainServicing><FPXPCAutomaticErrorProxy, OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "_FPFilePresenterObserver.h"
#import "NSFileProviderDomain.h"
#import "FPProgressUpdater.h"

@interface NSFileProviderManager : NSObject {
    NSObject<OS_dispatch_semaphore> *_sem;
    id<FPDDomainServicing><FPXPCAutomaticErrorProxy> *_remoteFileProvider;
    BOOL _isIncomingConnection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSXPCConnection<FPDDaemon> *_connection;
    _FPFilePresenterObserver *_presentedFileObserver;
    NSURL *_documentStorageURL;
    NSString *_groupName;
    NSFileProviderDomain *_domain;
    NSObject<OS_dispatch_queue> *_signalUpdateQueue;
    NSObject<OS_dispatch_source> *_signalUpdateSource;
    NSObject<OS_dispatch_group> *_signalUpdateGroup;
    NSMutableDictionary *_completionHandlersByItemID;
    FPProgressUpdater *_downloadProxy;
    FPProgressUpdater *_uploadProxy;
}


@property (readonly, nonatomic) NSURL *documentStorageURL;
@property (copy) NSArray *presentedFiles; // ivar: _presentedFiles
@property (readonly, nonatomic) NSString *providerIdentifier; // ivar: _providerIdentifier


+(BOOL)writePlaceholderAtURL:(id)arg0 withDictionary:(id)arg1 error:(*id)arg2 ;
+(BOOL)writePlaceholderAtURL:(id)arg0 withMetadata:(id)arg1 error:(*id)arg2 ;
+(id)defaultManager;
+(id)legacyDefaultManager;
+(id)managerForDomain:(id)arg0 ;
+(id)placeholderURLForURL:(id)arg0 ;
+(void)_registerNotificationsForProviderIdentifier:(id)arg0 ;
+(void)addDomain:(id)arg0 completionHandler:(id)arg1 ;
+(void)addDomain:(id)arg0 forProviderIdentifier:(id)arg1 byImportingDirectoryAtURL:(id)arg2 completionHandler:(id)arg3 ;
+(void)addDomain:(id)arg0 forProviderIdentifier:(id)arg1 completionHandler:(id)arg2 ;
+(void)getDomainsForProviderIdentifier:(id)arg0 completionHandler:(id)arg1 ;
+(void)getDomainsWithCompletionHandler:(id)arg0 ;
+(void)getIdentifierForUserVisibleFileAtURL:(id)arg0 completionHandler:(id)arg1 ;
+(void)importDomain:(id)arg0 fromDirectoryAtURL:(id)arg1 completionHandler:(id)arg2 ;
+(void)registerDomainServicer:(id)arg0 forDomain:(id)arg1 ;
+(void)registerRootURL:(id)arg0 forDomain:(id)arg1 ;
+(void)removeAllDomainsForProviderIdentifier:(id)arg0 completionHandler:(id)arg1 ;
+(void)removeAllDomainsWithCompletionHandler:(id)arg0 ;
+(void)removeDomain:(id)arg0 completionHandler:(id)arg1 ;
+(void)removeDomain:(id)arg0 mode:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(BOOL)isErrorSupportedForSignalResolved:(id)arg0 ;
-(id)_connection;
-(id)_initWithProviderIdentifier:(id)arg0 ;
-(id)_initWithProviderIdentifier:(id)arg0 domain:(id)arg1 ;
-(id)_initWithProviderIdentifier:(id)arg0 groupName:(id)arg1 ;
-(id)_initWithProviderIdentifier:(id)arg0 groupName:(id)arg1 domain:(id)arg2 ;
-(id)_test_existingProgressForKind:(id)arg0 ;
-(id)description;
-(id)enumeratorForMaterializedItems;
-(id)enumeratorForPendingItems;
-(id)globalProgressForKind:(id)arg0 ;
-(id)itemIDForIdentifier:(id)arg0 ;
-(id)listAvailableTestingOperationsWithError:(*id)arg0 ;
-(id)runTestingOperations:(id)arg0 error:(*id)arg1 ;
-(id)startObservingGlobalProgressForKind:(id)arg0 ;
-(id)temporaryDirectoryURLWithError:(*id)arg0 ;
-(void)_cacheProviderInfo;
-(void)_callCompletionHandlers:(id)arg0 error:(id)arg1 ;
-(void)_failToSignalPendingChangesWithError:(id)arg0 completionHandlersByItemID:(id)arg1 ;
-(void)_signalPendingEnumerators;
-(void)addDomain:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)disconnectWithReason:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)domainServicerWithCompletionHandler:(id)arg0 ;
-(void)evictItemWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchDomainServicerSynchronously:(BOOL)arg0 useOutgoingConnection:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)getDomainsWithCompletionHandler:(id)arg0 ;
-(void)getUserVisibleURLForItemIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)ingestFromCacheItemWithIdentifier:(id)arg0 requestedFields:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)lookupRequestingApplicationIdentifier:(id)arg0 reason:(id)arg1 completionHandler:(id)arg2 ;
-(void)reconnectWithCompletionHandler:(id)arg0 ;
-(void)registerURLSessionTask:(id)arg0 forItemWithIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)reimportItemsBelowItemWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeAllDomainsWithCompletionHandler:(id)arg0 ;
-(void)removeDomain:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeDomain:(id)arg0 options:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)setConnected:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)setDownloadPolicy:(NSUInteger)arg0 forItemWithIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)setEjectable:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)signalEnumeratorForContainerItemIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)signalErrorResolved:(id)arg0 completionHandler:(id)arg1 ;
-(void)startObservingDownloadProgress;
-(void)startObservingUploadProgress;
-(void)waitForChangesOnItemsBelowItemWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)waitForSignalDeliveryWithCompletionHandler:(id)arg0 ;
-(void)waitForStabilizationWithCompletionHandler:(id)arg0 ;


@end


#endif