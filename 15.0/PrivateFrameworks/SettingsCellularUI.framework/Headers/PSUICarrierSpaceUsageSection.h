// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSUICARRIERSPACEUSAGESECTION_H
#define PSUICARRIERSPACEUSAGESECTION_H

@class CTCarrierSpaceUsageAccountMetrics, NSMutableArray, CTCarrierSpaceUsagePlanMetrics, NSString;

#import <Foundation/Foundation.h>


@interface PSUICarrierSpaceUsageSection : NSObject

@property (retain) CTCarrierSpaceUsageAccountMetrics *accountMetrics; // ivar: _accountMetrics
@property (retain) NSMutableArray *barCategories; // ivar: _barCategories
@property (retain) NSMutableArray *otherMetrics; // ivar: _otherMetrics
@property (retain) CTCarrierSpaceUsagePlanMetrics *primaryMetrics; // ivar: _primaryMetrics
@property (retain) NSString *sharedPlanIdentifier; // ivar: _sharedPlanIdentifier


-(BOOL)isSharedPlan;
-(id)description;


@end


#endif