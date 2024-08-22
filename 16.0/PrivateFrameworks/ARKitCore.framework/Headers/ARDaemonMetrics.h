// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARDAEMONMETRICS_H
#define ARDAEMONMETRICS_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ARDaemonMetrics : NSObject {
    NSUInteger _peakMemoryUsageInMegabytes;
    NSObject<OS_dispatch_queue> *_reportingQueue;
    NSMutableDictionary *_activeServiceCountPerClient;
    NSMutableDictionary *_allServicesUsedPerClient;
}




+(id)sharedDaemonMetrics;
-(BOOL)_removeServiceForClient:(id)arg0 serviceName:(id)arg1 ;
-(NSUInteger)_getPeakMemoryUsageInMegabytes;
-(id)_getActiveServiceCountPerClient;
-(id)_getAllServicesUsedPerClient;
-(id)_reportCoreAnalyticsDaemonEventWithServiceName:(id)arg0 clientBundleIdentifier:(id)arg1 isServiceRemoved:(BOOL)arg2 isDisconnectingClient:(BOOL)arg3 ;
-(id)_reportDaemonHeartbeatForSessionUUID:(id)arg0 daemonUpTimeExcludingSleep:(id)arg1 daemonUpTimeIncludingSleep:(id)arg2 systemUpTime:(id)arg3 memoryFootprintInBytes:(NSUInteger)arg4 ;
-(id)init;
-(void)_addServiceForClient:(id)arg0 serviceName:(id)arg1 ;
-(void)reportCoreAnalyticsDaemonEventWithServiceName:(id)arg0 clientBundleIdentifier:(id)arg1 isServiceRemoved:(BOOL)arg2 isDisconnectingClient:(BOOL)arg3 ;
-(void)reportDaemonHeartbeatForSessionUUID:(id)arg0 daemonUpTimeExcludingSleep:(id)arg1 daemonUpTimeIncludingSleep:(id)arg2 systemUpTime:(id)arg3 memoryFootprintInBytes:(NSUInteger)arg4 ;
-(void)reportMemoryFootprintInBytes:(NSUInteger)arg0 ;
-(void)reportServiceAddedWithName:(id)arg0 clientBundleIdentifier:(id)arg1 ;
-(void)reportServiceRemovedWithName:(id)arg0 clientBundleIdentifier:(id)arg1 ;
-(void)setCurrentMemoryFootprintAsPeak;


@end


#endif