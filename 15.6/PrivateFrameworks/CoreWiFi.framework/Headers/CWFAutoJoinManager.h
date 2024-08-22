// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CWFAUTOJOINMANAGER_H
#define CWFAUTOJOINMANAGER_H

@class NSMutableDictionary, NSMutableArray, NSMutableSet, NSError, NSSet, CLLocation;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "CWFAutoJoinRequest.h"
#import "CWFAutoJoinMetric.h"
#import "CWFScanResult.h"

@interface CWFAutoJoinManager : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSInteger _retrySchedule;
    NSUInteger _retryScheduleIndex;
    NSObject<OS_dispatch_source> *_retryTimer;
    BOOL _isRetryScheduled;
    NSMutableDictionary *_retryIntervalMap;
    NSUInteger _maxRetryIntervalIndex;
    NSMutableArray *_pendingRequests;
    CWFAutoJoinRequest *_activeRequest;
    CWFAutoJoinMetric *_metric;
    NSInteger _state;
    NSMutableSet *_failedToJoinKnownNetworkIDs;
    BOOL _invalidated;
    BOOL _cancelled;
    NSError *_underlyingCancelError;
    NSMutableDictionary *_triggerTimestampMap;
    NSInteger _previousNonRetryTrigger;
}


@property (copy) id *allowAutoHotspotHandler; // ivar: _allowAutoHotspotHandler
@property (copy) id *allowAutoJoinHandler; // ivar: _allowAutoJoinHandler
@property (copy) id *allowHotspotHandler; // ivar: _allowHotspotHandler
@property (copy) id *allowJoinCandidateHandler; // ivar: _allowJoinCandidateHandler
@property (copy) id *allowKnownNetworkHandler; // ivar: _allowKnownNetworkHandler
@property (copy) id *associateToNetworkHandler; // ivar: _associateToNetworkHandler
@property (copy) CWFScanResult *associatedNetwork; // ivar: _associatedNetwork
@property (copy) id *browseForHotspotsHandler; // ivar: _browseForHotspotsHandler
@property (copy) id *connectToHotspotHandler; // ivar: _connectToHotspotHandler
@property (copy) id *eventHandler; // ivar: _eventHandler
@property (copy) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy) id *joinCandidateComparator; // ivar: _joinCandidateComparator
@property (copy) id *knownNetworkComparator; // ivar: _knownNetworkComparator
@property (copy) NSSet *knownNetworks; // ivar: _knownNetworks
@property (copy) CLLocation *location; // ivar: _location
@property (copy) id *performGASQueryHandler; // ivar: _performGASQueryHandler
@property NSInteger retrySchedule;
@property (copy) id *scanForNetworksHandler; // ivar: _scanForNetworksHandler
@property (copy) NSSet *supportedChannels; // ivar: _supportedChannels
@property (retain) NSObject<OS_dispatch_queue> *targetQueue; // ivar: _targetQueue
@property (copy) id *updateKnownNetworkHandler; // ivar: _updateKnownNetworkHandler


-(BOOL)__allowAutoJoinWithTrigger:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)__allowHotspot:(id)arg0 error:(*id)arg1 ;
-(BOOL)__allowJoinCandidate:(id)arg0 trigger:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)__allowKnownNetwork:(id)arg0 trigger:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)__calloutToAllowAutoJoinWithTrigger:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)__calloutToAllowHotspot:(id)arg0 error:(*id)arg1 ;
-(BOOL)__calloutToAllowJoinCandidate:(id)arg0 trigger:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)__calloutToAllowKnownNetwork:(id)arg0 trigger:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)__calloutToAssociateToNetwork:(id)arg0 error:(*id)arg1 ;
-(BOOL)__calloutToConnectToHotspot:(id)arg0 error:(*id)arg1 ;
-(BOOL)__connectToHotspot:(id)arg0 error:(*id)arg1 ;
-(BOOL)__discoverKnownNetworksWithContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)__isAutoJoinCancelled:(*id)arg0 ;
-(BOOL)__matchAndJoinScanResults:(id)arg0 allowPreAssociationScan:(BOOL)arg1 context:(id)arg2 error:(*id)arg3 ;
-(BOOL)__performAutoHotspotWithBrowseTimeout:(NSUInteger)arg0 maxCacheAge:(NSUInteger)arg1 cacheOnly:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)__performJoinWithNetwork:(id)arg0 error:(*id)arg1 ;
-(BOOL)__retryScheduleRepeatsLastInterval:(NSInteger)arg0 ;
-(BOOL)__shouldResetRetryIntervalIndexForTrigger:(NSInteger)arg0 ;
-(NSInteger)__allowAutoHotspotWithTrigger:(NSInteger)arg0 error:(*id)arg1 ;
-(NSInteger)__calloutToAllowAutoHotspotWithTrigger:(NSInteger)arg0 error:(*id)arg1 ;
-(id)__basicChannelRepresentation:(id)arg0 ;
-(id)__browseForHotspotsWithTimeout:(NSUInteger)arg0 maxCacheAge:(NSUInteger)arg1 cacheOnly:(BOOL)arg2 error:(*id)arg3 ;
-(id)__cachedScanResultsWithChannelList:(id)arg0 maxCacheAge:(NSUInteger)arg1 minimumRSSI:(NSInteger)arg2 ANQPElementIDList:(id)arg3 maxANQPCacheAge:(NSUInteger)arg4 ;
-(id)__calloutToBrowseForHotspotsWithTimeout:(NSUInteger)arg0 maxCacheAge:(NSUInteger)arg1 cacheOnly:(BOOL)arg2 error:(*id)arg3 ;
-(id)__calloutToPerformGASQueryWithParameters:(id)arg0 GASQueryNetworks:(*id)arg1 error:(*id)arg2 ;
-(id)__calloutToScanForNetworksWithParameters:(id)arg0 scanChannels:(*id)arg1 error:(*id)arg2 ;
-(id)__descriptionForError:(id)arg0 ;
-(id)__morePreferredKnownNetworksWithCandidate:(id)arg0 knownNetworks:(id)arg1 ;
-(id)__passpointScanResults:(id)arg0 ;
-(id)__performGASQueryWithScanResults:(id)arg0 ANQPElementIDList:(id)arg1 maxCacheAge:(NSUInteger)arg2 cacheOnly:(BOOL)arg3 error:(*id)arg4 ;
-(id)__performPreAssociationScanWithContext:(id)arg0 network:(id)arg1 ;
-(id)__performScanWithChannelList:(id)arg0 SSIDList:(id)arg1 dwellTime:(NSUInteger)arg2 maxCacheAge:(NSUInteger)arg3 minimumRSSI:(NSInteger)arg4 cacheOnly:(BOOL)arg5 isPreAssociationScan:(BOOL)arg6 error:(*id)arg7 ;
-(id)__retryIntervalWithScheduleIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)performAutoJoinWithParameters:(id)arg0 reply:(id)arg1 ;
-(void)__addRequest:(id)arg0 ;
-(void)__nextRequest;
-(void)__performAutoJoin;
-(void)__prepareKnownNetworksContext:(id)arg0 ;
-(void)__sortHotspotCandidates:(id)arg0 ;
-(void)__sortJoinCandidates:(id)arg0 ;
-(void)__sortKnownNetworks:(id)arg0 ;
-(void)__updateAutoJoinState:(NSInteger)arg0 ;
-(void)__updateDiscoverTimestampForJoinCandidates:(id)arg0 ;
-(void)__updateRetrySchedule;
-(void)cancelAutoJoinWithUUID:(id)arg0 error:(id)arg1 reply:(id)arg2 ;
-(void)invalidate;


@end


#endif