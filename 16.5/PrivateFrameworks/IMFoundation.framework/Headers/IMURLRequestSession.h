// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMURLREQUESTSESSION_H
#define IMURLREQUESTSESSION_H

@class NSURLSession, NSString;
@protocol NSURLSessionDataDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IMURLRequestSession : NSObject <NSURLSessionDataDelegate>

 {
    NSURLSession *_session;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    BOOL _requireIDSHost;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sessionWithConfiguration:(id)arg0 queue:(id)arg1 requiresIDSHost:(BOOL)arg2 ;
+(id)sharedSession;
+(id)sharedSessionRequiringIDSHost;
-(id)initWithConfiguration:(id)arg0 queue:(id)arg1 requiresIDSHost:(BOOL)arg2 ;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)finishTasksAndInvalidate;
-(void)performRequest:(id)arg0 completionBlock:(id)arg1 ;
-(void)performRequest:(id)arg0 completionBlockWithTimingData:(id)arg1 ;


@end


#endif