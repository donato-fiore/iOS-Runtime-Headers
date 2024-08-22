// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPANALYTICSTRIALLOGGINGDESTINATION_H
#define CPANALYTICSTRIALLOGGINGDESTINATION_H

@class NSString, NSSet, TRIClient;
@protocol CPAnalyticsDestination;

#import <Foundation/Foundation.h>


@interface CPAnalyticsTrialLoggingDestination : NSObject <CPAnalyticsDestination>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disabled;
@property (readonly, nonatomic) BOOL forceEnabledForTesting; // ivar: _forceEnabledForTesting
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *metricEvents; // ivar: _metricEvents
@property (readonly) Class superclass;
@property (readonly, nonatomic) TRIClient *trialClient; // ivar: _trialClient
@property (readonly, nonatomic) NSString *trialExperimentId; // ivar: _trialExperimentId
@property (readonly, nonatomic) NSString *trialNamespace; // ivar: _trialNamespace
@property (readonly, nonatomic) int trialProjectId; // ivar: _trialProjectId
@property (readonly, nonatomic) NSString *trialTreatmentId; // ivar: _trialTreatmentId


-(id)initWithConfig:(id)arg0 cpAnalyticsInstance:(id)arg1 ;
-(void)_logTrialCounterMetricWithCPAnalyticsEvent:(id)arg0 ;
-(void)processEvent:(id)arg0 ;
-(void)updateWithConfig:(id)arg0 ;


@end


#endif