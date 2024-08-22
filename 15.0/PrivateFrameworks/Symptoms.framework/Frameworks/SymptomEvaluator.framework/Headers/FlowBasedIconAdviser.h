// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FLOWBASEDICONADVISER_H
#define FLOWBASEDICONADVISER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TrafficMonitor.h"

@interface FlowBasedIconAdviser : NSObject {
    CGFloat _flowBasedIconAdvicePeriodStart;
    int _nePolicyCount;
    BOOL _active;
    BOOL _flowBasedIconRecommendationValid;
    BOOL _flowBasedIconRecommendation;
    TrafficMonitor *_outrankFlowMonitor;
    unsigned int _internalState;
    CGFloat _idleStartTime;
    CGFloat _noPoliciesStartTime;
    NSObject<OS_dispatch_queue> *_queue;
    int _numPollsThisAdvicePeriod;
    unsigned int _numInterstitialIdlesThisAdvicePeriod;
    unsigned int _maxInterstitialIdles;
    CGFloat _minNoForegroundAppDelay;
    CGFloat _minIdleObservationTime;
    CGFloat _maxInitialIdleDuration;
    CGFloat _maxNoPolicyIconOnDuration;
    CGFloat _outrankFlowMontiorMinSamplePeriod;
    CGFloat _outrankFlowMontiorSamplePeriodThroughputThreshold;
}


@property (nonatomic) BOOL active;
@property (readonly, nonatomic) BOOL flowBasedIconRecommendation;
@property (readonly, nonatomic) BOOL flowBasedIconRecommendationValid;
@property (nonatomic) unsigned int internalState;
@property (nonatomic) int nePolicyCount;


-(id)getState:(BOOL)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(void)_initializeOutrankFlowMonitor;
-(void)didSampleFlows;
-(void)restoreDefaults;
-(void)setConfiguration:(id)arg0 ;


@end


#endif