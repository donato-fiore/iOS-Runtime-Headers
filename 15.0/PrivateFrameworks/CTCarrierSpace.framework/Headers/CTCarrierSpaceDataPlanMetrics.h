// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTCARRIERSPACEDATAPLANMETRICS_H
#define CTCARRIERSPACEDATAPLANMETRICS_H

@class NSDate, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CTCarrierSpaceDataPlanMetricsItem.h"

@interface CTCarrierSpaceDataPlanMetrics : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDate *billingCycleEndDate; // ivar: _billingCycleEndDate
@property (retain, nonatomic) CTCarrierSpaceDataPlanMetricsItem *domestic; // ivar: _domestic
@property (retain, nonatomic) NSNumber *domesticCapacity; // ivar: _domesticCapacity
@property (nonatomic) NSInteger regStatus; // ivar: _regStatus


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif