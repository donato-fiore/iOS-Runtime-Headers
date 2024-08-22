// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKFETCHRECORDZONESOPERATION_H
#define CKFETCHRECORDZONESOPERATION_H

@class NSMutableDictionary, NSArray;
@protocol CKFetchRecordZonesOperationCallbacks;


#import "CKDatabaseOperation.h"
#import "CKFetchRecordZonesOperationInfo.h"

@interface CKFetchRecordZonesOperation : CKDatabaseOperation <CKFetchRecordZonesOperationCallbacks>



@property (readonly, nonatomic) NSObject<CKFetchRecordZonesOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) id *fetchRecordZonesCompletionBlock; // ivar: _fetchRecordZonesCompletionBlock
@property (nonatomic) BOOL ignorePCSFailures; // ivar: _ignorePCSFailures
@property (nonatomic) BOOL isFetchAllRecordZonesOperation; // ivar: _isFetchAllRecordZonesOperation
@property (readonly, nonatomic) CKFetchRecordZonesOperationInfo *operationInfo;
@property (copy, nonatomic) id *perRecordZoneCompletionBlock; // ivar: _perRecordZoneCompletionBlock
@property (retain, nonatomic) NSMutableDictionary *recordZoneErrors; // ivar: _recordZoneErrors
@property (copy, nonatomic) NSArray *recordZoneIDs; // ivar: _recordZoneIDs
@property (retain, nonatomic) NSMutableDictionary *recordZonesByZoneID; // ivar: _recordZonesByZoneID


+(id)fetchAllRecordZonesOperation;
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)init;
-(id)initWithRecordZoneIDs:(id)arg0 ;
-(id)relevantZoneIDs;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleFetchForRecordZoneID:(id)arg0 recordZone:(id)arg1 error:(id)arg2 ;
-(void)performCKOperation;


@end


#endif