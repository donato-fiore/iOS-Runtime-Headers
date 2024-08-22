// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAMPRICINGMODEL_H
#define EDAMPRICINGMODEL_H

@class NSNumber;


#import "FATObject.h"

@interface EDAMPricingModel : FATObject

@property (retain, nonatomic) NSNumber *gnomeActive; // ivar: _gnomeActive
@property (retain, nonatomic) NSNumber *gnomeWarmingPeriod; // ivar: _gnomeWarmingPeriod
@property (retain, nonatomic) NSNumber *pricingModelStart; // ivar: _pricingModelStart


+(id)structFields;
+(id)structName;


@end


#endif