// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __NSCFURLSESSIONCONNECTION_H
#define __NSCFURLSESSIONCONNECTION_H

@protocol NSCopying, OS_dispatch_queue, __NSCFURLSessionConnectionDelegate, OS_dispatch_data;

#import <Foundation/Foundation.h>

#import "NSURLSessionTask.h"
#import "NSURLResponse.h"

@interface __NSCFURLSessionConnection : NSObject <NSCopying>

 {
    NSURLSessionTask *_task;
    NSObject<OS_dispatch_queue> *_workQueue;
    id<__NSCFURLSessionConnectionDelegate> *_delegate;
    BOOL _isFromCache;
    NSURLResponse *_cacheResponse;
    NSObject<OS_dispatch_data> *_cacheData;
    NSUInteger _cacheDataMax;
    NSInteger _maxCacheEntrySize;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTask:(id)arg0 delegate:(id)arg1 delegateQueue:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(void)expectedProgressTargetChanged;
-(void)resume;
-(void)setBytesPerSecondLimit:(NSInteger)arg0 ;
-(void)setIsDownload:(BOOL)arg0 ;
-(void)setPoolPriority:(NSInteger)arg0 ;
-(void)setPriorityHint:(float)arg0 incremental:(BOOL)arg1 ;
-(void)setTLSMaximumSupportedProtocolVersion:(unsigned short)arg0 ;
-(void)setTLSMinimumSupportedProtocolVersion:(unsigned short)arg0 ;
-(void)suspend;


@end


#endif