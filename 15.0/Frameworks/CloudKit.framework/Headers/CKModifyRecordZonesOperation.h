// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKMODIFYRECORDZONESOPERATION_H
#define CKMODIFYRECORDZONESOPERATION_H

@class NSMutableArray, NSMutableDictionary, NSArray;
@protocol CKModifyRecordZonesOperationCallbacks;


#import "CKDatabaseOperation.h"
#import "CKModifyRecordZonesOperationInfo.h"

@interface CKModifyRecordZonesOperation : CKDatabaseOperation <CKModifyRecordZonesOperationCallbacks>

 {
    NSMutableArray *_savedRecordZones;
    NSMutableArray *_deletedRecordZoneIDs;
    NSMutableDictionary *_recordZoneErrors;
}


@property (readonly, nonatomic) NSObject<CKModifyRecordZonesOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic) BOOL markZonesAsUserPurged; // ivar: _markZonesAsUserPurged
@property (copy, nonatomic) id *modifyRecordZonesCompletionBlock; // ivar: _modifyRecordZonesCompletionBlock
@property (readonly, nonatomic) CKModifyRecordZonesOperationInfo *operationInfo;
@property (copy, nonatomic) id *perRecordZoneDeleteBlock; // ivar: _perRecordZoneDeleteBlock
@property (copy, nonatomic) id *perRecordZoneSaveBlock; // ivar: _perRecordZoneSaveBlock
@property (copy, nonatomic) NSArray *recordZoneIDsToDelete; // ivar: _recordZoneIDsToDelete
@property (retain, nonatomic) NSMutableDictionary *recordZonesByZoneIDs; // ivar: _recordZonesByZoneIDs
@property (copy, nonatomic) NSArray *recordZonesToSave; // ivar: _recordZonesToSave


+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)init;
-(id)initWithRecordZonesToSave:(id)arg0 recordZoneIDsToDelete:(id)arg1 ;
-(id)relevantZoneIDs;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleDeleteForRecordZoneID:(id)arg0 error:(id)arg1 ;
-(void)handleSaveForRecordZoneID:(id)arg0 recordZone:(id)arg1 error:(id)arg2 ;
-(void)performCKOperation;


@end


#endif