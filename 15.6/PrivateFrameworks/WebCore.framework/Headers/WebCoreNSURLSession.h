// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBCORENSURLSESSION_H
#define WEBCORENSURLSESSION_H

@class NSURLSessionConfiguration, NSOperationQueue, NSString;
@protocol NSURLSessionTaskDelegate;

#import <Foundation/Foundation.h>


@interface WebCoreNSURLSession : NSObject {
    RefPtr<WebCore::PlatformMediaResourceLoader, WTF::RawPtrTraits<WebCore::PlatformMediaResourceLoader>, WTF::DefaultRefDerefTraits<WebCore::PlatformMediaResourceLoader>> _loader;
    WeakObjCPtr<id<NSURLSessionDelegate>> _delegate;
    RetainPtr<NSOperationQueue> _queue;
    RetainPtr<NSString> _sessionDescription;
    HashSet<WTF::RetainPtr<WebCoreNSURLSessionDataTask>, WTF::DefaultHash<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>, WTF::HashTraits<WTF::RetainPtr<WebCoreNSURLSessionDataTask>>, WTF::HashTableTraits> _dataTasks;
    HashSet<WTF::RefPtr<WebCore::SecurityOrigin>, WTF::DefaultHash<WTF::RefPtr<WebCore::SecurityOrigin>>, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin>>, WTF::HashTableTraits> _origins;
    Lock _dataTasksLock;
    BOOL _invalidated;
    NSUInteger _nextTaskIdentifier;
    OSObjectPtr<NSObject<OS_dispatch_queue> *> _internalQueue;
    unsigned char _corsResults;
    RefPtr<WebCore::RangeResponseGenerator, WTF::RawPtrTraits<WebCore::RangeResponseGenerator>, WTF::DefaultRefDerefTraits<WebCore::RangeResponseGenerator>> _rangeResponseGenerator;
}


@property (readonly, copy) NSURLSessionConfiguration *configuration;
@property (retain) NSObject<NSURLSessionTaskDelegate> *delegate;
@property (readonly, retain) NSOperationQueue *delegateQueue;
@property (readonly) BOOL didPassCORSAccessChecks;
@property (readonly) *void loader;
@property (copy) NSString *sessionDescription;


-(*void)rangeResponseGenerator;
-(BOOL)isKindOfClass:(Class)arg0 ;
-(BOOL)wouldTaintOrigin:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataTaskWithRequest:(id)arg0 ;
-(id)dataTaskWithURL:(id)arg0 ;
-(id)downloadTaskWithRequest:(id)arg0 ;
-(id)downloadTaskWithResumeData:(id)arg0 ;
-(id)downloadTaskWithURL:(id)arg0 ;
-(id)initWithResourceLoader:(*void)arg0 delegate:(id)arg1 delegateQueue:(id)arg2 ;
-(id)streamTaskWithHostName:(id)arg0 port:(NSInteger)arg1 ;
-(id)streamTaskWithNetService:(id)arg0 ;
-(id)uploadTaskWithRequest:(id)arg0 fromData:(id)arg1 ;
-(id)uploadTaskWithRequest:(id)arg0 fromFile:(id)arg1 ;
-(id)uploadTaskWithStreamedRequest:(id)arg0 ;
-(void)addDelegateOperation:(*void)arg0 ;
-(void)dealloc;
-(void)finishTasksAndInvalidate;
-(void)flushWithCompletionHandler:(id)arg0 ;
-(void)getAllTasksWithCompletionHandler:(id)arg0 ;
-(void)getTasksWithCompletionHandler:(id)arg0 ;
-(void)invalidateAndCancel;
-(void)resetWithCompletionHandler:(id)arg0 ;
-(void)sendH2Ping:(id)arg0 pongHandler:(id)arg1 ;
-(void)task:(id)arg0 didReceiveCORSAccessCheckResult:(BOOL)arg1 ;
-(void)task:(id)arg0 didReceiveResponseFromOrigin:(*void)arg1 ;
-(void)taskCompleted:(id)arg0 ;


@end


#endif