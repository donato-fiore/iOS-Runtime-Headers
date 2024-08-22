// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APNSURLSESSIONDEMULTIPLEXER_H
#define APNSURLSESSIONDEMULTIPLEXER_H

@class NSURLSessionConfiguration, NSString, APUnfairLock, NSURLSession, NSMutableDictionary;
@protocol NSURLSessionDataDelegate;

#import <Foundation/Foundation.h>


@interface APNSURLSessionDemultiplexer : NSObject <NSURLSessionDataDelegate>

 {
    uint8_t _requestCount;
}


@property (retain) NSURLSessionConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) APUnfairLock *lock; // ivar: _lock
@property (nonatomic) NSInteger maximumRequestCount; // ivar: _maximumRequestCount
@property (readonly, nonatomic) NSInteger requestCount;
@property (retain) NSURLSession *session; // ivar: _session
@property (copy, nonatomic) id *sessionInvalidated; // ivar: _sessionInvalidated
@property (nonatomic) BOOL sessionMarkedInvalid; // ivar: _sessionMarkedInvalid
@property (readonly) Class superclass;
@property (retain) NSMutableDictionary *taskInfoByTaskIdentifier; // ivar: _taskInfoByTaskIdentifier


-(id)dataTaskWithRequest:(id)arg0 delegate:(id)arg1 modes:(id)arg2 ;
-(id)initWithConfiguration:(id)arg0 forIdentifier:(id)arg1 withMaximumRequestCount:(NSInteger)arg2 delegateQueue:(id)arg3 ;
-(id)taskInfoForTask:(id)arg0 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)dealloc;
-(void)invalidateAndCancelSessionWithCompletionHandler:(id)arg0 ;
-(void)invalidateSession;
-(void)removeTask:(id)arg0 ;


@end


#endif