// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CWFAUTOJOINMANAGER_H
#define CWFAUTOJOINMANAGER_H

@class NSSet, CLLocation, NSMutableDictionary, NSMutableArray, NSMutableSet, NSError, NSMutableOrderedSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "CWFScanResult.h"
#import "CWFAutoJoinRequest.h"
#import "CWFAutoJoinStatistics.h"
#import "CWFAutoJoinMetric.h"

@interface CWFAutoJoinManager : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSSet *_supportedChannels;
    NSSet *_knownNetworks;
    CWFScanResult *_associatedNetwork;
    CLLocation *_location;
    BOOL _didConfigurationChangeSincePreviousAttempt;
    NSInteger _retrySchedule;
    NSUInteger _retryScheduleIndex;
    NSObject<OS_dispatch_source> *_retryTimer;
    BOOL _isRetryScheduled;
    NSMutableDictionary *_retryIntervalMap;
    NSMutableArray *_pendingRequests;
    CWFAutoJoinRequest *_activeRequest;
    CWFAutoJoinStatistics *_statistics;
    NSObject<OS_dispatch_source> *_statisticsSubmissionTimer;
    CWFAutoJoinMetric *_cachedMetric;
    CWFAutoJoinMetric *_metric;
    NSInteger _state;
    NSMutableSet *_failedToJoinKnownNetworkIDs;
    NSMutableDictionary *_followup6GHzRNRMap;
    NSMutableDictionary *_followup6GHzFILSDMap;
    NSMutableDictionary *_followup6GHzScanResultsMap;
    BOOL _invalidated;
    BOOL _cancelled;
    BOOL _requeued;
    NSError *_underlyingCancelError;
    NSMutableDictionary *_triggerTimestampMap;
    NSMutableDictionary *_throttleIntervalMap;
    NSMutableDictionary *_throttleTimestampMap;
    NSObject<OS_dispatch_source> *_nextRequestTimer;
    BOOL _isNextRequestScheduled;
    NSInteger _previousNonRetryTrigger;
    NSMutableDictionary *_deferredColocatedJoinCandidateMap;
    NSUInteger _beginTimestamp;
    BOOL _maxCompatibilityEnabled;
    NSMutableSet *_hiddenNetworkChannels;
    BOOL _didDiscoverBSS;
    BOOL _resetCachedKnownNetworksContext;
    NSMutableDictionary *_cachedKnownNetworksContexts;
    NSMutableDictionary *_knownNetworkSSIDMap;
    NSMutableSet *_passpointKnownNetworks;
    NSMutableOrderedSet *_deferredKnownNetworks;
    NSUInteger _linkChangeTimestamp;
}


@property (copy) id *allowAutoHotspotHandler; // ivar: _allowAutoHotspotHandler
@property (copy) id *allowAutoJoinHandler; // ivar: _allowAutoJoinHandler
@property (copy) id *allowHotspotHandler; // ivar: _allowHotspotHandler
@property (copy) id *allowJoinCandidateHandler; // ivar: _allowJoinCandidateHandler
@property (copy) id *allowKnownNetworkHandler; // ivar: _allowKnownNetworkHandler
@property (copy) id *associateToNetworkHandler; // ivar: _associateToNetworkHandler
@property (copy) CWFScanResult *associatedNetwork;
@property (copy) id *browseForHotspotsHandler; // ivar: _browseForHotspotsHandler
@property (copy, nonatomic) NSString *colocatedScopeID; // ivar: _colocatedScopeID
@property (copy) id *connectToHotspotHandler; // ivar: _connectToHotspotHandler
@property (copy) id *eventHandler; // ivar: _eventHandler
@property (copy) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy) id *joinCandidateComparator; // ivar: _joinCandidateComparator
@property (copy) id *knownNetworkComparator; // ivar: _knownNetworkComparator
@property (copy) NSSet *knownNetworks;
@property (copy) CLLocation *location;
@property (nonatomic) BOOL maxCompatibilityEnabled;
@property (readonly) CWFAutoJoinMetric *metric;
@property (copy) id *performGASQueryHandler; // ivar: _performGASQueryHandler
@property NSInteger retrySchedule;
@property (copy) id *scanForNetworksHandler; // ivar: _scanForNetworksHandler
@property (readonly) CWFAutoJoinStatistics *statistics;
@property (copy) NSSet *supportedChannels;
@property (retain) NSObject<OS_dispatch_queue> *targetQueue; // ivar: _targetQueue
@property (copy) id *updateKnownNetworkHandler; // ivar: _updateKnownNetworkHandler


-(BOOL)__allowAutoJoinWithTrigger:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)__allowHotspot:(id)arg0 error:(*id)arg1 ;
-(BOOL)__allowJoinCandidate:(id)arg0 trigger:(NSInteger)arg1 defer:(*BOOL)arg2 error:(*id)arg3 ;
-(BOOL)__allowKnownNetwork:(id)arg0 trigger:(NSInteger)arg1 allowForSeamlessSSIDTransition:(id)arg2 defer:(*BOOL)arg3 error:(*id)arg4 ;
-(BOOL)__allowOpportunisticNetworkTransitionWithTrigger:(NSInteger)arg0 ;
-(BOOL)__calloutToAllowAutoJoinWithTrigger:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)__calloutToAllowHotspot:(id)arg0 error:(*id)arg1 ;
-(BOOL)__calloutToAllowJoinCandidate:(id)arg0 trigger:(NSInteger)arg1 defer:(*BOOL)arg2 error:(*id)arg3 ;
-(BOOL)__calloutToAllowKnownNetwork:(id)arg0 trigger:(NSInteger)arg1 allowForSeamlessSSIDTransition:(id)arg2 defer:(*BOOL)arg3 error:(*id)arg4 ;
-(BOOL)__calloutToAssociateWithParameters:(id)arg0 error:(*id)arg1 ;
-(BOOL)__calloutToConnectToHotspot:(id)arg0 error:(*id)arg1 ;
-(BOOL)__candidateSupportsSeamlessSSIDTransition:(id)arg0 fromNetwork:(id)arg1 trigger:(NSInteger)arg2 ;
-(BOOL)__connectToHotspot:(id)arg0 error:(*id)arg1 ;
-(BOOL)__discoverKnownNetworksWithContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)__isAutoJoinCancelled:(*id)arg0 ;
-(BOOL)__isAutoJoinRequeued;
-(BOOL)__matchAndJoinScanResults:(id)arg0 allowPreAssociationScan:(BOOL)arg1 context:(id)arg2 error:(*id)arg3 ;
-(BOOL)__nextRequest;
-(BOOL)__performAutoHotspotWithBrowseTimeout:(NSUInteger)arg0 maxCacheAge:(NSUInteger)arg1 cacheOnly:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)__performJoinWithNetwork:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(BOOL)__preflightMatchKnownNetworksForScanResult:(id)arg0 ;
-(BOOL)__shouldAllowAutoHotspotForTrigger:(NSInteger)arg0 ;
-(BOOL)__shouldAllowPreAssocScan;
-(BOOL)__shouldBypassUnusedNetworkPeriodCheckForTrigger:(NSInteger)arg0 ;
-(BOOL)__shouldIgnoreRequestWithTrigger:(NSInteger)arg0 ;
-(BOOL)__shouldInvokeImmediatelyForTrigger:(NSInteger)arg0 ;
-(BOOL)__shouldPrioritizeRetryOverNewRequest:(NSInteger)arg0 ;
-(BOOL)__shouldResetRetryIntervalIndexForTrigger:(NSInteger)arg0 ;
-(BOOL)__shouldThrottleAutoJoinTrigger:(NSInteger)arg0 ;
-(NSInteger)__allowAutoHotspotWithTrigger:(NSInteger)arg0 error:(*id)arg1 ;
-(NSInteger)__calloutToAllowAutoHotspotWithTrigger:(NSInteger)arg0 error:(*id)arg1 ;
-(NSInteger)__retryTriggerForRetrySchedule:(NSInteger)arg0 ;
-(NSUInteger)__applyRetryIntervalSkew:(NSUInteger)arg0 ;
-(NSUInteger)__nextRequestInterval;
-(id)__basicChannelRepresentation:(id)arg0 ;
-(id)__browseForHotspotsWithTimeout:(NSUInteger)arg0 maxCacheAge:(NSUInteger)arg1 cacheOnly:(BOOL)arg2 error:(*id)arg3 ;
-(id)__cachedScanResultsWithChannelList:(id)arg0 maxCacheAge:(NSUInteger)arg1 ANQPElementIDList:(id)arg2 maxANQPCacheAge:(NSUInteger)arg3 ;
-(id)__calloutToBrowseForHotspotsWithTimeout:(NSUInteger)arg0 maxCacheAge:(NSUInteger)arg1 cacheOnly:(BOOL)arg2 error:(*id)arg3 ;
-(id)__calloutToPerformGASQueryWithParameters:(id)arg0 GASQueryNetworks:(*id)arg1 error:(*id)arg2 ;
-(id)__calloutToScanForNetworksWithParameters:(id)arg0 scanChannels:(*id)arg1 error:(*id)arg2 ;
-(id)__descriptionForError:(id)arg0 ;
-(id)__knownNetworksList:(id)arg0 containsMatchingKnownNetwork:(id)arg1 ;
-(id)__knownNetworksSupportingSeamlessSSIDTransition:(id)arg0 fromNetwork:(id)arg1 allowSameSSID:(BOOL)arg2 trigger:(NSInteger)arg3 ;
-(id)__morePreferredKnownNetworksWithCandidate:(id)arg0 knownNetworks:(id)arg1 trigger:(NSInteger)arg2 ;
-(id)__passpointScanResults:(id)arg0 ;
-(id)__perform6GHzFollowupDiscoveryWithScanResults:(id)arg0 SSIDList:(id)arg1 dwellTime:(NSUInteger)arg2 context:(id)arg3 error:(*id)arg4 ;
-(id)__performGASQueryWithScanResults:(id)arg0 ANQPElementIDList:(id)arg1 maxCacheAge:(NSUInteger)arg2 cacheOnly:(BOOL)arg3 error:(*id)arg4 ;
-(id)__performPreAssociationScanWithContext:(id)arg0 network:(id)arg1 ;
-(id)__performScanWithChannelList:(id)arg0 SSIDList:(id)arg1 passive:(BOOL)arg2 dwellTime:(NSUInteger)arg3 maxCacheAge:(NSUInteger)arg4 cacheOnly:(BOOL)arg5 isPreAssociationScan:(BOOL)arg6 error:(*id)arg7 ;
-(id)__retryInterval;
-(id)__retryIntervalWithScheduleIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)performAutoJoinWithParameters:(id)arg0 reply:(id)arg1 ;
-(void)__addDependentThrottleInterval:(NSUInteger)arg0 trigger:(NSInteger)arg1 dependentTrigger:(NSInteger)arg2 ;
-(void)__addMatchingThrottleInterval:(NSUInteger)arg0 triggers:(id)arg1 ;
-(void)__addRequest:(id)arg0 ;
-(void)__addWilcardThrottleInterval:(NSUInteger)arg0 triggers:(id)arg1 ;
-(void)__performAutoJoin;
-(void)__prepareKnownNetworksContext:(id)arg0 ;
-(void)__removeRedundantRequests:(id)arg0 ;
-(void)__setupRetryIntervals;
-(void)__setupThrottleIntervals;
-(void)__sortHotspotCandidates:(id)arg0 ;
-(void)__sortJoinCandidates:(id)arg0 context:(id)arg1 ;
-(void)__sortKnownNetworks:(id)arg0 ;
-(void)__sortKnownNetworksByJoinTimestamp:(id)arg0 ;
-(void)__updateAutoJoinState:(NSInteger)arg0 ;
-(void)__updateCachedMetricAndStatistics:(id)arg0 ;
-(void)__updateDiscoverTimestampForJoinCandidates:(id)arg0 ;
-(void)__updateNextRequestTimer;
-(void)__updateRNRChannel:(id)arg0 joinCandidate:(id)arg1 ;
-(void)__updateRetrySchedule;
-(void)__updateStatisticsWithPreAssocScanChannels:(id)arg0 ;
-(void)__updateStatisticsWithScanChannels:(id)arg0 ;
-(void)cancelAutoJoinWithUUID:(id)arg0 error:(id)arg1 reply:(id)arg2 ;
-(void)invalidate;


@end


#endif