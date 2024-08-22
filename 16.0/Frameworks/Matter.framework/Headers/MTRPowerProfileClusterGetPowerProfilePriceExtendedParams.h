// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRPOWERPROFILECLUSTERGETPOWERPROFILEPRICEEXTENDEDPARAMS_H
#define MTRPOWERPROFILECLUSTERGETPOWERPROFILEPRICEEXTENDEDPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRPowerProfileClusterGetPowerProfilePriceExtendedParams : NSObject

@property (retain, nonatomic) NSNumber *options; // ivar: _options
@property (retain, nonatomic) NSNumber *powerProfileId; // ivar: _powerProfileId
@property (retain, nonatomic) NSNumber *powerProfileStartTime; // ivar: _powerProfileStartTime
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif