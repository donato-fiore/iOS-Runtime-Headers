// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCASSETSFETCHOPERATION_H
#define FCASSETSFETCHOPERATION_H

@class NSArray;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;


#import "FCFetchOperation.h"

@interface FCAssetsFetchOperation : FCFetchOperation {
    NSArray *_assetHandles;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}


@property (copy, nonatomic) id *archiveHandler; // ivar: _archiveHandler
@property (copy, nonatomic) id *interestTokenHandler; // ivar: _interestTokenHandler
@property (nonatomic) NSUInteger maxConcurrentFetchCount; // ivar: _maxConcurrentFetchCount
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler


-(id)initWithAssetHandle:(id)arg0 ;
-(id)initWithAssetHandles:(id)arg0 ;
-(void)performOperation;


@end


#endif