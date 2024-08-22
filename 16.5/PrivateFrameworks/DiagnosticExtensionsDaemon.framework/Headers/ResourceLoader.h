// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RESOURCELOADER_H
#define RESOURCELOADER_H

@class NSString, NSOperationQueue, NSURLSession, NSURLCache;
@protocol NSURLSessionDelegate;

#import <Foundation/Foundation.h>


@interface ResourceLoader : NSObject <NSURLSessionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSOperationQueue *queue; // ivar: _queue
@property (retain, nonatomic) NSURLSession *session; // ivar: _session
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURLCache *urlCache; // ivar: _urlCache


+(id)_localDateFormatter;
+(id)_rfc1123DateFormatter;
-(CGFloat)_simulatedLatency;
-(id)init;
-(void)asynchronousDataFromURL:(id)arg0 completionBlock:(id)arg1 ;
-(void)flushCache;
-(void)refreshCacheForRequest:(id)arg0 usingCachedResponse:(id)arg1 completionBlock:(id)arg2 ;


@end


#endif