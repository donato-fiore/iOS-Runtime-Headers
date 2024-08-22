// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRAVRECONNAISSANCESESSION_H
#define MRAVRECONNAISSANCESESSION_H

@class NSMutableDictionary, NSMutableSet, NSSet, NSString, NSMutableArray, NSArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "MRAVRoutingDiscoverySession.h"
#import "MRAVEndpoint.h"

@interface MRAVReconnaissanceSession : NSObject {
    CGFloat _timeoutTimerTimeout;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_localMatchingDevicesFound;
    NSMutableSet *_knownIncompleteClusterMembers;
    BOOL _searchInProgress;
    BOOL _shouldWaitForUnanimousEndpoints;
    MRAVRoutingDiscoverySession *_discoverySession;
    NSSet *_matchingOutputDeviceUIDsSet;
    NSString *_matchingOutputDeviceGroupID;
    id *_discoverySessionCallbackToken;
    id *_callback;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSObject<OS_dispatch_queue> *_callbackSyncQueue;
    NSMutableDictionary *_matchingDevicesFound;
    NSMutableArray *_matchingEndpointsFound;
    MRAVEndpoint *_unanimousEndpoint;
    NSArray *_availableOutputDevices;
    NSArray *_availableEndpoints;
    NSUInteger _updatesReceived;
    NSArray *_lastProcessedOutputDevices;
    NSArray *_lastProcessedEndpoints;
    NSUInteger _expectedLogicalDevices;
}


@property (readonly, nonatomic) MRAVRoutingDiscoverySession *discoverySession;
@property (readonly, nonatomic) unsigned int endpointFeatures;
@property (copy, nonatomic) NSArray *matchingLogicalDeviceIDs; // ivar: _matchingLogicalDeviceIDs
@property (readonly, nonatomic) NSString *matchingOutputDeviceGroupID;
@property (readonly, nonatomic) NSArray *matchingOutputDeviceUIDs;
@property (nonatomic) BOOL returnPartialResults; // ivar: _returnPartialResults
@property (nonatomic) BOOL useWeakMatching; // ivar: _useWeakMatching
@property (nonatomic) BOOL waitForCompleteClusters; // ivar: _waitForCompleteClusters


-(id)initWithOutputDeviceUIDs:(id)arg0 outputDeviceGroupID:(id)arg1 features:(unsigned int)arg2 ;
-(void)beginSearchWithTimeout:(CGFloat)arg0 completion:(id)arg1 ;
-(void)beginSearchWithTimeout:(CGFloat)arg0 endpointsCompletion:(id)arg1 ;
-(void)beginSearchWithTimeout:(CGFloat)arg0 mapCompletion:(id)arg1 ;
-(void)cancelSearch;
-(void)dealloc;


@end


#endif