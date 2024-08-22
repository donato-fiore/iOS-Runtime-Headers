// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVTHERMALMONITOR_H
#define PVTHERMALMONITOR_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PVThermalMonitor : NSObject

@property (nonatomic) int currentThermalLevel; // ivar: _currentThermalLevel
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (nonatomic) BOOL hasGoneAboveNominal; // ivar: _hasGoneAboveNominal
@property (nonatomic) int highestThermalLevel; // ivar: _highestThermalLevel
@property (readonly, nonatomic) int highestThermalLevelReached;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) int thermalLevel;
@property (readonly, nonatomic) BOOL thermalLevelExceededNominal;


+(id)sharedInstance;
-(BOOL)_disabledThermalTracking;
-(BOOL)_updateThermalLevelsWithToken:(int)arg0 ;
-(id)init;
-(void)_postNotificationPrevious:(int)arg0 new:(int)arg1 ;


@end


#endif