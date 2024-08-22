// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFCOREANALYTICSLOGGINGSERVICE_H
#define AFCOREANALYTICSLOGGINGSERVICE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AFCoreAnalyticsLoggingService : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)sharedLoggingService;
-(id)_init;
-(id)init;
-(void)logToCoreAnalyticsCrossDeviceRequestEvent:(id)arg0 ;


@end


#endif