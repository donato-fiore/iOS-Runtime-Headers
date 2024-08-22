// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPNETWORKMONITOR_H
#define SPNETWORKMONITOR_H

@class NWPathEvaluator;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SPNetworkMonitor : NSObject

@property (copy, nonatomic) id *block; // ivar: _block
@property (nonatomic) BOOL cachedIsNetworkUp; // ivar: _cachedIsNetworkUp
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (retain, nonatomic) NWPathEvaluator *evaluator; // ivar: _evaluator


-(BOOL)isMonitoring;
-(BOOL)isNetworkUp;
-(void)notifyNetworkStateChange;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)startMonitoringWithCallback:(id)arg0 ;
-(void)stopMonitoring;


@end


#endif