// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAURLSESSION_H
#define AAURLSESSION_H

@class NSURLSession, NSMutableDictionary, NSString;
@protocol NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AAURLSession : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate>

 {
    BOOL _requiresSigning;
    NSURLSession *_session;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSMutableDictionary *_pendingSessionOperations;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedSession;
+(id)sharedSigningSession;
-(id)_enqueueRequest:(id)arg0 completion:(id)arg1 ;
-(id)_initRequiringSigning:(BOOL)arg0 ;
-(id)bodyTaskWithRequest:(id)arg0 completion:(id)arg1 ;
-(id)bodyTaskWithURL:(id)arg0 completion:(id)arg1 ;
-(id)dataTaskWithRequest:(id)arg0 completion:(id)arg1 ;
-(id)dataTaskWithURL:(id)arg0 completion:(id)arg1 ;
-(id)init;
-(id)initForProxiedDevice:(id)arg0 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)_sessionQueue_dequeueTask:(id)arg0 withResponse:(id)arg1 error:(id)arg2 ;
-(void)_sessionQueue_enqueueTask:(id)arg0 completion:(id)arg1 ;
-(void)_sessionQueue_updateTask:(id)arg0 withData:(id)arg1 ;
-(void)resetSessionCache;


@end


#endif