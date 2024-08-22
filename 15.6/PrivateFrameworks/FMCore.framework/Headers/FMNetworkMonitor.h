// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMNETWORKMONITOR_H
#define FMNETWORKMONITOR_H

@class NWPathEvaluator;

#import <Foundation/Foundation.h>


@interface FMNetworkMonitor : NSObject

@property (retain, nonatomic) NWPathEvaluator *evaluator; // ivar: _evaluator


+(id)sharedInstance;
-(BOOL)isMonitoring;
-(BOOL)isNetworkUp;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)registerNetworkMonitorLaunchEvent:(BOOL)arg0 ;
-(void)startMonitoring;
-(void)stopMonitoring;


@end


#endif