// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPMONITORSWRAPPER_H
#define SPMONITORSWRAPPER_H

@class NSString, NSDate;
@protocol SPPowerMonitorDelegate, SPMonitorsWrapperDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SPNetworkMonitor.h"

@interface SPMonitorsWrapper : NSObject <SPPowerMonitorDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SPMonitorsWrapperDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isRunning; // ivar: _isRunning
@property (retain, nonatomic) NSDate *lastStateChangeDate; // ivar: _lastStateChangeDate
@property (retain, nonatomic) SPNetworkMonitor *networkMonitor; // ivar: _networkMonitor
@property (retain, nonatomic) NSDate *nextStateChangeDate; // ivar: _nextStateChangeDate
@property (readonly) Class superclass;


-(BOOL)isNetworkUp;
-(NSUInteger)powerState;
-(id)initWithBeaconManager:(id)arg0 delegateQueue:(id)arg1 ;
-(void)pause;
-(void)resume;
-(void)start;
-(void)stop;


@end


#endif