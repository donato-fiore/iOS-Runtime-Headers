// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JFXTHERMALMONITOR_H
#define JFXTHERMALMONITOR_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface JFXThermalMonitor : NSObject

@property (nonatomic) int currentThermalLevel; // ivar: _currentThermalLevel
@property (nonatomic) BOOL hasGoneAboveNominal; // ivar: _hasGoneAboveNominal
@property (nonatomic) int highestThermalLevel; // ivar: _highestThermalLevel
@property (readonly, nonatomic) int highestThermalLevelReached;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) int thermalLevel;
@property (readonly, nonatomic) BOOL thermalLevelExceededNominal;


+(id)sharedInstance;
+(id)stringFromThermalPressureLevel:(int)arg0 ;
+(void)enumerateThermalPressureLevel:(id)arg0 ;
-(BOOL)_disabledThermalTracking;
-(BOOL)_updateThermalLevelsWithToken:(int)arg0 ;
-(id)_analyticValueForThermalLevelBefore:(int)arg0 after:(int)arg1 ;
-(id)init;
-(void)_postNotification:(id)arg0 ;


@end


#endif