// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AIASSESSION_H
#define AIASSESSION_H

@class NSURLSession, NSString, NSMutableDictionary;
@protocol NSURLSessionDelegate;

#import <Foundation/Foundation.h>


@interface AIASSession : NSObject <NSURLSessionDelegate>



@property (retain) NSURLSession *URLSession; // ivar: _URLSession
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL invalidated; // ivar: _invalidated
@property (readonly) Class superclass;
@property (retain) NSMutableDictionary *taskMap; // ivar: _taskMap


-(id)getRequest:(id)arg0 ;
-(id)init;
-(id)requestWithURL:(id)arg0 data:(struct __CFDictionary *)arg1 clientInfo:(id)arg2 proxiedClientInfo:(id)arg3 companionClientInfo:(id)arg4 appleITeamId:(id)arg5 appleIClientId:(id)arg6 additionalHeaders:(id)arg7 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)invalidateAndCancel;


@end


#endif