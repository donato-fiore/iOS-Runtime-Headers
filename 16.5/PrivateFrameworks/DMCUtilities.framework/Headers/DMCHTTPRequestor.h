// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCHTTPREQUESTOR_H
#define DMCHTTPREQUESTOR_H

@class NSArray, NSString;
@protocol NSURLSessionDataDelegate, DMCHTTPAuthenticator;

#import <Foundation/Foundation.h>


@interface DMCHTTPRequestor : NSObject <NSURLSessionDataDelegate>



@property (retain, nonatomic) NSArray *anchorCertificateRefs; // ivar: _anchorCertificateRefs
@property (retain, nonatomic) NSObject<DMCHTTPAuthenticator> *authenticator; // ivar: _authenticator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didFailDueToCertNotTrusted; // ivar: _didFailDueToCertNotTrusted
@property (nonatomic) BOOL didFailDueToMissingCredentials; // ivar: _didFailDueToMissingCredentials
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (retain, nonatomic) id *selfReference; // ivar: _selfReference
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *username; // ivar: _username


-(id)getServerErrorCodeForResponse:(id)arg0 ;
-(id)getServerErrorMessageForResponse:(id)arg0 ;
-(id)jsonDictFromResponse:(id)arg0 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)startWithRequest:(id)arg0 username:(id)arg1 password:(id)arg2 anchorCertificateRefs:(id)arg3 completionBlock:(id)arg4 ;


@end


#endif