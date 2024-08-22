// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISAUTHENTICATIONCHALLENGEOPERATION_H
#define ISAUTHENTICATIONCHALLENGEOPERATION_H

@class NSURLCredential;


#import "ISDialogOperation.h"
#import "ISAuthenticationChallenge.h"

@interface ISAuthenticationChallengeOperation : ISDialogOperation

@property (retain) ISAuthenticationChallenge *challenge; // ivar: _challenge
@property (retain) NSURLCredential *credential; // ivar: _credential


+(id)operationWithChallenge:(id)arg0 ;
-(id)_copyCredentialForSignInResponseDictionary:(id)arg0 ;
-(void)dealloc;
-(void)handleButtonSelected:(NSInteger)arg0 withResponseDictionary:(id)arg1 ;
-(void)run;


@end


#endif