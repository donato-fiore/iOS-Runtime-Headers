// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDBACKINGSTOREFETCHARCHIVEOPERATION_H
#define HMDBACKINGSTOREFETCHARCHIVEOPERATION_H

@class NSString;


#import "HMDBackingStoreOperation.h"

@interface HMDBackingStoreFetchArchiveOperation : HMDBackingStoreOperation

@property (copy, nonatomic) id *fetchResult; // ivar: _fetchResult
@property (copy) NSString *identifier; // ivar: _identifier


-(id)initWithFetchResult:(id)arg0 ;
-(id)mainReturningError;


@end


#endif