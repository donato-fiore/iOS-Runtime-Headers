// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDBACKINGSTORECACHEFETCHRECORDMAPPINGS_H
#define HMDBACKINGSTORECACHEFETCHRECORDMAPPINGS_H



#import "HMDBackingStoreOperation.h"
#import "HMDBackingStoreCacheGroup.h"

@interface HMDBackingStoreCacheFetchRecordMappings : HMDBackingStoreOperation

@property (copy, nonatomic) id *fetchResult; // ivar: _fetchResult
@property (retain, nonatomic) HMDBackingStoreCacheGroup *group; // ivar: _group


-(id)initWithGroup:(id)arg0 fetchResult:(id)arg1 ;
-(id)mainReturningError;


@end


#endif