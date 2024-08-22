// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTCARRIERSPACEUSAGEACCOUNTMETRICS_H
#define CTCARRIERSPACEUSAGEACCOUNTMETRICS_H

@class NSArray, NSDate, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTCarrierSpaceUsageAccountMetrics : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *applicablePlans; // ivar: _applicablePlans
@property (retain, nonatomic) NSDate *billingCycleEndDate; // ivar: _billingCycleEndDate
@property (nonatomic) NSInteger deviceType; // ivar: _deviceType
@property (nonatomic) BOOL localDevice; // ivar: _localDevice
@property (retain, nonatomic) NSString *networkUsageLabel; // ivar: _networkUsageLabel
@property (retain, nonatomic) NSString *planType; // ivar: _planType
@property (retain, nonatomic) NSString *subscriptionStatus; // ivar: _subscriptionStatus


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif