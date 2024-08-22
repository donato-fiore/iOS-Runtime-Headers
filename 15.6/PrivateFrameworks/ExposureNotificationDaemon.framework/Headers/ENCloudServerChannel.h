// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENCLOUDSERVERCHANNEL_H
#define ENCLOUDSERVERCHANNEL_H

@class NSHTTPCookieStorage, NSString, NSOperationQueue, NSMutableDictionary, NSURLSession, NSURLSessionConfiguration;
@protocol NSURLSessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ENCloudServerChannel : NSObject <NSURLSessionDelegate>



@property (retain, nonatomic) NSHTTPCookieStorage *cookieStorage; // ivar: _cookieStorage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSOperationQueue *queue; // ivar: _queue
@property (retain, nonatomic) NSMutableDictionary *requests; // ivar: _requests
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (retain, nonatomic) NSURLSession *session; // ivar: _session
@property (retain, nonatomic) NSURLSessionConfiguration *sessionConfig; // ivar: _sessionConfig
@property (retain, nonatomic) NSURLSession *sourceApplicationSession; // ivar: _sourceApplicationSession
@property (retain, nonatomic) NSURLSessionConfiguration *sourceApplicationSessionConfig; // ivar: _sourceApplicationSessionConfig
@property (readonly) Class superclass;


-(id)init;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)enqueueRequest:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif