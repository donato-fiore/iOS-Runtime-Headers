// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WRMBASEBANDMETRICSINTERFACE_H
#define WRMBASEBANDMETRICSINTERFACE_H

@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WRMBasebandMetricsInterface : NSObject {
    id *metricsHandler;
    id *dataMetricsHandler;
    id *wifiMetricsHandler;
    id *mNotificationBlock;
    NSObject<OS_xpc_object> *mConnection;
    int mProcessId;
    NSObject<OS_dispatch_queue> *mQueue;
}




-(id)init;
-(void)getCellularDataMetrics:(id)arg0 ;
-(void)getNRPhyMetrics:(id)arg0 ;
-(void)getQSHMetrics:(id)arg0 ;
-(void)getWiFiBWEstimationMetrics:(id)arg0 ;
-(void)handleNotification:(id)arg0 wasInterupted:(BOOL)arg1 ;
-(void)processWRMCellDataMetrics:(id)arg0 ;
-(void)processWRMNrPhyMetrics:(id)arg0 ;
-(void)processWRMWiFiBWEstMetrics:(id)arg0 ;
-(void)reConnect;
-(void)registerClient:(int)arg0 queue:(id)arg1 ;
-(void)unregisterClient;


@end


#endif