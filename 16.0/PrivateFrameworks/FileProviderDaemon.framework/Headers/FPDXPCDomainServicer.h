// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPDXPCDOMAINSERVICER_H
#define FPDXPCDOMAINSERVICER_H

@class NSXPCConnection, NSString;
@protocol FPDDomainServicing, FPDLifetimeServicing, OS_dispatch_queue, OS_os_transaction, OS_os_log, FPProgressProtocol;

#import <Foundation/Foundation.h>

#import "FPDServer.h"
#import "FPDProvider.h"
#import "FPDDomain.h"
#import "FPDXPCDomainServicerLifetimeExtender.h"
#import "FPDExtensionSession.h"

@interface FPDXPCDomainServicer : NSObject <FPDDomainServicing, FPDLifetimeServicing>

 {
    FPDServer *_server;
    FPDProvider *__provider;
    FPDDomain *_domain;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_requestQueue;
    id *_activePresenterObservation;
    FPDXPCDomainServicerLifetimeExtender *_lifetimeExtender;
    BOOL _isALifetimerExtender;
    NSObject<OS_os_transaction> *_serviceTransaction;
    NSObject<OS_os_log> *_log;
}


@property (readonly, nonatomic) FPDDomain *domainOrNil;
@property (retain, nonatomic) NSObject<FPProgressProtocol> *downloadProxy; // ivar: _downloadProxy
@property (readonly, nonatomic) NSString *providerDomainID; // ivar: _providerDomainID
@property (readonly, nonatomic) FPDExtensionSession *sessionOrNil;
@property (retain, nonatomic) NSObject<FPProgressProtocol> *uploadProxy; // ivar: _uploadProxy


-(id)__providerIfExists;
-(id)description;
-(id)initWithServer:(id)arg0 providerDomainID:(id)arg1 domain:(id)arg2 connection:(id)arg3 ;
-(id)newFileProviderProxy;
-(id)providerOrNil;
-(int)pid;
-(void)_registerLifetimeExtension;
-(void)_t_setFilePresenterObserver:(id)arg0 ;
-(void)_unregisterLifetimeExtension;
-(void)currentMaterializedSetSyncAnchorWithCompletionHandler:(id)arg0 ;
-(void)currentPendingSetSyncAnchorWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)didChangeItemID:(id)arg0 completionHandler:(id)arg1 ;
-(void)enumerateMaterializedSetFromSyncAnchor:(id)arg0 suggestedBatchSize:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)enumeratePendingSetFromSyncAnchor:(id)arg0 suggestedBatchSize:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)evictItemWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)ingestFromCacheItemWithIdentifier:(id)arg0 requestedFields:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)invalidate;
-(void)listAvailableTestingOperationsWithCompletionHandler:(id)arg0 ;
-(void)materializeItemWithIdentifier:(id)arg0 requestedRange:(struct _NSRange )arg1 completionHandler:(id)arg2 ;
-(void)reimportItemsBelowItemWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)resolveItemID:(id)arg0 completionHandler:(id)arg1 ;
-(void)runTestingOperations:(id)arg0 completionHandler:(id)arg1 ;
-(void)setDomainEjectable:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)signalErrorResolved:(id)arg0 completionHandler:(id)arg1 ;
-(void)startAccessingServiceWithName:(id)arg0 itemID:(id)arg1 completionHandler:(id)arg2 ;
-(void)startExtendingLifetime;
-(void)stopExtendingLifetime;
-(void)subscribeToDownloadProgressUpdates:(id)arg0 completionHandler:(id)arg1 ;
-(void)subscribeToUploadProgressUpdates:(id)arg0 completionHandler:(id)arg1 ;
-(void)temporaryDirectoryWithCompletionHandler:(id)arg0 ;
-(void)waitForChangesOnItemsBelowItemWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)waitForStabilizationWithCompletionHandler:(id)arg0 ;


@end


#endif