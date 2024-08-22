// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef METRICSMODULECOMMON_H
#define METRICSMODULECOMMON_H


#import <Foundation/Foundation.h>


@interface MetricsModuleCommon : NSObject



+(Class)daemonDeliveryClass;
+(Class)metricClass;
+(Class)notificationRegistrarClass;
+(void)initialize;
+(void)setDaemonDeliveryClass:(Class)arg0 ;
+(void)setMetricClass:(Class)arg0 ;
+(void)setNotificationRegistrarClass:(Class)arg0 ;


@end


#endif