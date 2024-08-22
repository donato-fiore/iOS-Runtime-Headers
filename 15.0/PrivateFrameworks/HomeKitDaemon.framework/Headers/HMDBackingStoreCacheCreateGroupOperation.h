// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDBACKINGSTORECACHECREATEGROUPOPERATION_H
#define HMDBACKINGSTORECACHECREATEGROUPOPERATION_H



#import "HMDBackingStoreOperation.h"
#import "HMDBackingStoreCacheGroup.h"

@interface HMDBackingStoreCacheCreateGroupOperation : HMDBackingStoreOperation

@property (copy, nonatomic) id *creationBlock; // ivar: _creationBlock
@property (retain, nonatomic) HMDBackingStoreCacheGroup *record; // ivar: _record


-(id)initWithZone:(id)arg0 owner:(id)arg1 rootRecord:(id)arg2 subscriptionName:(id)arg3 subscription:(id)arg4 creationBlock:(id)arg5 ;
-(id)mainReturningError;


@end


#endif