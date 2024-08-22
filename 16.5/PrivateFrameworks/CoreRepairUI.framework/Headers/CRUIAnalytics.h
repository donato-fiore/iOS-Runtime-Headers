// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRUIANALYTICS_H
#define CRUIANALYTICS_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CRUIAnalytics : NSObject {
    NSObject<OS_dispatch_queue> *serialAsyncQueue;
}




-(id)init;
-(void)sendAnalyticsForRepairHistoryMismatch;
-(void)sendAsyncAnalyticsForEventIfNeeded:(id)arg0 moduleName:(id)arg1 ;


@end


#endif