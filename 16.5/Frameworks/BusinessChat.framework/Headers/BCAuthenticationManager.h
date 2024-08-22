// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCAUTHENTICATIONMANAGER_H
#define BCAUTHENTICATIONMANAGER_H

@class NSString;
@protocol NSURLSessionDelegate, BCOAuth2RequestProtocol;

#import <Foundation/Foundation.h>


@interface BCAuthenticationManager : NSObject <NSURLSessionDelegate>



@property (retain, nonatomic) NSObject<BCOAuth2RequestProtocol> *authenticationRequest; // ivar: _authenticationRequest
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAuthenticationRequest:(id)arg0 ;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchTokenWithRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif