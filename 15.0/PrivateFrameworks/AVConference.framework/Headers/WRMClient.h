// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WRMCLIENT_H
#define WRMCLIENT_H

@protocol OS_xpc_object, OS_dispatch_queue, WRMClientDelegate;

#import <Foundation/Foundation.h>


@interface WRMClient : NSObject {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    id *_wrmClientDelegate;
    int _mode;
    ? _metricsConfig;
    int _rssiThreshold;
}


@property NSObject<WRMClientDelegate> *delegate;
@property int mediaControlInfoVersion; // ivar: _mediaControlInfoVersion


-(BOOL)setupServiceConnection;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(int)getWRMSubscribeVersion;
-(void)dealloc;
-(void)dumpReport:(id)arg0 ;
-(void)processNotificationList:(id)arg0 ;
-(void)processWRMCoexMetrics:(id)arg0 isAlertedMode:(BOOL)arg1 ;
-(void)releaseServiceConnection;
-(void)reportImmediateMetric:(int)arg0 value:(NSUInteger)arg1 ;
-(void)reportMetricsFaceTimeCalling:(struct ? *)arg0 ;
-(void)reportMetricsWifiCalling:(struct ? *)arg0 ;
-(void)requestNotificationFaceTimeCalling;
-(void)sendProcessInfoWithProcessID:(NSUInteger)arg0 ;
-(void)sendReport:(id)arg0 ;
-(void)sendStatusUpdateFaceTimeCalling:(struct ? *)arg0 ;
-(void)sendStatusUpdateInfoFaceTimeCalling:(id)arg0 ;
-(void)sendSubscriptionInfoFaceTimeCalling;
-(void)sendUnsubscriptionInfoFaceTimeCalling;
-(void)setConfiguration:(struct ? *)arg0 ;
-(void)setPreWarmState:(BOOL)arg0 ;
-(void)setRSSIThresholdEnabled:(BOOL)arg0 ;
-(void)startWRMClientWithMode:(int)arg0 metricsConfig:(struct ? )arg1 ;
-(void)stopWRMClient;
-(void)updateMetricsConfig:(struct ? )arg0 ;


@end


#endif