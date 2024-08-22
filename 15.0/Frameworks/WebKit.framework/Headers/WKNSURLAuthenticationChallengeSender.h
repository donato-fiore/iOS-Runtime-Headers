// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKNSURLAUTHENTICATIONCHALLENGESENDER_H
#define WKNSURLAUTHENTICATIONCHALLENGESENDER_H

@class NSString;
@protocol NSURLAuthenticationChallengeSender;

#import <Foundation/Foundation.h>


@interface WKNSURLAuthenticationChallengeSender : NSObject <NSURLAuthenticationChallengeSender>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)cancelAuthenticationChallenge:(id)arg0 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg0 ;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg0 ;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg0 ;
-(void)useCredential:(id)arg0 forAuthenticationChallenge:(id)arg1 ;


@end


#endif