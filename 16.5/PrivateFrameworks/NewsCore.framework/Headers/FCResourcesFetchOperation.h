// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCRESOURCESFETCHOPERATION_H
#define FCRESOURCESFETCHOPERATION_H

@class NSArray;
@protocol FCContentContext;


#import "FCMultiStepFetchOperation.h"

@interface FCResourcesFetchOperation : FCMultiStepFetchOperation {
    BOOL _downloadAssets;
    id<FCContentContext> *_context;
    NSArray *_resourceIDs;
    NSArray *_resources;
}


@property (copy, nonatomic) id *archiveHandler; // ivar: _archiveHandler
@property (nonatomic) NSInteger cacheLifetimeHint; // ivar: _cacheLifetimeHint
@property (copy, nonatomic) id *interestTokenHandler; // ivar: _interestTokenHandler
@property (nonatomic) NSUInteger maxConcurrentFetchCount; // ivar: _maxConcurrentFetchCount
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler


-(BOOL)validateOperation;
-(id)completeFetchOperation;
-(id)downloadAssetsWithCompletion:(id)arg0 ;
-(id)fetchResourcesWithCompletion:(id)arg0 ;
-(id)init;
-(id)initWithContext:(id)arg0 resourceIDs:(id)arg1 downloadAssets:(BOOL)arg2 ;
-(void)operationWillFinishWithError:(id)arg0 ;


@end


#endif