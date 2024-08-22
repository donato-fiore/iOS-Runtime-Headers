// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPDAEMONCONNECTION_H
#define FPDAEMONCONNECTION_H

@class NSXPCConnection<FPDDaemon>, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface FPDaemonConnection : NSObject {
    NSXPCConnection<FPDDaemon> *_connectionQueueConnection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSMutableDictionary *_getAttributeConnections;
    NSObject<OS_dispatch_source> *_getAttributeConnectionsIdleCleanupTimer;
}


@property (readonly, nonatomic) NSXPCConnection<FPDDaemon> *connection; // ivar: _connection
@property (nonatomic) unsigned int user; // ivar: _user


+(id)connectionForUser:(unsigned int)arg0 ;
+(id)disallowedConnectionReason;
+(id)newXPCConnection;
+(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
+(id)sharedConnection;
+(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
+(void)setDisallowedConnectionReason:(id)arg0 ;
-(id)bookmarkableStringFromDocumentURL:(id)arg0 error:(*id)arg1 ;
-(id)documentURLFromBookmarkableString:(id)arg0 error:(*id)arg1 ;
-(id)evictItemAtURL:(id)arg0 evenIfEnumeratingFP:(BOOL)arg1 andClearACLForConsumer:(id)arg2 completionHandler:(id)arg3 ;
-(id)initWithUser:(unsigned int)arg0 ;
-(id)listOfMonitoredAppsWithError:(*id)arg0 ;
-(id)makeTopologicallySortedItemsOnDisk:(id)arg0 error:(*id)arg1 ;
-(id)valuesForAttributes:(id)arg0 forItemAtURL:(id)arg1 error:(*id)arg2 ;
-(void)_test_callFileProviderManagerAPIs:(id)arg0 ;
-(void)_test_retrieveItemWithName:(id)arg0 completionHandler:(id)arg1 ;
-(void)_test_setDocIDResolutionPolicy:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)backUpUserURL:(id)arg0 outputUserURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)bookmarkableStringFromDocumentURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)copyDatabaseForFPCKStartingAtPath:(id)arg0 completionHandler:(id)arg1 ;
-(void)createItemBasedOnTemplate:(id)arg0 fields:(NSUInteger)arg1 urlWrapper:(id)arg2 options:(NSUInteger)arg3 bounceOnCollision:(BOOL)arg4 completionHandler:(id)arg5 ;
-(void)documentURLFromBookmarkableString:(id)arg0 completionHandler:(id)arg1 ;
-(void)dumpDatabaseAt:(id)arg0 fullDump:(BOOL)arg1 writeTo:(id)arg2 completionHandler:(id)arg3 ;
-(void)dumpStateTo:(id)arg0 limitNumberOfItems:(BOOL)arg1 providerFilter:(id)arg2 completionHandler:(id)arg3 ;
-(void)evictItemWithID:(id)arg0 completionHandler:(id)arg1 ;
-(void)extendBookmarkForFileURL:(id)arg0 toConsumerID:(id)arg1 completionHandler:(id)arg2 ;
-(void)extendSandboxAndCreatePlaceholderForFileURL:(id)arg0 fromProviderID:(id)arg1 toConsumerID:(id)arg2 completionHandler:(id)arg3 ;
-(void)extendSandboxForFileURL:(id)arg0 fromProviderID:(id)arg1 toConsumerID:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchAndStartEnumeratingWithSettings:(id)arg0 observer:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchDomainServicerForProviderDomainID:(id)arg0 handler:(id)arg1 ;
-(void)forceIngestionForItemID:(id)arg0 completionHandler:(id)arg1 ;
-(void)forceIngestionForItemIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)getPersonaForProvider:(id)arg0 completionHandler:(id)arg1 ;
-(void)getURLForContainerWithItemID:(id)arg0 inDataScopeDomainWithIdentifier:(id)arg1 documentsScopeDomainIdentifier:(id)arg2 documentsFolderItemIdentifier:(id)arg3 completionHandler:(id)arg4 ;
-(void)makeTopologicallySortedItemsOnDisk:(id)arg0 completionHandler:(id)arg1 ;
-(void)pinItemWithID:(id)arg0 completionHandler:(id)arg1 ;
-(void)providerDomainsCompletionHandler:(id)arg0 ;
-(void)providersCompletionHandler:(id)arg0 ;
-(void)resolveConflictAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)restoreUserURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)runFPCKForDomainWithID:(id)arg0 databasesBackupsPath:(id)arg1 url:(id)arg2 options:(NSUInteger)arg3 completionHandler:(id)arg4 ;
-(void)startProvidingItemAtURL:(id)arg0 fromProviderID:(id)arg1 forConsumerID:(id)arg2 completionHandler:(id)arg3 ;
-(void)stateForDomainWithID:(id)arg0 completionHandler:(id)arg1 ;
-(void)unobserveWithToken:(id)arg0 completionHandler:(id)arg1 ;
-(void)unpinItemWithID:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateLastUsedDateForFileURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)waitForStabilizationOfDomainWithID:(id)arg0 completionHandler:(id)arg1 ;
-(void)wakeUpForURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif