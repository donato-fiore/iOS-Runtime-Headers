// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLDUETSERVICESIMPLE_H
#define PLDUETSERVICESIMPLE_H

@class NSMutableDictionary, PLEntryNotificationOperatorComposition, PLXPCListenerOperatorComposition;


#import "PLDuetServiceImpl.h"

@interface PLDuetServiceSimple : PLDuetServiceImpl

@property (retain) NSMutableDictionary *bundleIDToState; // ivar: _bundleIDToState
@property (retain) PLEntryNotificationOperatorComposition *chargingListener; // ivar: _chargingListener
@property BOOL isCharging; // ivar: _isCharging
@property (retain) PLXPCListenerOperatorComposition *resetListener; // ivar: _resetListener


-(CGFloat)capUtilizationInSeconds:(CGFloat)arg0 withUpperBoundInError:(CGFloat)arg1 withCapInError:(CGFloat)arg2 withCappedUpperBound:(CGFloat)arg3 ;
-(CGFloat)numCPUSecondsForBundleID:(id)arg0 ;
-(CGFloat)numCPUSecondsForPid:(int)arg0 ;
-(id)didReceiveStopEventWithPayload:(id)arg0 ;
-(id)init;
-(void)didReceiveReset;
-(void)didReceiveStartEventWithPayload:(id)arg0 ;
-(void)initOperatorDependancies:(id)arg0 ;


@end


#endif