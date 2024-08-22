// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLBATTERYUIRESPONSETYPEUSAGETIMES_IOS_H
#define PLBATTERYUIRESPONSETYPEUSAGETIMES_IOS_H

@class NSArray, NSMutableArray, NSString, NSDate, NSDictionary;
@protocol PLBatteryUIResponseProtocol;

#import <Foundation/Foundation.h>

#import "PLBatteryUIResponderService.h"

@interface PLBatteryUIResponseTypeUsageTimes_iOS : NSObject <PLBatteryUIResponseProtocol>



@property (retain) NSArray *aggregateEntries; // ivar: _aggregateEntries
@property (retain) NSMutableArray *batteryBreakdown_buckets; // ivar: _batteryBreakdown_buckets
@property (retain) NSMutableArray *batteryBreakdown_lastDay; // ivar: _batteryBreakdown_lastDay
@property CGFloat bucketSize; // ivar: _bucketSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSDate *end; // ivar: _end
@property (readonly) NSUInteger hash;
@property CGFloat range; // ivar: _range
@property (retain) PLBatteryUIResponderService *responderService; // ivar: _responderService
@property (retain) NSDictionary *resultDictionary; // ivar: _resultDictionary
@property (retain) NSDate *start; // ivar: _start
@property (readonly) Class superclass;


-(BOOL)energyEntryValidForAdjustment:(id)arg0 ;
-(id)entriesInRange:(struct _PLTimeIntervalRange )arg0 fromEntries:(id)arg1 ;
-(id)result;
-(int)adjustScreenOffTimeWithGraphValue:(CGFloat)arg0 screenOnTime:(CGFloat)arg1 andEnergyEntries:(id)arg2 ;
-(int)adjustScreenOnTimeWithGraphValue:(CGFloat)arg0 andEnergyEntries:(id)arg1 ;
-(struct _PLTimeIntervalRange )getDataRange:(id)arg0 ;
-(void)coalesce;
-(void)configure:(id)arg0 ;
-(void)run;


@end


#endif