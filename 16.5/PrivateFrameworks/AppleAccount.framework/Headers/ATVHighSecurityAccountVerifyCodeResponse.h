// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATVHIGHSECURITYACCOUNTVERIFYCODERESPONSE_H
#define ATVHIGHSECURITYACCOUNTVERIFYCODERESPONSE_H

@class NSString;


#import "AAResponse.h"

@interface ATVHighSecurityAccountVerifyCodeResponse : AAResponse

@property (readonly, nonatomic) NSInteger errorCode;
@property (readonly, nonatomic) NSString *errorMessage;
@property (readonly, nonatomic) NSString *errorTitle;
@property (readonly, nonatomic) BOOL success;




@end


#endif