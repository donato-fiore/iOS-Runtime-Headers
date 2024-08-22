// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLDISKCACHEQUERYOPERATION_H
#define QLDISKCACHEQUERYOPERATION_H

@class NSOperation, NSMutableDictionary;
@protocol OS_dispatch_queue;


#import "_QLCacheThread.h"

@interface QLDiskCacheQueryOperation : NSOperation {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain) _QLCacheThread *cacheThread; // ivar: _cacheThread
@property (retain) NSMutableDictionary *thumbnailRequestBatch; // ivar: _thumbnailRequestBatch
@property NSInteger thumbnailRequestCount; // ivar: _thumbnailRequestCount


-(BOOL)appendThumbnailRequest:(id)arg0 ;
-(id)initWithCacheThread:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)main;


@end


#endif