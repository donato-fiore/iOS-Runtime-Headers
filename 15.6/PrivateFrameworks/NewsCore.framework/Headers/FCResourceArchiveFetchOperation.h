// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCRESOURCEARCHIVEFETCHOPERATION_H
#define FCRESOURCEARCHIVEFETCHOPERATION_H

@class NSURL, NSURLSessionDownloadTask, NSArray;
@protocol FCContentContext;


#import "FCOperation.h"

@interface FCResourceArchiveFetchOperation : FCOperation {
    NSURL *_archiveURL;
    id<FCContentContext> *_context;
    NSURLSessionDownloadTask *_downloadTask;
    NSArray *_resultResources;
}


@property (copy, nonatomic) id *archiveHandler; // ivar: _archiveHandler
@property (copy, nonatomic) id *fetchCompletionHandler; // ivar: _fetchCompletionHandler
@property (copy, nonatomic) id *interestTokenHandler; // ivar: _interestTokenHandler
@property (nonatomic) NSUInteger maxConcurrentFetchCount; // ivar: _maxConcurrentFetchCount
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler


-(BOOL)validateOperation;
-(id)initWithArchiveURL:(id)arg0 context:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif