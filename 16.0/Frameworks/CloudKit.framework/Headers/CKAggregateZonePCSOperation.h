// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKAGGREGATEZONEPCSOPERATION_H
#define CKAGGREGATEZONEPCSOPERATION_H

@class NSArray;


#import "CKDatabaseOperation.h"
#import "CKAggregateZonePCSOperationInfo.h"
#import "CKRecordZone.h"

@interface CKAggregateZonePCSOperation : CKDatabaseOperation

@property (copy, nonatomic) id *aggregateZonePCSCompletionBlock; // ivar: _aggregateZonePCSCompletionBlock
@property (readonly, nonatomic) CKAggregateZonePCSOperationInfo *operationInfo;
@property (copy, nonatomic) NSArray *sourceZoneIDs; // ivar: _sourceZoneIDs
@property (copy, nonatomic) CKRecordZone *targetZone; // ivar: _targetZone


-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)init;
-(id)initWithSourceZoneIDs:(id)arg0 targetZone:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)performCKOperation;


@end


#endif