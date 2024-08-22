// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SOAUTHORIZATIONRESULTCLIENTIMPL_H
#define SOAUTHORIZATIONRESULTCLIENTIMPL_H

@class NSString;
@protocol SOAuthorizationCoreDelegate;

#import <Foundation/Foundation.h>


@interface SOAuthorizationResultClientImpl : NSObject <SOAuthorizationCoreDelegate>



@property (copy) id *authorizationHandleCredentialCompletion; // ivar: _authorizationHandleCredentialCompletion
@property (copy) id *authorizationHandleResponseCompletion; // ivar: _authorizationHandleResponseCompletion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)authorization:(id)arg0 didCompleteWithError:(id)arg1 ;
-(void)authorization:(id)arg0 didCompleteWithHTTPAuthorizationHeaders:(id)arg1 ;
-(void)authorization:(id)arg0 didCompleteWithHTTPResponse:(id)arg1 httpBody:(id)arg2 ;
-(void)authorizationDidCancel:(id)arg0 ;
-(void)authorizationDidComplete:(id)arg0 ;
-(void)authorizationDidNotHandle:(id)arg0 ;


@end


#endif