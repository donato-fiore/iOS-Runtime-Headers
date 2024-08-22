// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCAUTHENTICATIONMANAGER_H
#define BCAUTHENTICATIONMANAGER_H

@class NSString;
@protocol NSURLSessionDelegate;

#import <Foundation/Foundation.h>

#import "BCAuthenticationRequest.h"

@interface BCAuthenticationManager : NSObject <NSURLSessionDelegate>



@property (retain, nonatomic) BCAuthenticationRequest *authenticationRequest; // ivar: _authenticationRequest
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAuthenticationRequest:(id)arg0 ;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchTokenWithRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif