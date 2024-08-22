// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSAGEVERIFICATIONCORE_H
#define AMSAGEVERIFICATIONCORE_H


#import <Foundation/Foundation.h>


@interface AMSAgeVerificationCore : NSObject



+(BOOL)_isAgeVerificationNeededForExpiration:(id)arg0 at:(id)arg1 ;
+(BOOL)_isTimestamp:(id)arg0 validAsOf:(id)arg1 ;
+(id)_momentOfExpiryFrom:(id)arg0 ;
+(id)_resultForAccountVerificationExpirationTimestamp:(id)arg0 withBagControlledAgeVerificationRequired:(id)arg1 bagWarningThresholdDays:(id)arg2 at:(id)arg3 ;
+(id)_timestampForWarningThresholdDays:(id)arg0 addedTo:(id)arg1 ;


@end


#endif