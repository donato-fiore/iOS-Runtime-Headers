// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBCOREAUTHENTICATIONCLIENTASCHALLENGESENDER_H
#define WEBCOREAUTHENTICATIONCLIENTASCHALLENGESENDER_H

@class NSString;
@protocol NSURLAuthenticationChallengeSender;

#import <Foundation/Foundation.h>


@interface WebCoreAuthenticationClientAsChallengeSender : NSObject <NSURLAuthenticationChallengeSender>

 {
    *AuthenticationClient m_client;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAuthenticationClient:(struct AuthenticationClient *)arg0 ;
-(struct AuthenticationClient *)client;
-(void)cancelAuthenticationChallenge:(id)arg0 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg0 ;
-(void)detachClient;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg0 ;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg0 ;
-(void)useCredential:(id)arg0 forAuthenticationChallenge:(id)arg1 ;


@end


#endif