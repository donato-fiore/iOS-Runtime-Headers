// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKANALYTICSEVENTSUBMISSIONMANAGER_H
#define HKANALYTICSEVENTSUBMISSIONMANAGER_H

@protocol OS_dispatch_queue, OS_os_log;

#import <Foundation/Foundation.h>

#import "HKAnalyticsDataSource.h"

@interface HKAnalyticsEventSubmissionManager : NSObject {
    HKAnalyticsDataSource *_dataSource;
    id *_eventUsedProvider;
    id *_analyticsEventConsumer;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_log> *_loggingCategory;
}




-(BOOL)submitEvent:(id)arg0 error:(*id)arg1 ;
// -(id)initWithDataSource:(id)arg0 eventUsedProvider:(id)arg1 analyticsEventConsumer:(unk)arg2 loggingCategory:(id)arg3  ;
-(id)initWithLoggingCategory:(id)arg0 healthDataSource:(id)arg1 ;
-(id)queue;
-(void)submitEvent:(id)arg0 completion:(id)arg1 ;


@end


#endif