// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLBATTERYUIRESPONSETYPERECENTUSAGEINSIGHT_H
#define PLBATTERYUIRESPONSETYPERECENTUSAGEINSIGHT_H

@class NSMutableArray, NSString, NSDate;
@protocol PLBatteryUIResponseProtocol;

#import <Foundation/Foundation.h>

#import "PLBatteryUIResponderService.h"

@interface PLBatteryUIResponseTypeRecentUsageInsight : NSObject <PLBatteryUIResponseProtocol>



@property (retain) NSMutableArray *batteryBreakdown_Last10Days; // ivar: _batteryBreakdown_Last10Days
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSDate *end; // ivar: _end
@property CGFloat energyThresholdForUpgradeInsight; // ivar: _energyThresholdForUpgradeInsight
@property CGFloat firstEntryTimestamp; // ivar: _firstEntryTimestamp
@property CGFloat foregroundTimeThresholdForUpgradeInsight; // ivar: _foregroundTimeThresholdForUpgradeInsight
@property (readonly) NSUInteger hash;
@property CGFloat lastUpgradeTimestamp; // ivar: _lastUpgradeTimestamp
@property CGFloat maxTimeValAfterUpgrade; // ivar: _maxTimeValAfterUpgrade
@property CGFloat maxTimeValBeforeUpgrade; // ivar: _maxTimeValBeforeUpgrade
@property CGFloat minDrainPercentBeforeUpgrade; // ivar: _minDrainPercentBeforeUpgrade
@property CGFloat minTimeValAfterUpgrade; // ivar: _minTimeValAfterUpgrade
@property CGFloat minTimeValBeforeUpgrade; // ivar: _minTimeValBeforeUpgrade
@property (retain) PLBatteryUIResponderService *responderService; // ivar: _responderService
@property BOOL suggest; // ivar: _suggest
@property (readonly) Class superclass;


-(BOOL)didUpgrade;
-(id)result;
-(void)coalesce;
-(void)configure:(id)arg0 ;
-(void)run;


@end


#endif