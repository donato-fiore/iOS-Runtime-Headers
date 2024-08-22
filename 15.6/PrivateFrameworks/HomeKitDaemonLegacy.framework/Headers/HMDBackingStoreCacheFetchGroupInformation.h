// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDBACKINGSTORECACHEFETCHGROUPINFORMATION_H
#define HMDBACKINGSTORECACHEFETCHGROUPINFORMATION_H



#import "HMDBackingStoreOperation.h"
#import "HMDBackingStoreCacheGroup.h"

@interface HMDBackingStoreCacheFetchGroupInformation : HMDBackingStoreOperation

@property (copy, nonatomic) id *fetchResult; // ivar: _fetchResult
@property (retain, nonatomic) HMDBackingStoreCacheGroup *group; // ivar: _group


-(id)initWithGroup:(id)arg0 fetchResult:(id)arg1 ;
-(id)mainReturningError;


@end


#endif