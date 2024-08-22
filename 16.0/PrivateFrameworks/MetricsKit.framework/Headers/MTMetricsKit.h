// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTMETRICSKIT_H
#define MTMETRICSKIT_H



#import "MTMetricsKitTemplate.h"

@interface MTMetricsKit : MTMetricsKitTemplate



-(id)initWithTopic:(id)arg0 ;
-(id)metricsDataWithFlexibleEventType:(id)arg0 eventData:(id)arg1 ;
-(id)metricsDataWithFlexibleEventType:(id)arg0 fields:(id)arg1 ;
-(void)performMaintenanceForUserId:(id)arg0 ;


@end


#endif