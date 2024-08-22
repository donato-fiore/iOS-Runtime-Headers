// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSTIMEOUTOPERATION_H
#define VSTIMEOUTOPERATION_H

@class NSOperation, NSOperationQueue;


#import "VSAsyncOperation.h"

@interface VSTimeoutOperation : VSAsyncOperation

@property (readonly, nonatomic) NSOperation *operation; // ivar: _operation
@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (readonly, nonatomic) CGFloat timeout; // ivar: _timeout


-(id)init;
-(id)initWithOperation:(id)arg0 timeout:(CGFloat)arg1 ;
-(void)cancel;
-(void)executionDidBegin;


@end


#endif