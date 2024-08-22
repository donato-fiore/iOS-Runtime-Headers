// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDBACKINGSTORECACHEFETCHMIGRATEDRESULT_H
#define HMDBACKINGSTORECACHEFETCHMIGRATEDRESULT_H



#import "HMDBackingStoreOperation.h"
#import "HMDBackingStoreCacheGroup.h"

@interface HMDBackingStoreCacheFetchMigratedResult : HMDBackingStoreOperation

@property (copy, nonatomic) id *fetchResult; // ivar: _fetchResult
@property (retain, nonatomic) HMDBackingStoreCacheGroup *group; // ivar: _group
@property (readonly) BOOL migration; // ivar: _migration
@property (readonly) BOOL update; // ivar: _update


-(id)initWithGroup:(id)arg0 update:(BOOL)arg1 migration:(BOOL)arg2 fetchResult:(id)arg3 ;
-(id)mainReturningError;


@end


#endif