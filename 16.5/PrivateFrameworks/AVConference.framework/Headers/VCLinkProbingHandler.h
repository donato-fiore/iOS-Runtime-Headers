// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCLINKPROBINGHANDLER_H
#define VCLINKPROBINGHANDLER_H

@class NSMutableDictionary, NSArray, NSSet;
@protocol VCLinkProbingHandlerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VCDispatchTimer.h"

@interface VCLinkProbingHandler : NSObject {
    id<VCLinkProbingHandlerDelegate> *_linkProbingHandlerDelegate;
    VCDispatchTimer *_queryProbingResultsTimer;
    VCDispatchTimer *_probingLockdownTimer;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableDictionary *_aggregatedProbingResults;
    NSArray *_linkPreferenceOrder;
    unsigned int _linkProbingInterval;
    unsigned int _linkProbingTimeout;
    unsigned int _linkProbingQueryResultsInterval;
    unsigned int _minSentRequestCountThreshold;
    unsigned char _linkProbingState;
    CGFloat _lastLinkPreferenceUpdateNotificationTime;
    CGFloat _linkProbingConnectionLockdownPeriod;
    CGFloat _expMovMeanFactor;
    CGFloat _plrEnvelopeAttackFactor;
    CGFloat _plrEnvelopeDecayFactor;
    NSArray *_plrBuckets;
    ? _linkProbingResultConfig;
    BOOL _isProbingLockedOut;
    CGFloat _probingStartTime;
    CGFloat _probingLockoutStartTime;
    CGFloat _linkProbingLockdownPeriod;
    unsigned int _linkProbingDuplicationWaitTimeout;
    unsigned int _consecutiveIdenticalQueryResultMax;
    unsigned int _consecutiveIdenticalQueryResultCount;
}


@property (readonly) NSSet *activelyProbingLinkIDs; // ivar: _activelyProbingLinkIDs
@property BOOL isDuplicationEnabled; // ivar: _isDuplicationEnabled
@property (readonly) BOOL isLinkProbingActive;
@property unsigned char linkProbingCapabilityVersion; // ivar: _linkProbingCapabilityVersion
@property NSObject<VCLinkProbingHandlerDelegate> *linkProbingHandlerDelegate;


-(BOOL)isValidProbingResult:(id)arg0 ;
-(id)getProbingResultsForLinkID:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)dealloc;
-(void)dispatchedUpdateProbingResults:(id)arg0 ;
-(void)flushProbingResults:(id)arg0 ;
-(void)loadStorebagValues;
-(void)probingLockdownEnded;
-(void)queryProbingResults;
-(void)removeProbingResultsForLinks:(id)arg0 ;
-(void)resetAggregatedProbingResults;
-(void)setLinkProbingResultConfig;
-(void)startActiveProbingOnLinks:(id)arg0 ;
-(void)stopActiveProbingOnLinks:(id)arg0 resetStats:(BOOL)arg1 ;
-(void)updateLinkPreferenceOrder;
-(void)updateProbingResults:(id)arg0 ;


@end


#endif