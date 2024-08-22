// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKREQUESTASSETOPERATION_H
#define CKREQUESTASSETOPERATION_H

@class NSOperation;


#import "CKUploadRequestMetadata.h"

@interface CKRequestAssetOperation : NSOperation

@property (copy, nonatomic) id *assetRequestCompletionBlock; // ivar: _assetRequestCompletionBlock
@property (retain, nonatomic) CKUploadRequestMetadata *metadata; // ivar: _metadata
@property (copy, nonatomic) id *requestCallback; // ivar: _requestCallback
@property NSInteger state; // ivar: _state


-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(void)start;


@end


#endif