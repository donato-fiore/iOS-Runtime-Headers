// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISURLAUTHENTICATIONCHALLENGE_H
#define ISURLAUTHENTICATIONCHALLENGE_H



#import "ISAuthenticationChallenge.h"

@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge



+(id)_messageForProtectionSpace:(id)arg0 ;
+(id)_titleForProtectionSpace:(id)arg0 ;
-(BOOL)hasPassword;
-(NSInteger)failureCount;
-(id)initWithAuthenticationChallenge:(id)arg0 ;
-(id)password;
-(id)sender;
-(id)user;
-(void)cancelAuthentication;
-(void)useCredential:(id)arg0 ;


@end


#endif