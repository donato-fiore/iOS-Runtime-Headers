// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDBACKINGSTORECACHEDELETERECORDOPERATION_H
#define HMDBACKINGSTORECACHEDELETERECORDOPERATION_H

@class NSArray;


#import "HMDBackingStoreOperation.h"
#import "HMDBackingStoreCacheGroup.h"

@interface HMDBackingStoreCacheDeleteRecordOperation : HMDBackingStoreOperation

@property (retain, nonatomic) HMDBackingStoreCacheGroup *group; // ivar: _group
@property (retain, nonatomic) NSArray *recordNames; // ivar: _recordNames


-(id)initWithGroup:(id)arg0 recordNames:(id)arg1 resultBlock:(id)arg2 ;
-(id)mainReturningError;


@end


#endif