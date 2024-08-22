// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATVHIGHSECURITYACCOUNTVERIFYCODE_H
#define ATVHIGHSECURITYACCOUNTVERIFYCODE_H

@class NSString;


#import "ATVHighSecurityAccountSendCode.h"

@interface ATVHighSecurityAccountVerifyCode : ATVHighSecurityAccountSendCode {
    NSString *_hsaCode;
}




+(Class)responseClass;
-(id)initWithAccount:(id)arg0 device:(id)arg1 hsaCode:(id)arg2 ;
-(id)urlRequest;
-(id)urlString;


@end


#endif