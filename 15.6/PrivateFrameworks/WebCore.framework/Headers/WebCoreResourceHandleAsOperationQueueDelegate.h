// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBCORERESOURCEHANDLEASOPERATIONQUEUEDELEGATE_H
#define WEBCORERESOURCEHANDLEASOPERATIONQUEUEDELEGATE_H

@class NSString;
@protocol NSURLConnectionDelegate;

#import <Foundation/Foundation.h>


@interface WebCoreResourceHandleAsOperationQueueDelegate : NSObject <NSURLConnectionDelegate>

 {
    Lock m_lock;
    *void m_handle;
    BinarySemaphore m_semaphore;
    RefPtr<WebCore::SynchronousLoaderMessageQueue, WTF::RawPtrTraits<WebCore::SynchronousLoaderMessageQueue>, WTF::DefaultRefDerefTraits<WebCore::SynchronousLoaderMessageQueue>> m_messageQueue;
    RetainPtr<NSURLRequest> m_requestResult;
    RetainPtr<NSCachedURLResponse> m_cachedResponseResult;
    optional<WTF::HashSet<WTF::RefPtr<WTF::SchedulePair>, WTF::SchedulePairHash>> m_scheduledPairs;
    BOOL m_boolResult;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)connection:(id)arg0 canAuthenticateAgainstProtectionSpace:(id)arg1 ;
-(id)connection:(id)arg0 willCacheResponse:(id)arg1 ;
-(id)connection:(id)arg0 willSendRequest:(id)arg1 redirectResponse:(id)arg2 ;
-(id)initWithHandle:(*void)arg0 messageQueue:(*void)arg1 ;
-(void)callFunctionOnMainThread:(*void)arg0 ;
-(void)connection:(id)arg0 didFailWithError:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveAuthenticationChallenge:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveData:(id)arg1 lengthReceived:(NSInteger)arg2 ;
-(void)connection:(id)arg0 didReceiveResponse:(id)arg1 ;
-(void)connection:(id)arg0 didSendBodyData:(NSInteger)arg1 totalBytesWritten:(NSInteger)arg2 totalBytesExpectedToWrite:(NSInteger)arg3 ;
-(void)connectionDidFinishLoading:(id)arg0 ;
-(void)dealloc;
-(void)detachHandle;


@end


#endif