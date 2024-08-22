// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
-(id)init;
-(void)reportCoreAnalyticsDaemonEventWithServiceName:(id)arg0 clientBundleIdentifier:(id)arg1 isServiceRemoved:(BOOL)arg2 isDisconnectingClient:(BOOL)arg3 ;
-(void)reportMemoryFootprintInBytes:(NSUInteger)arg0 ;
-(void)reportServiceAddedWithName:(id)arg0 clientBundleIdentifier:(id)arg1 ;
-(void)reportServiceRemovedWithName:(id)arg0 clientBundleIdentifier:(id)arg1 ;
-(void)setCurrentMemoryFootprintAsPeak;


@end


#endif