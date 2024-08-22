// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _OSHIGHBATTERYDRAINPREDICTOR_H
#define _OSHIGHBATTERYDRAINPREDICTOR_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface _OSHighBatteryDrainPredictor : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log


-(BOOL)predictLowBatteryEventWithStore:(id)arg0 ;
-(CGFloat)getActivity:(id)arg0 ;
-(CGFloat)getBattWeekdayPercentilePrior:(id)arg0 forValue:(CGFloat)arg1 ;
-(CGFloat)getDistFromTotalMean:(id)arg0 forValue:(CGFloat)arg1 ;
-(CGFloat)getDrainSinceLastPlugin:(id)arg0 forValue:(CGFloat)arg1 ;
-(CGFloat)getMaxBatt12:(id)arg0 ;
-(CGFloat)getMeanActivity:(id)arg0 ;
-(CGFloat)getMeanChargeDuration:(id)arg0 ;
-(CGFloat)getMeanDailyPlugins:(id)arg0 ;
-(CGFloat)getNEventsPrior:(int)arg0 ;
-(CGFloat)getNetDrainSinceMax:(id)arg0 forValue:(CGFloat)arg1 ;
-(CGFloat)getRecentDrain15Min:(id)arg0 forValue:(CGFloat)arg1 ;
-(CGFloat)getRecentDrain1:(id)arg0 forValue:(CGFloat)arg1 ;
-(CGFloat)getRecentDrain3:(id)arg0 forValue:(CGFloat)arg1 ;
-(CGFloat)getStartTimeSeconds:(id)arg0 ;
-(CGFloat)getUserMeanDrain:(id)arg0 ;
-(CGFloat)getValue:(CGFloat)arg0 ;
-(id)getDataWithStore:(id)arg0 ;
-(id)getFeatures:(id)arg0 ;
-(id)init;
-(int)batteryDrainPrediction:(id)arg0 withChargeDuration:(CGFloat)arg1 ;


@end


#endif