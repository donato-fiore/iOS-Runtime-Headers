// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EMREMOTECONTENTURLSESSION_H
#define EMREMOTECONTENTURLSESSION_H

@class NSURLSession, EFLocked, NSString, NSOperationQueue;
@protocol NSURLSessionDelegate, NSURLSessionDataDelegate;

#import <Foundation/Foundation.h>

#import "EMRemoteContentURLCache.h"

@interface EMRemoteContentURLSession : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate>

 {
    NSURLSession *_session;
    EFLocked *_activeTasks;
    EFLocked *_observers;
    os_unfair_lock_s _sessionLock;
}


@property (readonly, nonatomic) EMRemoteContentURLCache *cache; // ivar: _cache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSOperationQueue *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *sourceBundleIdentifier; // ivar: _sourceBundleIdentifier
@property (readonly) Class superclass;


+(id)genericHTTPHeaderFields;
-(id)dataTaskWithRequest:(id)arg0 isSynthetic:(BOOL)arg1 allowProxying:(BOOL)arg2 completionHandler:(id)arg3 ;
-(id)dataTaskWithRequest:(id)arg0 isSynthetic:(BOOL)arg1 completionHandler:(id)arg2 ;
-(id)initWithCache:(id)arg0 ;
-(id)initWithCache:(id)arg0 sourceBundleIdentifier:(id)arg1 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2 ;
-(void)_createURLSession;
-(void)abortTask:(id)arg0 ;
-(void)invalidateAndCancel:(BOOL)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif