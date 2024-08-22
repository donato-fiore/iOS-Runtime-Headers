// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSDOWNLOADAUTHENTICATIONCHALLENGESENDER_H
#define SSDOWNLOADAUTHENTICATIONCHALLENGESENDER_H

@class NSString;
@protocol NSURLAuthenticationChallengeSender, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSDownloadAuthenticationSession.h"

@interface SSDownloadAuthenticationChallengeSender : NSObject <NSURLAuthenticationChallengeSender>

 {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSDownloadAuthenticationSession *_session;
}


@property (readonly) SSDownloadAuthenticationSession *authenticationSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAuthenticationSession:(id)arg0 ;
-(void)cancelAuthenticationChallenge:(id)arg0 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg0 ;
-(void)dealloc;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg0 ;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg0 ;
-(void)useCredential:(id)arg0 forAuthenticationChallenge:(id)arg1 ;


@end


#endif