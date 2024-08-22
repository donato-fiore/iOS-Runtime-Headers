// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGDCLOUDKITSYNC_H
#define SGDCLOUDKITSYNC_H

@class _PASKVOHandler, CKDatabase, APSConnection, NSOperationQueue, NSMutableArray, CKContainer, SGFuture, NSOperation, NSError, NSString;
@protocol APSConnectionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_SGDCloudKitSyncPersistedState.h"

@interface SGDCloudKitSync : NSObject <APSConnectionDelegate>

 {
    _PASKVOHandler *_kvoHandler;
    CKDatabase *_database;
    id *_callback;
    id *_deleteAllSyncedItemsCallback;
    BOOL _readyForNewEntities;
    APSConnection *_apsConnection;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_opQueue;
    NSMutableArray *_operationsToAddToOpQueue;
    CKContainer *_container;
    SGFuture *_accountInfoFuture;
    BOOL _accountInfoInFlight;
    _SGDCloudKitSyncPersistedState *_persistedState;
    NSInteger _suspendCount;
    BOOL _noZone;
    BOOL _disabledBecauseOutOfDateSoftware;
    NSOperation *_inProgressProcureSaltOperation;
    NSOperation *_inProgressCreateZoneOperation;
    NSOperation *_inProgressDeleteZoneOperation;
    NSOperation *_inProgressFetchNewEntitiesOperation;
    BOOL _requestedFetchNewEntitiesWhileRequestAlreadyInFlight;
    NSError *_createZoneError;
    NSError *_deleteZoneError;
    NSError *_procureSaltError;
    BOOL _processingStateChanges;
    BOOL _pendingProcessStateChanges;
    *ct_green_tea_logger_s _greenTeaLogger;
    SGFuture *_privacySaltFuture;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_callbackQueue;
+(id)_sharedInstanceConfigurationQueue;
+(id)apsEnvironmentStringForContainer:(id)arg0 ;
+(id)sharedInstance;
+(void)setSharedInstanceConfigurationBlock:(id)arg0 ;
-(BOOL)pauseIfNeededAndReturnRetryEligibilityForError:(id)arg0 ;
-(BOOL)shouldRecreateZoneForRecordError:(id)arg0 operationError:(id)arg1 ;
-(id)_ckErrorForId:(id)arg0 inError:(id)arg1 ;
-(id)accountInfo;
-(id)addCreateZoneAttemptOperationWithRetries:(NSUInteger)arg0 ;
-(id)addCreateZoneOperation;
-(id)addDeleteAndRecreateZoneOperation;
-(id)addDeleteZoneAttemptOperationWithRetries:(NSUInteger)arg0 ;
-(id)addDeleteZoneOperation;
-(id)addFetchNewEntitiesAttemptOperationWithRetries:(NSUInteger)arg0 ;
-(id)addFetchNewEntitiesOperation;
-(id)addManateeSanityCheckOperation;
-(id)addOperation;
-(id)addOperation:(id)arg0 ;
-(id)addProcureSaltAttemptOperationWithRetries:(NSUInteger)arg0 ;
-(id)addProcureSaltOperation;
// -(id)addWriteOperationForRecordGetter:(id)arg0 deleteGetter:(unk)arg1 withRetries:(id)arg2  ;
// -(id)addWriteOperationForRecordGetter:(id)arg0 deleteGetter:(unk)arg1 withRetries:(id)arg2 isFirstTry:(unk)arg3  ;
-(id)ckErrorForRecordId:(id)arg0 inError:(id)arg1 ;
-(id)ckErrorForRecordZoneId:(id)arg0 inError:(id)arg1 ;
-(id)getUnderlyingError:(id)arg0 ;
-(id)init;
-(id)invokeNewEntitiesCallbackWithEntity:(id)arg0 ;
-(id)privacySalt;
-(id)recordZoneId;
-(id)shouldRemoveEventsFromEventKit;
-(void)_addDependency:(id)arg0 toTrain:(id)arg1 ;
-(void)_coupleOperationTrainWithStart:(id)arg0 end:(id)arg1 ;
-(void)accountChanged:(id)arg0 ;
-(void)addEnrichment:(id)arg0 withParentEntity:(id)arg1 ;
-(void)clearErrors;
-(void)connection:(id)arg0 didChangeConnectedStatus:(BOOL)arg1 ;
-(void)connection:(id)arg0 didFailToSendOutgoingMessage:(id)arg1 error:(id)arg2 ;
-(void)connection:(id)arg0 didReceiveIncomingMessage:(id)arg1 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3 ;
-(void)connection:(id)arg0 didSendOutgoingMessage:(id)arg1 ;
-(void)connectionDidReconnect:(id)arg0 ;
-(void)createSubscriptionWithRetries:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)deleteGroupId:(id)arg0 ;
-(void)deleteStorageEvent:(id)arg0 ;
-(void)deleteZoneWithCompletion:(id)arg0 ;
-(void)disable;
-(void)failSalt;
-(void)processStateChanges;
-(void)resume;
-(void)setDatabase:(id)arg0 ;
-(void)setDeleteAllSyncedItemsCallback:(id)arg0 ;
-(void)setNewEntitiesCallback:(id)arg0 ;
-(void)setReadyForNewEntities:(BOOL)arg0 ;
-(void)suspend;
-(void)suspendAndResumeAfter:(CGFloat)arg0 ;


@end


#endif