// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWACTIVITYHELPER_H
#define NWACTIVITYHELPER_H

@class AnalyticsWorkspace;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NWActivityHelper : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    AnalyticsWorkspace *_workspace;
}




-(BOOL)shouldSendMetricStream;
-(id)_fetchActivitiesWithPredicate:(id)arg0 batch:(BOOL)arg1 ;
-(id)_findNWActivityMetricsForUploading;
-(id)analyticsWorkspace;
-(id)init;
-(void)_deleteAllFragmentsMatchingPredicate:(id)arg0 ;
-(void)_deleteAllMetrics;
-(void)_deleteNWActivityFragment:(id)arg0 fromContext:(id)arg1 ;
-(void)_deleteOldMetrics;
-(void)_garbageCollectNWActivityMetrics;
-(void)_uploadCompleteNWActivityMetrics;
-(void)cleanOutNWActivityMetrics;
-(void)purgeOldNWActivityMetrics;
-(void)sendReportToMetricStream:(id)arg0 ;
-(void)startNWActivitySuperMetricProcessing;


@end


#endif