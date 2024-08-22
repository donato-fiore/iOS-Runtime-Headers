// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APPCLIFECYCLEMETRICSHELPER_H
#define APPCLIFECYCLEMETRICSHELPER_H

@protocol APPCLifecycleMetricsHelping;

#import <Foundation/Foundation.h>


@interface APPCLifecycleMetricsHelper : NSObject <APPCLifecycleMetricsHelping>

 {
    ? metricsHelper;
    ? placeholder;
    ? wasOnScreen;
}




-(id)init;
-(void)contentLoadFailure;
-(void)discarded;
-(void)manuallyDiscardWithReason:(NSInteger)arg0 ;
-(void)missedOpportunity;
-(void)trackImpressionWithStartDate:(id)arg0 endDate:(id)arg1 ;


@end


#endif