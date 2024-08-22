// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSIMAGEDOWNLOADOPERATION_H
#define STSIMAGEDOWNLOADOPERATION_H

@class NSOperation, NSURLSessionDownloadTask, SFStartNetworkSearchFeedback, NSURLRequest;



@interface STSImageDownloadOperation : NSOperation {
    NSURLSessionDownloadTask *_task;
    id *_begin;
    id *_progress;
    id *_completion;
    SFStartNetworkSearchFeedback *_feedback;
    CGFloat _startTime;
}


@property (nonatomic, getter=isExecuting) BOOL executing; // ivar: _executing
@property (nonatomic, getter=isFinished) BOOL finished; // ivar: _finished
@property (readonly, nonatomic) NSURLRequest *request; // ivar: _request


-(BOOL)isAsynchronous;
// -(id)initWithRequest:(id)arg0 session:(id)arg1 begin:(id)arg2 progress:(unk)arg3 completion:(id)arg4  ;
-(void)_markAsCompleted;
-(void)cancel;
-(void)completedWithResponse:(id)arg0 location:(id)arg1 timingData:(id)arg2 error:(id)arg3 ;
-(void)main;
-(void)start;
-(void)updateProgressWithTotalBytesWritten:(NSInteger)arg0 totalBytesExpectedToWrite:(NSInteger)arg1 ;


@end


#endif