// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRANSPARENCYMANAGEDDATASTORE_H
#define TRANSPARENCYMANAGEDDATASTORE_H

@class NSManagedObjectContext;

#import <Foundation/Foundation.h>

#import "TransparencyManagedDataStoreController.h"

@interface TransparencyManagedDataStore : NSObject

@property (retain) NSManagedObjectContext *context; // ivar: _context
@property NSInteger contextRefCount; // ivar: _contextRefCount
@property (weak) TransparencyManagedDataStoreController *controller; // ivar: _controller
@property BOOL permanentContext; // ivar: _permanentContext


+(id)deserializeLoggableDatas:(id)arg0 error:(*id)arg1 ;
+(id)serializeLoggableDatas:(id)arg0 ;
+(void)cleanseError:(*id)arg0 ;
+(void)reportCoreDataEventForEntity:(id)arg0 hardFailure:(BOOL)arg1 write:(BOOL)arg2 code:(NSInteger)arg3 underlyingError:(id)arg4 ;
+(void)reportCoreDataEventForEntity:(id)arg0 write:(BOOL)arg1 code:(NSInteger)arg2 underlyingError:(id)arg3 ;
+(void)reportCoreDataPersistEventForLocation:(id)arg0 underlyingError:(id)arg1 ;
-(BOOL)clearState:(*id)arg0 ;
-(BOOL)clearStateForApplication:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteDownloadRecord:(NSUInteger)arg0 application:(id)arg1 error:(*id)arg2 ;
-(BOOL)deleteDownloadRecordById:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteDownloadRecords:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteSMTs:(id)arg0 mutationTimeLessThan:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)deleteSTHs:(id)arg0 logBeginMsLessThan:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)hasPendingDownloadForUUID:(id)arg0 error:(*id)arg1 ;
-(BOOL)haveTreeHead:(id)arg0 isMapHead:(BOOL)arg1 application:(id)arg2 logBeginTime:(NSInteger)arg3 logType:(NSInteger)arg4 revision:(NSInteger)arg5 gossip:(BOOL)arg6 error:(*id)arg7 ;
-(BOOL)logMetricsForApplication:(id)arg0 error:(*id)arg1 ;
-(BOOL)logRequestMetricsForApplication:(id)arg0 error:(*id)arg1 ;
-(BOOL)logSMTMetricsForApplication:(id)arg0 error:(*id)arg1 ;
-(BOOL)logSTHMetricsForApplication:(id)arg0 error:(*id)arg1 ;
-(BOOL)performAndWaitForDownloadId:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)performAndWaitForFetchId:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)performAndWaitForRequestId:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)persistAndRefaultObject:(id)arg0 error:(*id)arg1 ;
-(BOOL)persistAndRefaultObjects:(id)arg0 error:(*id)arg1 ;
-(BOOL)persistWithError:(*id)arg0 ;
-(BOOL)populateExistingRequestsToLookupTable:(*id)arg0 ;
-(BOOL)populateMissingLogHeadHashes:(*id)arg0 ;
-(BOOL)resetRequestsToPending:(id)arg0 error:(*id)arg1 ;
-(BOOL)setResponse:(id)arg0 downloadId:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)countOutstandingRequestsForApplication:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)countOutstandingSMTsForApplication:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)countOutstandingSTHsForApplication:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)countTotalRequestsForApplication:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)countTotalSMTsForApplication:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)countTotalSTHsForApplication:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)requestCount:(*id)arg0 ;
-(NSUInteger)requestFailureCount:(*id)arg0 ;
-(NSUInteger)signedMutationTimestampCount:(*id)arg0 ;
-(NSUInteger)signedMutationTimestampsFailureCount:(*id)arg0 ;
-(NSUInteger)signedTreeHeadFailureCount:(*id)arg0 ;
-(NSUInteger)treeHeadCount:(*id)arg0 ;
-(id)copyStatistics:(*id)arg0 ;
-(id)createDownloadRecord:(NSUInteger)arg0 application:(id)arg1 ;
-(id)createFetchRecord;
-(id)createFetchRecordForRequestData:(id)arg0 request:(id)arg1 error:(*id)arg2 ;
-(id)createRequest;
-(id)createRequestFailure;
-(id)createRequestWithUri:(id)arg0 application:(id)arg1 accountID:(id)arg2 serverData:(id)arg3 queryRequest:(id)arg4 queryResponse:(id)arg5 type:(NSUInteger)arg6 error:(*id)arg7 ;
-(id)createRequestWithUri:(id)arg0 application:(id)arg1 accountID:(id)arg2 serverData:(id)arg3 syncedData:(id)arg4 queryRequest:(id)arg5 queryResponse:(id)arg6 type:(NSUInteger)arg7 clientId:(id)arg8 error:(*id)arg9 ;
-(id)createRequestWithUri:(id)arg0 application:(id)arg1 accountID:(id)arg2 serverData:(id)arg3 syncedData:(id)arg4 queryRequest:(id)arg5 queryResponse:(id)arg6 type:(NSUInteger)arg7 error:(*id)arg8 ;
-(id)createRequestWithUri:(id)arg0 application:(id)arg1 accountID:(id)arg2 serverData:(id)arg3 type:(NSUInteger)arg4 error:(*id)arg5 ;
-(id)createSignedMutationTimestamp:(id)arg0 mutationMs:(NSUInteger)arg1 receiptTime:(CGFloat)arg2 ;
-(id)createSignedMutationTimestampsFailure;
-(id)createSignedTreeHeadFailure;
-(id)createTreeHead;
-(id)createTreeHead:(id)arg0 isMapHead:(BOOL)arg1 application:(id)arg2 logBeginTime:(NSInteger)arg3 logHeadHash:(id)arg4 logType:(NSInteger)arg5 revision:(NSInteger)arg6 gossip:(BOOL)arg7 ;
-(id)downloadRecords:(*id)arg0 ;
-(id)fetchCompletedRequests:(id)arg0 olderThan:(id)arg1 error:(*id)arg2 ;
-(id)fetchDownloadRecord:(NSUInteger)arg0 application:(id)arg1 error:(*id)arg2 ;
-(id)fetchDownloadRecordById:(id)arg0 error:(*id)arg1 ;
-(id)fetchFetchRecordById:(id)arg0 error:(*id)arg1 ;
-(id)fetchRequestForUUID:(id)arg0 error:(*id)arg1 ;
-(id)fetchRequestWithUri:(id)arg0 application:(id)arg1 accountID:(id)arg2 loggableDatas:(id)arg3 youngerThan:(id)arg4 error:(*id)arg5 ;
-(id)fetchRequestsForURI:(id)arg0 error:(*id)arg1 ;
-(id)fetchSMT:(id)arg0 request:(id)arg1 ;
-(id)fetchTreeHead:(id)arg0 isMapHead:(BOOL)arg1 application:(id)arg2 logBeginTime:(NSInteger)arg3 logType:(NSInteger)arg4 revision:(NSInteger)arg5 error:(*id)arg6 ;
-(id)fetchTreeHeadsWithoutHash:(id)arg0 isMapHead:(BOOL)arg1 application:(id)arg2 logBeginTime:(NSInteger)arg3 logType:(NSInteger)arg4 revision:(NSInteger)arg5 error:(*id)arg6 ;
-(id)initWithController:(id)arg0 ;
-(id)initWithController:(id)arg0 context:(id)arg1 ;
-(id)latestConsistencyVerifiedTreeHeadRevision:(id)arg0 logBeginMs:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)latestConsistencyVerifiedTreeHeadSTH:(id)arg0 logBeginMs:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)requestFailures:(*id)arg0 ;
-(id)requestIds:(*id)arg0 ;
-(id)requests:(*id)arg0 ;
-(id)retainContext;
-(id)signedMutationTimestamps:(*id)arg0 ;
-(id)signedMutationTimestampsFailures:(*id)arg0 ;
-(id)signedTreeHeadFailures:(*id)arg0 ;
-(id)treeHeads:(*id)arg0 ;
-(id)treeHeadsForApplication:(id)arg0 error:(*id)arg1 ;
-(id)unverifiedRevisions:(id)arg0 isMapHead:(BOOL)arg1 inclusion:(BOOL)arg2 logBeginMs:(NSUInteger)arg3 error:(*id)arg4 ;
-(void)createKTRequestID:(id)arg0 request:(id)arg1 ;
-(void)deleteObject:(id)arg0 ;
-(void)deleteObjectSet:(id)arg0 ;
-(void)garbageCollectRequests:(id)arg0 olderThan:(id)arg1 error:(*id)arg2 ;
-(void)garbageCollectSTHs:(id)arg0 logBeginMs:(NSUInteger)arg1 olderThan:(id)arg2 error:(*id)arg3 ;
-(void)gargabeCollectEntity:(id)arg0 predicate:(id)arg1 error:(*id)arg2 ;
-(void)performBlock:(id)arg0 ;
-(void)performBlockAndWait:(id)arg0 ;
-(void)performForPendingSMTs:(id)arg0 uri:(id)arg1 accountId:(id)arg2 error:(*id)arg3 block:(id)arg4 ;
-(void)performForPendingSTHs:(id)arg0 olderThan:(id)arg1 type:(NSUInteger)arg2 error:(*id)arg3 block:(id)arg4 ;
-(void)performForRequestsWithPendingResponses:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(void)performForRequestsWithPendingSMTs:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(void)performForSMTsWithUnverifiedSignature:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(void)performForSTHs:(id)arg0 isMapHead:(BOOL)arg1 revision:(id)arg2 error:(*id)arg3 block:(id)arg4 ;
-(void)performForSTHsWithUnverifiedSignature:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(void)performOnBatchesOfEntity:(id)arg0 predicate:(id)arg1 enforceMax:(BOOL)arg2 error:(*id)arg3 block:(id)arg4 ;
-(void)performOnRequestsForPredicate:(id)arg0 enforceMax:(BOOL)arg1 error:(*id)arg2 block:(id)arg3 ;
-(void)refaultObject:(id)arg0 ;
-(void)refaultObjects:(id)arg0 ;
-(void)releaseContext;
-(void)saveAndRefaultObject:(id)arg0 ;


@end


#endif