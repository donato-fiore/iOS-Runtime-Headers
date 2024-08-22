// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DATOKENREGISTRATIONREQUEST_H
#define DATOKENREGISTRATIONREQUEST_H

@class NSString, AKAppleIDSession, NSMutableURLRequest, NSURLSession, NSURLSessionDataTask, NSData;
@protocol NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, DATokenRegistrationDelegate;

#import <Foundation/Foundation.h>

#import "DARefreshWrapper.h"

@interface DATokenRegistrationRequest : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DATokenRegistrationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL finished; // ivar: _finished
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AKAppleIDSession *hsa2Session; // ivar: _hsa2Session
@property (retain, nonatomic) NSString *onBehalfOfBundleIdentifier; // ivar: _onBehalfOfBundleIdentifier
@property (weak, nonatomic) NSString *pushKey; // ivar: _pushKey
@property (retain, nonatomic) NSMutableURLRequest *request; // ivar: _request
@property (retain, nonatomic) NSURLSession *session; // ivar: _session
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURLSessionDataTask *task; // ivar: _task
@property (weak, nonatomic) NSData *token; // ivar: _token
@property (weak, nonatomic) DARefreshWrapper *wrapper; // ivar: _wrapper


+(id)requestWithToken:(id)arg0 pushKey:(id)arg1 wrapper:(id)arg2 onBehalfOf:(id)arg3 ;
-(BOOL)_canAuthenticateAgainstProtectionSpace:(id)arg0 ;
-(id)initWithToken:(id)arg0 pushKey:(id)arg1 wrapper:(id)arg2 onBehalfOf:(id)arg3 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)_handleAuthenticationChallenge:(id)arg0 completionHandler:(id)arg1 ;
-(void)_reallyHandleAuthenticationChallenge:(id)arg0 completionHandler:(id)arg1 ;
-(void)cancel;
-(void)sendRegistrationRequestForAccount:(id)arg0 ;


@end


#endif