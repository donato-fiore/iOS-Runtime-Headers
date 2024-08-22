// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DBANALYTICSCHARGEINFO_H
#define _DBANALYTICSCHARGEINFO_H

@class DBAnalyticsTimeAccumulator, NSString;



@interface _DBAnalyticsChargeInfo : DBAnalyticsTimeAccumulator

@property (copy, nonatomic) NSString *PMUConfiguration; // ivar: _PMUConfiguration
@property (copy, nonatomic) NSString *adapterDescription; // ivar: _adapterDescription
@property (copy, nonatomic) NSString *current; // ivar: _current
@property (nonatomic) BOOL didChargeDuringSession; // ivar: _didChargeDuringSession
@property (copy, nonatomic) NSString *voltage; // ivar: _voltage
@property (copy, nonatomic) NSString *wattage; // ivar: _wattage
@property (nonatomic, getter=isWireless) BOOL wireless; // ivar: _wireless




@end


#endif