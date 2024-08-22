// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLAWDAUXMETRICS_H
#define PLAWDAUXMETRICS_H

@class PLOperator, NSMutableSet;

#import <Foundation/Foundation.h>


@interface PLAWDAuxMetrics : NSObject

@property (weak) PLOperator *operator; // ivar: _operator
@property (retain, nonatomic) NSMutableSet *runningMetrics; // ivar: _runningMetrics


+(id)entryAggregateDefinitions;
+(id)entryEventPointDefinitions;
+(id)getSharedObjWithOperator:(id)arg0 ;
-(BOOL)doesInterfereWithChargerWithStartDate:(id)arg0 withEndDate:(id)arg1 ;
-(BOOL)dropFirstEntryReceived:(id)arg0 usingFilter:(id)arg1 andStartTime:(id)arg2 ;
-(BOOL)submitDataToAWDServer:(id)arg0 withAwdConn:(id)arg1 ;
-(CGFloat)getRailEnergyWithEntry:(id)arg0 withFilter:(id)arg1 isRailForward:(BOOL)arg2 ;
-(id)initWithOperator:(id)arg0 ;
-(void)handleChargerChangeWithState:(BOOL)arg0 withDate:(id)arg1 ;
-(void)resetTableWithEntryKey:(id)arg0 ;
-(void)startMetricCollection:(id)arg0 ;
-(void)stopMetricCollection:(id)arg0 ;


@end


#endif