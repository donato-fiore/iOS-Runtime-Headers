// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBATTERYUIRESPONSETYPECHARGINGSTATEINTERVALS_H
#define PLBATTERYUIRESPONSETYPECHARGINGSTATEINTERVALS_H

@class NSMutableDictionary, NSString, NSDate, PLEntry, NSDictionary;
@protocol PLBatteryUIResponseProtocol;

#import <Foundation/Foundation.h>

#import "PLBatteryUIResponderService.h"

@interface PLBatteryUIResponseTypeChargingStateIntervals : NSObject <PLBatteryUIResponseProtocol>



@property (retain) NSMutableDictionary *chargingStateIntervalsDict; // ivar: _chargingStateIntervalsDict
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSDate *end; // ivar: _end
@property (readonly) NSUInteger hash;
@property (retain) PLEntry *lastBattEntry; // ivar: _lastBattEntry
@property _PLTimeIntervalRange range; // ivar: _range
@property (retain) PLBatteryUIResponderService *responderService; // ivar: _responderService
@property (retain) NSDictionary *resultDict; // ivar: _resultDict
@property (retain) NSDate *start; // ivar: _start
@property (readonly) Class superclass;
@property BOOL useBattUIforEC; // ivar: _useBattUIforEC


-(BOOL)isPausedChargingIntervalType:(short)arg0 ;
-(id)constructIntervalTuplesFromBattEntries:(id)arg0 lastBattEntry:(id)arg1 startOfRange:(id)arg2 endOfRange:(id)arg3 ;
-(id)constructIntervalTuplesFromEntries:(id)arg0 startOfRange:(id)arg1 endOfRange:(id)arg2 ;
-(id)differenceBetweenSetAndIntersectingSet:(id)arg0 intervalSetB:(id)arg1 ;
-(id)filterIntervals:(id)arg0 withThreshold:(CGFloat)arg1 ;
-(id)getChargingStateIntervals:(id)arg0 forGraphIntervalType:(short)arg1 ;
-(id)intersectionOfTwoSets:(id)arg0 intervalSetB:(id)arg1 ;
-(id)mapChargingStateIntervalsToGraphIntervals:(id)arg0 ;
-(id)mergeIntervals:(id)arg0 withTolerance:(CGFloat)arg1 ;
-(id)result;
-(void)coalesce;
-(void)configure:(id)arg0 ;
-(void)run;


@end


#endif