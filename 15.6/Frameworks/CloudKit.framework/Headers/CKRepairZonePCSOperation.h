// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKREPAIRZONEPCSOPERATION_H
#define CKREPAIRZONEPCSOPERATION_H

@class NSArray;
@protocol CKRepairZonePCSOperationCallbacks;


#import "CKDatabaseOperation.h"
#import "CKRepairZonePCSOperationInfo.h"

@interface CKRepairZonePCSOperation : CKDatabaseOperation <CKRepairZonePCSOperationCallbacks>



@property (readonly, nonatomic) NSObject<CKRepairZonePCSOperationCallbacks> *clientOperationCallbackProxy;
@property (readonly, nonatomic) CKRepairZonePCSOperationInfo *operationInfo;
@property (retain, nonatomic) NSArray *zoneIDs; // ivar: _zoneIDs
@property (copy, nonatomic) id *zoneRepairedBlock; // ivar: _zoneRepairedBlock


+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)initWithZoneIDsToRepair:(id)arg0 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleZonePCSRepairForID:(id)arg0 pcsInfo:(id)arg1 error:(id)arg2 ;
-(void)performCKOperation;


@end


#endif