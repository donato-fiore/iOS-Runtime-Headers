// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSFILEACCESSCLAIM_H
#define NSFILEACCESSCLAIM_H

@class NSMutableArray, NSMutableOrderedSet, NSMutableSet, NSMutableDictionary, NSArray;
@protocol NSSecureCoding, OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "NSXPCConnection.h"
#import "NSString.h"
#import "NSError.h"
#import "NSCountedSet.h"
#import "NSFileAccessProcessManager.h"

@interface NSFileAccessClaim : NSObject <NSSecureCoding>

 {
    NSXPCConnection *_client;
    NSString *_claimID;
    NSString *_purposeIDOrNil;
    BOOL _cameFromSuperarbiter;
    NSUInteger _blockageCount;
    BOOL _didWait;
    BOOL _isRevoked;
    NSMutableArray *_claimerBlockageReasons;
    NSError *_claimerError;
    NSMutableOrderedSet *_pendingClaims;
    NSMutableSet *_blockingClaims;
    NSCountedSet *_blockingReactorIDs;
    NSMutableArray *_providerCancellationProcedures;
    NSMutableDictionary *_reacquisitionProceduresByPresenterID;
    NSMutableArray *_revocationProcedures;
    NSMutableArray *_devaluationProcedures;
    NSMutableArray *_finishingProcedures;
    NSFileAccessProcessManager *_processManager;
    BOOL _hasInvokedClaimer;
    id *_claimerOrNil;
    id *_serverClaimerOrNil;
    NSMutableArray *_sandboxTokens;
    NSObject<OS_dispatch_queue> *_arbiterQueue;
    id *_originatingReactorQueueID;
    NSMutableDictionary *_fileHandlesForEvictionProtection;
}


@property (readonly, copy) NSArray *allURLs;
@property (readonly) NSObject<OS_dispatch_semaphore> *claimerWaiter; // ivar: _claimerWaiter
@property BOOL shouldEnableMaterializationDuringAccessorBlock; // ivar: _shouldEnableMaterializationDuringAccessorBlock


+(BOOL)canNewWriteOfItemAtLocation:(id)arg0 options:(NSUInteger)arg1 safelyOverlapExistingWriteOfItemAtLocation:(id)arg2 options:(NSUInteger)arg3 ;
+(BOOL)canReadingItemAtLocation:(id)arg0 options:(NSUInteger)arg1 safelyOverlapNewWriting:(BOOL)arg2 ofItemAtLocation:(id)arg3 options:(NSUInteger)arg4 ;
+(BOOL)supportsSecureCoding;
-(BOOL)_writeArchiveOfDirectoryAtURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)cameFromSuperarbiter;
-(BOOL)canAccessLocations:(id)arg0 forReading:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)checkIfSymbolicLinkAtURL:(id)arg0 withResolutionCount:(*NSInteger)arg1 andIfSoThenReevaluateSelf:(id)arg2 ;
-(BOOL)claimerInvokingIsBlockedByReactorWithID:(id)arg0 ;
-(BOOL)didWait;
-(BOOL)evaluateSelfWithRootNode:(id)arg0 checkSubarbitrability:(BOOL)arg1 ;
-(BOOL)isBlockedByClaimWithPurposeID:(id)arg0 ;
-(BOOL)isBlockedByReadingItemAtLocation:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)isBlockedByWritingItemAtLocation:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)isGranted;
-(BOOL)isRevoked;
-(BOOL)shouldBeRevokedPriorToInvokingAccessor;
-(BOOL)shouldCancelInsteadOfWaiting;
-(BOOL)shouldInformProvidersAboutEndOfWriteWithOptions:(NSUInteger)arg0 ;
-(BOOL)shouldMakeProviderProvideItemAtLocation:(id)arg0 withOptions:(NSUInteger)arg1 ;
-(BOOL)shouldReadingWithOptions:(NSUInteger)arg0 causePresenterToRelinquish:(id)arg1 ;
-(BOOL)shouldWritingWithOptions:(NSUInteger)arg0 causePresenterToRelinquish:(id)arg1 ;
-(id)claimID;
-(id)claimerError;
-(id)client;
-(id)description;
-(id)descriptionWithIndenting:(id)arg0 ;
-(id)initWithClient:(id)arg0 claimID:(id)arg1 purposeID:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)pendingClaims;
-(id)purposeID;
-(id)purposeIDOfClaimOnItemAtLocation:(id)arg0 forMessagingPresenter:(id)arg1 ;
-(int)clientProcessIdentifier;
-(void)_checkIfMovingRequiresProvidingAmongWritingLocations:(id)arg0 options:(*NSUInteger)arg1 thenContinue:(id)arg2 ;
-(void)_protectIfNecessaryFileAtURL:(id)arg0 withOptions:(NSUInteger)arg1 forReading:(BOOL)arg2 ;
-(void)_setupWithClaimID:(id)arg0 purposeID:(id)arg1 originatingReactorQueueID:(id)arg2 ;
-(void)acceptClaimFromClient:(id)arg0 arbiterQueue:(id)arg1 grantHandler:(id)arg2 ;
-(void)addBlockingReactorID:(id)arg0 ;
-(void)addPendingClaim:(id)arg0 ;
-(void)block;
-(void)blockClaimerForReason:(id)arg0 ;
-(void)cancelled;
-(void)dealloc;
-(void)devalueOldClaim:(id)arg0 ;
-(void)devalueSelf;
-(void)disavowed;
-(void)encodeWithCoder:(id)arg0 ;
-(void)ensureProvidersOfItemsAtReadingLocations:(id)arg0 writingLocations:(id)arg1 thenContinue:(id)arg2 ;
-(void)evaluateNewClaim:(id)arg0 ;
-(void)finished;
-(void)forwardUsingConnection:(id)arg0 crashHandler:(id)arg1 ;
-(void)givePriorityToClaim:(id)arg0 ;
-(void)granted;
-(void)invokeClaimer;
-(void)itemAtLocation:(id)arg0 wasReplacedByItemAtLocation:(id)arg1 ;
-(void)makePresentersOfItemAtLocation:(id)arg0 orContainedItem:(BOOL)arg1 relinquishUsingProcedureGetter:(id)arg2 ;
-(void)makeProviderOfItemAtLocation:(id)arg0 provideIfNecessaryWithOptions:(NSUInteger)arg1 thenContinue:(id)arg2 ;
-(void)makeProviderOfItemAtLocation:(id)arg0 provideOrAttachPhysicalURLIfNecessaryForPurposeID:(id)arg1 readingOptions:(NSUInteger)arg2 thenContinue:(id)arg3 ;
-(void)makeProviderOfItemAtLocation:(id)arg0 provideOrAttachPhysicalURLIfNecessaryForPurposeID:(id)arg1 writingOptions:(NSUInteger)arg2 thenContinue:(id)arg3 ;
-(void)makeProviderOfItemAtLocation:(id)arg0 providePhysicalURLThenContinue:(id)arg1 ;
-(void)makeProvidersProvideItemsForReadingLocations:(id)arg0 options:(*NSUInteger)arg1 andWritingLocationsIfNecessary:(id)arg2 options:(*NSUInteger)arg3 thenContinue:(id)arg4 ;
-(void)prepareClaimForGrantingWithArbiterQueue:(id)arg0 ;
-(void)prepareItemForUploadingFromURL:(id)arg0 thenContinue:(id)arg1 ;
-(void)protectFilesAgainstEviction;
-(void)removeBlockingReactorID:(id)arg0 ;
-(void)removePendingClaims:(id)arg0 ;
-(void)revoked;
-(void)scheduleBlockedClaim:(id)arg0 ;
-(void)setCameFromSuperarbiter;
-(void)setClaimerError:(id)arg0 ;
-(void)startObservingClientState;
-(void)unblock;
-(void)unblockClaimerForReason:(id)arg0 ;
-(void)whenDevaluedPerformProcedure:(id)arg0 ;
-(void)whenFinishedPerformProcedure:(id)arg0 ;
-(void)whenRevokedPerformProcedure:(id)arg0 ;


@end


#endif