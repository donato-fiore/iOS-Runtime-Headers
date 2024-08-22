// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATVHIGHSECURITYACCOUNTSENDCODE_H
#define ATVHIGHSECURITYACCOUNTSENDCODE_H

@class NSDictionary;


#import "AAAppleTVRequest.h"

@interface ATVHighSecurityAccountSendCode : AAAppleTVRequest {
    NSDictionary *_device;
}




+(Class)responseClass;
-(id)initWithAccount:(id)arg0 device:(id)arg1 ;
-(id)urlRequest;
-(id)urlString;


@end


#endif