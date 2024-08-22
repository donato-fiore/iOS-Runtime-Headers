// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPTCLIENTDONATION_H
#define PPTCLIENTDONATION_H


#import <Foundation/Foundation.h>


@interface PPTClientDonation : NSObject



+(BOOL)isNestedPayload:(struct __CFDictionary *)arg0 ;
+(BOOL)isRegisteredSubsystem:(char *)arg0 category:(char *)arg1 ;
+(struct PerfPowerTelemetryIdentifier *)createIdentifierForSubsystem:(char *)arg0 category:(char *)arg1 ;
+(void)sendEventWithIdentifier:(struct PerfPowerTelemetryIdentifier *)arg0 payload:(struct __CFDictionary *)arg1 ;


@end


#endif