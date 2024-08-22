// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPPOWERPROFILECLUSTERGETPOWERPROFILEPRICERESPONSEPARAMS_H
#define CHIPPOWERPROFILECLUSTERGETPOWERPROFILEPRICERESPONSEPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPPowerProfileClusterGetPowerProfilePriceResponseParams : NSObject

@property (retain, nonatomic) NSNumber *currency; // ivar: _currency
@property (retain, nonatomic) NSNumber *powerProfileId; // ivar: _powerProfileId
@property (retain, nonatomic) NSNumber *price; // ivar: _price
@property (retain, nonatomic) NSNumber *priceTrailingDigit; // ivar: _priceTrailingDigit


-(id)init;


@end


#endif