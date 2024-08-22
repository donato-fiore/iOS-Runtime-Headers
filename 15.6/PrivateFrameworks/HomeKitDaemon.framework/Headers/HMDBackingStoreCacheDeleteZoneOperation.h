// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDBACKINGSTORECACHEDELETEZONEOPERATION_H
#define HMDBACKINGSTORECACHEDELETEZONEOPERATION_H



#import "HMDBackingStoreOperation.h"
#import "HMDBackingStoreCacheZone.h"

@interface HMDBackingStoreCacheDeleteZoneOperation : HMDBackingStoreOperation

@property (copy, nonatomic) id *creationBlock; // ivar: _creationBlock
@property (retain, nonatomic) HMDBackingStoreCacheZone *zone; // ivar: _zone


-(id)initWithZone:(id)arg0 resultBlock:(id)arg1 ;
-(id)mainReturningError;


@end


#endif