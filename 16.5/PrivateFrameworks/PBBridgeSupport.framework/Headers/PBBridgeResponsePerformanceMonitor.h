// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBBRIDGERESPONSEPERFORMANCEMONITOR_H
#define PBBRIDGERESPONSEPERFORMANCEMONITOR_H

@class NSMutableString, NSMutableDictionary, NSMutableArray, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface PBBridgeResponsePerformanceMonitor : NSObject

@property (retain, nonatomic) NSMutableString *logBuffer; // ivar: _logBuffer
@property (readonly, nonatomic) NSMutableDictionary *macroActivities; // ivar: _macroActivities
@property (readonly, nonatomic) NSMutableArray *measurements; // ivar: _measurements
@property (readonly, nonatomic) NSMutableDictionary *milestones; // ivar: _milestones
@property (retain, nonatomic) NSDictionary *remoteMacroActivities; // ivar: _remoteMacroActivities
@property (retain, nonatomic) NSArray *remoteMeasurements; // ivar: _remoteMeasurements
@property (retain, nonatomic) NSDictionary *remoteMilestones; // ivar: _remoteMilestones


+(id)shareMonitor;
-(CGFloat)endMacroActivity:(id)arg0 beginTime:(CGFloat)arg1 ;
-(void)_logLocalMeasurements:(BOOL)arg0 ;
-(void)_logMacroActivitiesLocal:(BOOL)arg0 ;
-(void)_logMeasurements;
-(void)_logMilestones;
-(void)addMeasurement:(CGFloat)arg0 timeSent:(CGFloat)arg1 activityType:(id)arg2 activityIdentifier:(id)arg3 ;
-(void)addMilestone:(CGFloat)arg0 activityType:(id)arg1 activityIdentifier:(id)arg2 ;
-(void)beginMacroActivity:(id)arg0 beginTime:(CGFloat)arg1 ;
-(void)beginMonitorTransaction;
-(void)endMonitorTransaction;


@end


#endif