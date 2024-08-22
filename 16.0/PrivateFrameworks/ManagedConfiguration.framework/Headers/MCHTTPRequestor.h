// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCHTTPREQUESTOR_H
#define MCHTTPREQUESTOR_H

@class NSArray, NSString;
@protocol NSURLSessionDataDelegate;

#import <Foundation/Foundation.h>


@interface MCHTTPRequestor : NSObject <NSURLSessionDataDelegate>



@property (retain, nonatomic) NSArray *anchorCertificates; // ivar: _anchorCertificates
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didFailDueToMissingCredentials; // ivar: _didFailDueToMissingCredentials
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (retain, nonatomic) id *selfReference; // ivar: _selfReference
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *username; // ivar: _username


-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)startWithRequest:(id)arg0 username:(id)arg1 password:(id)arg2 anchorCertificates:(id)arg3 completionBlock:(id)arg4 ;


@end


#endif