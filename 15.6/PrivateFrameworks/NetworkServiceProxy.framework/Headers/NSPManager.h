// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPMANAGER_H
#define NSPMANAGER_H

@class NSDictionary, NSArray, NSString, NSMutableDictionary, NSMutableArray, NWPathEvaluator;
@protocol NPTunnelDelegate, NEAppProxyProviderContainerDelegate, OS_nw_endpoint, NSPManagerDelegate;

#import <Foundation/Foundation.h>

#import "NSPConfiguration.h"
#import "NSPFlowDivert.h"
#import "NPKeyBag.h"
#import "NSPAppRule.h"

@interface NSPManager : NSObject <NPTunnelDelegate, NEAppProxyProviderContainerDelegate>

 {
    os_unfair_lock_s lock;
}


@property (retain) NSDictionary *appRules; // ivar: _appRules
@property (copy, nonatomic) id *changeHandler; // ivar: _changeHandler
@property (retain) NSPConfiguration *configuration; // ivar: _configuration
@property (copy, nonatomic) id *connectionInfoSetHandler; // ivar: _connectionInfoSetHandler
@property (retain, nonatomic) NSArray *currentAgents; // ivar: _currentAgents
@property (readonly, nonatomic) BOOL currentNetworkHasProxies;
@property (retain, nonatomic) NSObject<OS_nw_endpoint> *currentTunnelEndpoint; // ivar: _currentTunnelEndpoint
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NSPManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property BOOL disableIdleTimeout; // ivar: _disableIdleTimeout
@property (readonly, nonatomic) NSMutableDictionary *fallbackCounts; // ivar: _fallbackCounts
@property (retain) NSPFlowDivert *flowDivert; // ivar: _flowDivert
@property (retain, nonatomic) NSMutableDictionary *flowInfoMap; // ivar: _flowInfoMap
@property (readonly) NSUInteger hash;
@property (retain) NPKeyBag *inUseKeybag; // ivar: _inUseKeybag
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly) BOOL isFirstTunnel;
@property (nonatomic) BOOL isObserving; // ivar: _isObserving
@property (retain) NPKeyBag *keybag; // ivar: _keybag
@property (readonly, nonatomic) NSMutableArray *knownFlows; // ivar: _knownFlows
@property (retain) NSPAppRule *matchingAppRule; // ivar: _matchingAppRule
@property (nonatomic) unsigned int nextFlowID; // ivar: _nextFlowID
@property (readonly, nonatomic) NWPathEvaluator *pathEvaluator; // ivar: _pathEvaluator
@property (copy, nonatomic) id *pendingCancellationHandler; // ivar: _pendingCancellationHandler
@property (readonly, nonatomic) NWPathEvaluator *policyEvaluator; // ivar: _policyEvaluator
@property (readonly, nonatomic) NSString *signingIdentifier; // ivar: _signingIdentifier
@property (readonly) Class superclass;
@property BOOL testFetchDaypass; // ivar: _testFetchDaypass
@property (retain) NSArray *testLatencyMap; // ivar: _testLatencyMap
@property NSUInteger testLatencyMapIndex; // ivar: _testLatencyMapIndex
@property (readonly) CGFloat timeIntervalSinceLastUsage;
@property (copy, nonatomic) id *tunnelConnectedHandler; // ivar: _tunnelConnectedHandler
@property (nonatomic) unsigned int tunnelCount; // ivar: _tunnelCount


+(id)sharedManager;
-(?)instantiateFlowWithTunnelinputProtocol;
-(BOOL)shouldSetConfigurationToAppRule:(id)arg0 edgeSet:(id)arg1 ;
-(BOOL)useTestDaypass;
-(BOOL)useTestLatencyMap;
-(NSUInteger)getTestLatencyRTT:(id)arg0 parameters:(struct networkParameters *)arg1 ;
-(id)buildTestLatencyMap:(id)arg0 ;
-(id)createAppRuleMapWithRules:(id)arg0 ;
-(id)createReplacementEndpointForEndpoint:(id)arg0 properties:(id)arg1 ;
-(id)createTransformsForEndpoint:(id)arg0 parameters:(id)arg1 ;
-(id)getAppRuleMatchingParameters:(id)arg0 flowProperties:(id)arg1 ;
-(id)getConnectionInfoForIdentifier:(id)arg0 ;
-(id)init;
-(id)instantiateTunnelWithEndpoint:(id)arg0 parameters:(id)arg1 ;
-(void)container:(id)arg0 didFailWithError:(id)arg1 ;
-(void)container:(id)arg0 didRequestFlowDivertControlSocketWithCompletionHandler:(id)arg1 ;
-(void)container:(id)arg0 didSetTunnelConfiguration:(id)arg1 completionHandler:(id)arg2 ;
-(void)container:(id)arg0 didStartWithError:(id)arg1 ;
-(void)fetchStateForClient:(id)arg0 withPeerEndpoint:(id)arg1 completionHandler:(id)arg2 ;
-(void)handlePolicyUpdate;
-(void)ingestTestLatencyMap:(id)arg0 local:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)sendUsageReport:(id)arg0 ;
-(void)setConnectionInfo:(id)arg0 forIdentifier:(id)arg1 ;
-(void)start;
-(void)startWithConfiguration:(id)arg0 appRules:(id)arg1 delegate:(id)arg2 ;
-(void)stopWithCompletionHandler:(id)arg0 ;
-(void)tunnel:(id)arg0 flowDidFallbackWithReason:(NSInteger)arg1 ;
-(void)tunnelDidCancel:(id)arg0 ;
-(void)tunnelDidConnect:(id)arg0 ;
-(void)tunnelIsReady:(id)arg0 ;
-(void)waitForTunnelsToCancelWithCompletionHandler:(id)arg0 ;


@end


#endif