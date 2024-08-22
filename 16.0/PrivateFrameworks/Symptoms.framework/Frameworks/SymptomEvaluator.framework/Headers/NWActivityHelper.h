// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
-(id)_createDictionarySupermetricForActivity:(id)arg0 withContext:(id)arg1 ;
-(id)_createSupermetricFromFragments:(id)arg0 forMetricUUID:(id)arg1 ;
-(id)_fetchActivitiesWithPredicate:(id)arg0 batch:(BOOL)arg1 ;
-(id)_fetchChildrenForUUID:(id)arg0 fromContext:(id)arg1 withError:(*id)arg2 ;
-(id)_fetchFragmentsForUUID:(id)arg0 fromContext:(id)arg1 withError:(*id)arg2 ;
-(id)_fetchMetricsForUUID:(id)arg0 ;
-(id)_findNWActivityMetricsForUploading;
-(id)analyticsWorkspace;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(void)_deleteAllFragmentsMatchingPredicate:(id)arg0 ;
-(void)_deleteAllMetrics;
-(void)_deleteNWActivityFragment:(id)arg0 fromContext:(id)arg1 ;
-(void)_deleteOldMetrics;
-(void)_fetchMetricsForActivity:(id)arg0 maxChildDepth:(unsigned char)arg1 destinationArray:(id)arg2 ;
-(void)_garbageCollectNWActivityMetrics;
-(void)_uploadCompleteNWActivityMetrics;
-(void)cleanOutNWActivityMetrics;
-(void)purgeOldNWActivityMetrics;
-(void)retrieveNWActivityMetricsForActivity:(id)arg0 completion:(id)arg1 ;
-(void)sendReportToMetricStream:(id)arg0 ;
-(void)startNWActivitySuperMetricProcessing;


@end


#endif