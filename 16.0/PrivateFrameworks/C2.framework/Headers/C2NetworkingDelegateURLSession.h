// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef C2NETWORKINGDELEGATEURLSESSION_H
#define C2NETWORKINGDELEGATEURLSESSION_H

@class NSURLSessionConfiguration, NSOperationQueue, NSString;
@protocol C2NetworkingDelegate, NSURLSessionDelegate><C2RequestDelegate;

#import <Foundation/Foundation.h>


@interface C2NetworkingDelegateURLSession : NSObject

@property (copy) NSURLSessionConfiguration *configuration; // ivar: _configuration
@property (retain) NSOperationQueue *delegateQueue; // ivar: _delegateQueue
@property (weak, nonatomic) NSObject<C2NetworkingDelegate> *networkingDelegate; // ivar: _networkingDelegate
@property (weak, nonatomic) NSObject<NSURLSessionDelegate><C2RequestDelegate> *sessionDelegate; // ivar: _sessionDelegate
@property (copy) NSString *sessionDescription; // ivar: _sessionDescription


+(id)sessionWithConfiguration:(id)arg0 delegate:(id)arg1 delegateQueue:(id)arg2 ;
-(id)dataTaskWithRequest:(id)arg0 ;
-(void)_useTLSSessionCacheFromSession:(id)arg0 ;
-(void)invalidateAndCancel;


@end


#endif