// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLDTCOSTELEMENT_H
#define PLDTCOSTELEMENT_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface PLDTCostElement : NSObject

@property CGFloat costAggregated; // ivar: _costAggregated
@property (retain) NSDate *costReturnedTillDate; // ivar: _costReturnedTillDate
@property (retain) NSDate *lastOverheadStart; // ivar: _lastOverheadStart
@property (retain) NSDate *startDate; // ivar: _startDate


+(id)getCostElementInstance;
-(id)getApplicationCostUptoTime:(id)arg0 withPid:(int)arg1 withLastActiveStart:(id)arg2 withLastSuspendStart:(id)arg3 withAppState:(int)arg4 ;
-(id)getCostUptoTime:(id)arg0 ;
-(id)getCpuCostUptoTime:(id)arg0 withPid:(int)arg1 withLastActiveStart:(id)arg2 withLastSuspendStart:(id)arg3 withAppState:(int)arg4 ;
-(id)getDisplayCostUptoTime:(id)arg0 withPid:(int)arg1 withLastActiveStart:(id)arg2 withLastSuspendStart:(id)arg3 withAppState:(int)arg4 ;
-(id)getGpuCostUptoTime:(id)arg0 withPid:(int)arg1 withLastActiveStart:(id)arg2 withLastSuspendStart:(id)arg3 withAppState:(int)arg4 ;
-(id)getLocationCostUptoTime:(id)arg0 withPid:(int)arg1 withLastActiveStart:(id)arg2 withLastSuspendStart:(id)arg3 withAppState:(int)arg4 ;
-(id)getNetworkingCostUptoTime:(id)arg0 withPid:(int)arg1 withLastActiveStart:(id)arg2 withLastSuspendStart:(id)arg3 withAppState:(int)arg4 withQueryCount:(int)arg5 ;
-(id)init;
-(id)initWithTime:(id)arg0 ;
-(void)addCpuEvent:(CGFloat)arg0 atTime:(id)arg1 withPid:(int)arg2 withAppState:(int)arg3 ;
-(void)addDisplayEvent:(CGFloat)arg0 atTime:(id)arg1 withPid:(int)arg2 withAppState:(int)arg3 ;
-(void)addEvent:(CGFloat)arg0 atTime:(id)arg1 ;
-(void)addGpuEvent:(CGFloat)arg0 atTime:(id)arg1 withPid:(int)arg2 withAppState:(int)arg3 ;
-(void)addLocationEvent:(CGFloat)arg0 atTime:(id)arg1 withPid:(int)arg2 withAppState:(int)arg3 ;
-(void)addNetworkingEvent:(CGFloat)arg0 atTime:(id)arg1 withPid:(int)arg2 withAppState:(int)arg3 withQueryCount:(int)arg4 ;


@end


#endif