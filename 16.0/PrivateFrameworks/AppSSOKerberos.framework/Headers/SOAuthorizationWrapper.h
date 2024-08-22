// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SOAUTHORIZATIONWRAPPER_H
#define SOAUTHORIZATIONWRAPPER_H

@class SOAuthorizationCore, NSString;
@protocol SOAuthorizationCoreDelegate;

#import <Foundation/Foundation.h>


@interface SOAuthorizationWrapper : NSObject <SOAuthorizationCoreDelegate>

 {
    SOAuthorizationCore *_authorization;
}


@property (copy) id *authorizationCompletion; // ivar: _authorizationCompletion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canPerformAuthorizationWithURL:(id)arg0 responseCode:(NSInteger)arg1 ;
-(id)init;
-(void)authorization:(id)arg0 didCompleteWithError:(id)arg1 ;
-(void)authorization:(id)arg0 didCompleteWithHTTPAuthorizationHeaders:(id)arg1 ;
-(void)authorization:(id)arg0 didCompleteWithHTTPResponse:(id)arg1 httpBody:(id)arg2 ;
-(void)authorizationDidCancel:(id)arg0 ;
-(void)authorizationDidComplete:(id)arg0 ;
-(void)authorizationDidNotHandle:(id)arg0 ;
-(void)beginAuthorizationWithOperation:(id)arg0 url:(id)arg1 httpHeaders:(id)arg2 httpBody:(id)arg3 andCompletion:(id)arg4 ;


@end


#endif