// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPDDOMAIN_H
#define FPDDOMAIN_H

@class NSMutableDictionary, NSOperationQueue, NSURL, FPPacer, NSString, NSDictionary, NSArray, NSData, NSFileProviderDomain;
@protocol FPDFileCoordinationProviderDelegate, FPDDomainIndexerDelegate, OS_dispatch_source, FPDDomainBackend, OS_os_log, OS_dispatch_queue, FPDExtensionSessionProtocol;

#import <Foundation/Foundation.h>

#import "FPDDomainIndexer.h"
#import "FPDProvider.h"

@interface FPDDomain : NSObject <FPDFileCoordinationProviderDelegate, FPDDomainIndexerDelegate>

 {
    NSMutableDictionary *_coordinatorMetadataPerURL;
    NSMutableDictionary *_providedItemRecursiveGenCountPerURL;
    NSOperationQueue *_providedItemsOperationQueue;
    Class _fpfsClass;
    BOOL _cantStartup;
    BOOL _isObservingRoot;
    BOOL _indexerStarted;
    BOOL _indexerStopped;
    BOOL _isUsingFPFS;
    BOOL _invalidated;
    NSObject<OS_dispatch_source> *_timer;
    NSURL *_previouslyAccessedSecurityScopedURL;
    FPPacer *_rootCreationPacer;
}


@property (readonly, nonatomic) NSObject<FPDDomainBackend> *deactivatedBackend; // ivar: _deactivatedBackend
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<FPDDomainBackend> *defaultBackend; // ivar: _defaultBackend
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger disconnectionState;
@property (retain, nonatomic) NSDictionary *domainUserInfo; // ivar: _domainUserInfo
@property (nonatomic) BOOL ejectable; // ivar: _ejectable
@property (readonly, nonatomic) NSObject<FPDDomainBackend> *extensionBackend; // ivar: _extensionBackend
@property (readonly, nonatomic) NSArray *extensionStorageURLs; // ivar: _extensionStorageURLs
@property (retain, nonatomic) NSMutableDictionary *filePresenters; // ivar: _filePresenters
@property (readonly, nonatomic) NSString *fp_prettyDescription;
@property (copy, nonatomic) NSData *fpfsRootBookmarkData; // ivar: _fpfsRootBookmarkData
@property (retain, nonatomic) Class fpfsTestingBackendClass; // ivar: _fpfsTestingBackendClass
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) FPDDomainIndexer *indexer; // ivar: _indexer
@property (readonly, nonatomic) BOOL isConnectedToAppExtension;
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly, nonatomic) NSFileProviderDomain *nsDomain; // ivar: _nsDomain
@property (retain, nonatomic) NSFileProviderDomain *nsDomainOrNilForDefault; // ivar: _nsDomainOrNilForDefault
@property (readonly, weak, nonatomic) FPDProvider *provider; // ivar: _provider
@property (readonly, nonatomic) NSString *providerDomainID; // ivar: _providerDomainID
@property (readonly, nonatomic) NSString *purposeIdentifier; // ivar: _purposeIdentifier
@property (readonly, nonatomic) NSArray *rootURLs;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly, nonatomic) NSObject<FPDExtensionSessionProtocol> *session; // ivar: _session
@property (nonatomic) BOOL started; // ivar: _started
@property (readonly) Class superclass;
@property (nonatomic) BOOL unableToStartup; // ivar: _unableToStartup
@property (nonatomic) BOOL userEnabled;


-(BOOL)_isProviderBlockingConsumer:(id)arg0 ;
-(BOOL)_shouldDisconnect;
-(BOOL)_shouldDisconnectDueToLowDiskSpace;
-(BOOL)_wantsPresenterNotifications;
-(BOOL)createRootByImportingDirectoryAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)isDefaultDomain;
-(BOOL)isHiddenDefaultDomain;
-(BOOL)isProviderForURL:(id)arg0 ;
-(BOOL)isUsingFPFS;
-(BOOL)supportsFPFS;
-(NSInteger)nonEvictableSpace;
-(id)_fileReactorID;
-(id)_physicalURLForURL:(id)arg0 ;
-(id)_providedItemsOperationQueue;
-(id)_removeProgressForProvidingItemAtURL:(id)arg0 toReaderWithID:(id)arg1 ;
-(id)_siblingDelegateForURL:(id)arg0 ;
-(id)cleanupDomainWithMode:(NSUInteger)arg0 ;
-(id)getProvidedItemRecursiveGenerationCountForItemAtURL:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 nsDomain:(id)arg1 extensionStorageURLs:(id)arg2 purposeIdentifier:(id)arg3 fpfsClass:(Class)arg4 provider:(id)arg5 ;
-(id)materializedURLForItemID:(id)arg0 ;
-(id)telemetryReport;
-(void)_cancelProvidingItemAtURL:(id)arg0 toReaderWithID:(id)arg1 ;
-(void)_movingItemAtURL:(id)arg0 requiresProvidingWithDestinationURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)_provideItemAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)_provideItemAtURL:(id)arg0 toReaderWithID:(id)arg1 completionHandler:(id)arg2 ;
-(void)_providedItemAtURL:(id)arg0 didGainPresenterWithID:(id)arg1 ;
-(void)_providedItemAtURL:(id)arg0 didLosePresenterWithID:(id)arg1 ;
-(void)_providedItemAtURL:(id)arg0 withPresenterWithID:(id)arg1 didMoveToURL:(id)arg2 ;
-(void)_registerFileCoordinatorWithCompletion:(id)arg0 ;
-(void)_setupRecoveryTimer;
-(void)_startObservingRootAndResumeIndexerWithCompletion:(id)arg0 ;
-(void)_startWithCompletion:(id)arg0 ;
-(void)_unregisterFromFileCoordinator;
-(void)_writerWithID:(id)arg0 didFinishWritingForURL:(id)arg1 ;
-(void)cancelPendingCoordinations;
-(void)createRootAndObserveIfNeededWithCompletion:(id)arg0 ;
-(void)createRootURLWithCompletion:(id)arg0 ;
-(void)daemonSideItemChange:(id)arg0 changedFields:(NSUInteger)arg1 request:(id)arg2 completionHandler:(id)arg3 ;
-(void)didChangeItemID:(id)arg0 request:(id)arg1 completionHandler:(id)arg2 ;
-(void)downloadItemWithItemID:(id)arg0 request:(id)arg1 progress:(id)arg2 completionHandler:(id)arg3 ;
-(void)dumpInternalStateTo:(id)arg0 request:(id)arg1 completionHandler:(id)arg2 ;
-(void)dumpStateTo:(id)arg0 limitNumberOfItems:(BOOL)arg1 ;
-(void)enumerateWithSettings:(id)arg0 lifetimeExtender:(id)arg1 observer:(id)arg2 completionHandler:(id)arg3 ;
-(void)extensionIndexer:(id)arg0 didChangeNeedsAuthentification:(BOOL)arg1 ;
-(void)fetchOperationServiceOrEndpointWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)finishSetup;
-(void)forceFSIngestionForItemID:(id)arg0 completionHandler:(id)arg1 ;
-(void)forceIngestionAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)forceIngestionForItemID:(id)arg0 completionHandler:(id)arg1 ;
-(void)invalidateSession;
-(void)invalidateWithReason:(id)arg0 ;
-(void)setProvidedItemRecursiveGenerationCount:(id)arg0 forItemAtURL:(id)arg1 ;
-(void)startWithCompletion:(id)arg0 ;
-(void)stopIndexer;
-(void)valuesForAttributes:(id)arg0 forURL:(id)arg1 request:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif