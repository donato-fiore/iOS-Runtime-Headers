// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATVHIGHSECURITYACCOUNTDEVICELISTRESPONSE_H
#define ATVHIGHSECURITYACCOUNTDEVICELISTRESPONSE_H

@class NSArray, NSString, NSDictionary;


#import "AAResponse.h"

@interface ATVHighSecurityAccountDeviceListResponse : AAResponse

@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) NSInteger errorCode;
@property (readonly, nonatomic) NSString *errorMessage;
@property (readonly, nonatomic) NSString *errorTitle;
@property (readonly, nonatomic) NSDictionary *userDisplayStrings;




@end


#endif