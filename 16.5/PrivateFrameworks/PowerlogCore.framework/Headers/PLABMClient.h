// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLABMCLIENT_H
#define PLABMCLIENT_H

@protocol PLABMClientMessageDelegate;

#import <Foundation/Foundation.h>


@interface PLABMClient : NSObject {
    *dispatch_queue_s _queue;
    shared_ptr<abm::client::Manager> abmPLClnt;
}


@property (retain) NSObject<PLABMClientMessageDelegate> *delegate; // ivar: _delegate


+(id)sharedABMClient;
-(id)getBasebandBootState;
-(id)getBasebandTimeAndLatency;
-(id)getLTESleepManagerStats;
-(id)init;
-(void)addDeviceConfigWith:(id)arg0 ;
-(void)addICEDeviceConfig;
-(void)addICEDeviceConfigDebug;
-(void)addMavDeviceConfig;
-(void)addMavDeviceConfigDebug;
-(void)regBBWakeListener;
-(void)regBootStateListener;
-(void)regMetricListener;
-(void)regTriggerListener;
-(void)removeDeviceConfig;
-(void)sendBootStateChangInfoToLoggerUsing:(id)arg0 ;
-(void)sendMetricToLoggerUsing:(id)arg0 ;
-(void)sendTriggerToLoggerUsing:(id)arg0 ;
-(void)sendWakeInfoToLoggerUsing:(id)arg0 ;
-(void)startListening;
-(void)triggerPeriodicMetrics;


@end


#endif