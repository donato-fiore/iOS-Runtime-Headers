// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATVHIGHSECURITYACCOUNTSENDCODERESPONSE_H
#define ATVHIGHSECURITYACCOUNTSENDCODERESPONSE_H

@class NSString, NSDictionary;


#import "AAResponse.h"

@interface ATVHighSecurityAccountSendCodeResponse : AAResponse

@property (readonly, nonatomic) NSInteger errorCode;
@property (readonly, nonatomic) NSString *errorMessage;
@property (readonly, nonatomic) NSString *errorTitle;
@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) NSDictionary *userDisplayStrings;




@end


#endif