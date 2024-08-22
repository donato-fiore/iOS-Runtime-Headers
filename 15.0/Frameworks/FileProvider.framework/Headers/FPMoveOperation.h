// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPMOVEOPERATION_H
#define FPMOVEOPERATION_H

@class NSArray, NSURL, NSMutableSet, NSMutableDictionary, NSString, NSDictionary;
@protocol FPDaemonActionOperationClient, NSXPCProxyCreating><FPDaemonActionOperation;


#import "FPActionOperation.h"
#import "FPMoveInfo.h"
#import "FPItem.h"
#import "FPProgressManager.h"

@interface FPMoveOperation : FPActionOperation <FPDaemonActionOperationClient>

 {
    FPMoveInfo *_info;
    NSArray *__sourceURLs;
    NSArray *__sourceItems;
    NSURL *__destinationURL;
    FPItem *__destinationFolder;
    FPProgressManager *_progressManager;
    BOOL _isScheduledFromThisClient;
    id<NSXPCProxyCreating><FPDaemonActionOperation> *_remoteMoveOperation;
    NSMutableSet *_createdOrFailedRoots;
    NSMutableDictionary *_createdItemsByRoot;
    NSMutableDictionary *_placeholderIDsByRoot;
    NSMutableDictionary *_URLByResolvedFPItem;
    NSString *_providerIdentifier;
}


@property (copy, nonatomic) id *_t_patchActionOperationInfo; // ivar: __t_patchActionOperationInfo
@property (copy, nonatomic) id *_t_remoteOperationWasScheduled; // ivar: __t_remoteOperationWasScheduled
@property (copy, nonatomic) id *_t_rootCompleted; // ivar: __t_rootCompleted
@property (readonly, nonatomic) BOOL byCopy;
@property (readonly, nonatomic) NSDictionary *errorsByItem; // ivar: _errorsByItem
@property (readonly, nonatomic) NSMutableDictionary *filenamesByURL; // ivar: _filenamesByURL
@property (nonatomic) NSUInteger lastUsageUpdatePolicy; // ivar: __lastUsedDatePolicy
@property (copy, nonatomic) NSDictionary *progressByRoot; // ivar: _progressByRoot
@property (nonatomic) BOOL shouldBounceOnCollision; // ivar: _shouldBounceOnCollision
@property (copy, nonatomic) NSDictionary *targetFilenamesByItem; // ivar: __targetFilenamesByItem
@property (copy, nonatomic) NSDictionary *targetFilenamesByURL; // ivar: __targetFilenamesByURL
@property (readonly, nonatomic) NSDictionary *transferLocations; // ivar: _transferLocations
@property (readonly, nonatomic) NSDictionary *transferResults; // ivar: _transferResults


-(BOOL)_hasAccessToURL:(id)arg0 readonly:(BOOL)arg1 ;
-(BOOL)_preflightCheckNotMovingIntoSelfWithError:(*id)arg0 ;
-(BOOL)_preflightCheckProviderCanMoveWithErrors:(*id)arg0 ;
-(NSUInteger)defaultLastUsedDatePolicy;
-(id)fp_prettyDescription;
-(id)initWithItems:(id)arg0 destinationFolder:(id)arg1 ;
-(id)initWithItems:(id)arg0 destinationURL:(id)arg1 ;
-(id)initWithRemoteOperation:(id)arg0 info:(id)arg1 ;
-(id)initWithSourceItems:(id)arg0 orSourceURLs:(id)arg1 destinationFolder:(id)arg2 orDestinationURL:(id)arg3 ;
-(id)initWithSourceURLs:(id)arg0 destinationFolder:(id)arg1 ;
-(id)initWithSourceURLsAndNames:(id)arg0 destinationFolder:(id)arg1 ;
-(id)initWithURLs:(id)arg0 destinationFolder:(id)arg1 ;
-(id)operationDescription;
-(void)_completedWithResult:(id)arg0 error:(id)arg1 ;
-(void)_completedWithResultsByRoot:(id)arg0 errorsByRoot:(id)arg1 error:(id)arg2 ;
-(void)_preflightForceBounceIfCopyingOntoSelf;
-(void)_presendNotifications;
-(void)_recomputeMoveInfoIfNecessary;
-(void)_recoverFromCollisionError:(id)arg0 withPolicy:(NSUInteger)arg1 ;
-(void)_resolveURLsWithCompletionHandler:(id)arg0 ;
-(void)_runWithRemoteOperation:(id)arg0 ;
-(void)_scheduleAgainAfterErrorRecovery;
-(void)_t_unblockReader;
-(void)actionMain;
-(void)cancel;
-(void)checkNonEmptyPackage;
-(void)completedWithResult:(id)arg0 error:(id)arg1 ;
-(void)completedWithResultsByRoot:(id)arg0 errorsByRoot:(id)arg1 error:(id)arg2 ;
-(void)presendNotifications;
-(void)remoteOperationCompletedRoot:(id)arg0 resultingItem:(id)arg1 error:(id)arg2 completion:(id)arg3 ;
-(void)remoteOperationCreatedRoot:(id)arg0 resultingItem:(id)arg1 completion:(id)arg2 ;
-(void)remoteOperationFinishedSendingPastUpdates;
-(void)remoteOperationProgressesAreReady;
-(void)runUserInteractionsPreflight:(id)arg0 ;
-(void)subclassPreflightWithCompletion:(id)arg0 ;


@end


#endif