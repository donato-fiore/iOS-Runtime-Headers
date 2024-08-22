// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLMEMORYCACHEQUERYOPERATION_H
#define QLMEMORYCACHEQUERYOPERATION_H

@class NSOperation;
@protocol OS_dispatch_queue;


#import "_QLCacheThread.h"
#import "QLTGeneratorThumbnailRequest.h"

@interface QLMemoryCacheQueryOperation : NSOperation {
    _QLCacheThread *_cacheThread;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain) QLTGeneratorThumbnailRequest *generatorRequest; // ivar: _generatorRequest


-(id)initWithThumbnailRequest:(id)arg0 cacheThread:(id)arg1 ;
-(void)cancel;
-(void)main;


@end


#endif