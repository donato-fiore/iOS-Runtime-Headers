// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRPOWERPROFILECLUSTERGETPOWERPROFILEPRICEEXTENDEDRESPONSEPARAMS_H
#define MTRPOWERPROFILECLUSTERGETPOWERPROFILEPRICEEXTENDEDRESPONSEPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRPowerProfileClusterGetPowerProfilePriceExtendedResponseParams : NSObject

@property (retain, nonatomic) NSNumber *currency; // ivar: _currency
@property (retain, nonatomic) NSNumber *powerProfileId; // ivar: _powerProfileId
@property (retain, nonatomic) NSNumber *price; // ivar: _price
@property (retain, nonatomic) NSNumber *priceTrailingDigit; // ivar: _priceTrailingDigit
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif