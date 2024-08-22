// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGHARVESTQUEUEMETRICS_H
#define SGHARVESTQUEUEMETRICS_H

@class _PASLock;

#import <Foundation/Foundation.h>

#import "SGM2HarvestCost.h"

@interface SGHarvestQueueMetrics : NSObject {
    _PASLock *_guardedData;
    SGM2HarvestCost *_harvestCostMetrics;
}




+(id)overridePET2InstanceForTesting:(id)arg0 ;
-(id)harvestTimerForName:(id)arg0 ;
-(id)harvestTimes;
-(id)initRealtime:(id)arg0 wasNoBudgetItem:(BOOL)arg1 ;
-(id)initWithBundleIdentifier:(id)arg0 highPriority:(BOOL)arg1 harvestedOnBattery:(BOOL)arg2 receivedOnBattery:(BOOL)arg3 harvestSource:(int)arg4 ;
-(int)_documentSourceForBundleId:(id)arg0 ;
-(void)endHarvest;
-(void)endTimer:(id)arg0 significantWork:(BOOL)arg1 ;
-(void)startHarvest;
-(void)startTimer:(id)arg0 ;


@end


#endif