// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPWALDO_H
#define NPWALDO_H

@class NSDictionary, NSArray, NSNumber, NWNetworkAgentRegistration, NSUUID, NSDate, NSString, NPWaldoLocationManager, NSMutableDictionary, NSURL, NSData;
@protocol NSSecureCoding, NSCopying, NPWaldoDelegate, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "NSPNetworkAgent.h"
#import "NPLocation.h"
#import "NPTuscanyEdge.h"
#import "NPWaldo.h"
#import "NPKeyBag.h"

@interface NPWaldo : NSObject <NSSecureCoding, NSCopying>

 {
    NSDictionary *_currentNetworkCharacteristics;
    NSArray *_edges;
    NSArray *_allOnRamps;
}


@property (copy) NSNumber *TFOLeeway; // ivar: _TFOLeeway
@property (retain, nonatomic) NSPNetworkAgent *agent; // ivar: _agent
@property (retain) NWNetworkAgentRegistration *agentRegistration; // ivar: _agentRegistration
@property (retain) NSArray *allOnRamps;
@property (retain, nonatomic) NPLocation *cachedLocation; // ivar: _cachedLocation
@property (retain) NSUUID *configurationIdentifier; // ivar: _configurationIdentifier
@property (copy) NSNumber *connectionIdleTimeoutMaximum; // ivar: _connectionIdleTimeoutMaximum
@property (readonly) NPTuscanyEdge *currentEdge;
@property NSInteger currentEdgeIndex; // ivar: _currentEdgeIndex
@property (readonly) NSArray *currentEdgeList;
@property (readonly) NSArray *currentEdges; // ivar: _currentEdges
@property (readonly) NSDate *currentNetworkLastUsed;
@property (copy) NSNumber *dayPassEnableSessionTicket; // ivar: _dayPassEnableSessionTicket
@property (copy) NSNumber *dayPassExtendedValidation; // ivar: _dayPassExtendedValidation
@property (readonly) NSInteger dayPassFetchCount;
@property (copy) NSString *dayPassHostname; // ivar: _dayPassHostname
@property (copy) NSNumber *dayPassHostnamePrependLabel; // ivar: _dayPassHostnamePrependLabel
@property (copy) NSString *dayPassLeafOID; // ivar: _dayPassLeafOID
@property (copy) NSNumber *dayPassPort; // ivar: _dayPassPort
@property (copy) NSNumber *dayPassRequestTimeout; // ivar: _dayPassRequestTimeout
@property (copy) NSNumber *dayPassRevocationFailClosed; // ivar: _dayPassRevocationFailClosed
@property (copy) NSArray *dayPassSoftExpiry; // ivar: _dayPassSoftExpiry
@property BOOL daypassRefreshInProgress; // ivar: _daypassRefreshInProgress
@property (retain, nonatomic) NPWaldo *defaults; // ivar: _defaults
@property (weak) NSObject<NPWaldoDelegate> *delegate; // ivar: _delegate
@property (readonly) NSUInteger edgeCount;
@property (copy) NSNumber *edgeFairnessFactor; // ivar: _edgeFairnessFactor
@property (copy) NSNumber *edgeSelectionAlpha; // ivar: _edgeSelectionAlpha
@property (copy) NSNumber *edgeSelectionEnabled; // ivar: _edgeSelectionEnabled
@property (copy) NSNumber *edgeSelectionWindowSize; // ivar: _edgeSelectionWindowSize
@property (copy) NSArray *edges;
@property (copy) NSNumber *edgesGeneration; // ivar: _edgesGeneration
@property (copy) NSNumber *enableIPv6; // ivar: _enableIPv6
@property (copy) NSNumber *enableLatencyDerivation; // ivar: _enableLatencyDerivation
@property (readonly) NSDate *expirationDate;
@property unsigned int generation; // ivar: _generation
@property (readonly) BOOL hasEdges;
@property (retain, nonatomic) NSString *hostname; // ivar: _hostname
@property (readonly) NSString *identifier; // ivar: _identifier
@property (readonly) BOOL isIPv6Enabled;
@property (retain, nonatomic) NPKeyBag *keybag; // ivar: _keybag
@property (readonly) id *latencyComparator;
@property (copy) NSNumber *latencyFactorA; // ivar: _latencyFactorA
@property (copy) NSNumber *latencyFactorB; // ivar: _latencyFactorB
@property (copy) NSNumber *latencyFactorX; // ivar: _latencyFactorX
@property (copy) NSNumber *locationCheckInterval; // ivar: _locationCheckInterval
@property (retain, nonatomic) NSDate *locationCheckTimestamp; // ivar: _locationCheckTimestamp
@property (retain, nonatomic) NSDate *locationExpiration; // ivar: _locationExpiration
@property (retain, nonatomic) NPWaldoLocationManager *locationManager; // ivar: _locationManager
@property (copy) NSNumber *locationTTL; // ivar: _locationTTL
@property (copy) NSNumber *locationToleranceDistance; // ivar: _locationToleranceDistance
@property (retain) NSMutableDictionary *networkInformation; // ivar: _networkInformation
@property (readonly) NPTuscanyEdge *nextEdge; // ivar: _nextEdge
@property (copy) NSNumber *observedRTTSampleSize; // ivar: _observedRTTSampleSize
@property (copy) NSNumber *probeNoTFOCookie; // ivar: _probeNoTFOCookie
@property (copy) NSNumber *probePause; // ivar: _probePause
@property (readonly) NSUInteger probeSize;
@property (copy) NSNumber *probeTFO; // ivar: _probeTFO
@property (copy) NSNumber *probeTimeout; // ivar: _probeTimeout
@property BOOL reResolve;
@property BOOL reprocessCancelled; // ivar: _reprocessCancelled
@property BOOL reprocessPending; // ivar: _reprocessPending
@property (readonly) NSObject<OS_dispatch_queue> *reprocessQueue; // ivar: _reprocessQueue
@property (copy) NSNumber *reprocessSampleSize; // ivar: _reprocessSampleSize
@property (copy) NSNumber *reprocessSamplingInterval; // ivar: _reprocessSamplingInterval
@property (retain) NSObject<OS_dispatch_source> *reprocessSamplingTimer; // ivar: _reprocessSamplingTimer
@property (copy) NSNumber *requireTFO; // ivar: _requireTFO
@property (copy) NSNumber *retryPause; // ivar: _retryPause
@property BOOL shouldSave; // ivar: _shouldSave
@property (copy) NSNumber *signatureLimit; // ivar: _signatureLimit
@property (readonly) NSInteger source; // ivar: _source
@property (copy) NSString *tag; // ivar: _tag
@property (copy) NSString *telemetryService; // ivar: _telemetryService
@property (copy) NSURL *telemetryURL; // ivar: _telemetryURL
@property (copy) NSNumber *timestamp; // ivar: _timestamp
@property (retain) NSData *updateHash; // ivar: _updateHash
@property (copy) NSNumber *useGeohashFromServer; // ivar: _useGeohashFromServer
@property (copy) NSNumber *usedEdgesGeneration; // ivar: _usedEdgesGeneration
@property (copy) NSNumber *version; // ivar: _version
@property (copy) NSNumber *viewSize; // ivar: _viewSize


+(BOOL)supportsSecureCoding;
+(id)createEndpointFromHostList:(id)arg0 defaultPortString:(id)arg1 allowIPv6:(BOOL)arg2 ;
-(BOOL)isEndpointProbed:(id)arg0 parameters:(struct networkParameters *)arg1 latencies:(id)arg2 checkSampleSize:(BOOL)arg3 incompleteLatency:(*id)arg4 ;
-(BOOL)isLatenciesCompleteForNetwork:(id)arg0 ;
-(BOOL)reprocessWithNewRTT:(NSUInteger)arg0 reProbe:(*BOOL)arg1 ;
-(BOOL)shouldFetchWaldo;
-(BOOL)shouldPerformDayPassRefresh;
-(BOOL)validateEdgeList:(id)arg0 ;
-(NSInteger)getCurrentNetworkInterfaceType;
-(NSInteger)getFallbackReasonForLatencies:(id)arg0 ;
-(NSInteger)indexOfBestEdge;
-(id)copyEdgeList:(id)arg0 ;
-(id)copyEdgeListRTTAverage:(id)arg0 observed:(BOOL)arg1 shortDescription:(BOOL)arg2 ;
-(id)copyEdgeSelectionTelemetry;
-(id)copyLatencyInfoDictionary:(BOOL)arg0 copyAll:(BOOL)arg1 ;
-(id)copyStateIncludeDistance:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createEdgeLatenciesToProbeWithEdgeIndex:(NSUInteger)arg0 startSampleCount:(*NSUInteger)arg1 ;
-(id)currentNetworkInfo;
-(id)description;
-(id)edgeAtIndex:(NSInteger)arg0 ;
-(id)edgeContainingOnRamp:(id)arg0 ;
-(id)init;
-(id)initFromKeychainWithIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 timestamp:(id)arg1 fromDictionary:(id)arg2 source:(NSInteger)arg3 ;
-(id)onRampForIndex:(id)arg0 ;
-(void)ageOutLatencyMap;
-(void)cancelProbes;
-(void)cleanupStaleKeys;
-(void)encodeWithCoder:(id)arg0 ;
-(void)establishTrustWithCompletionHandler:(id)arg0 ;
-(void)getDayPassRTT;
-(void)handleUsageReport:(id)arg0 ;
-(void)incrementSessionCounters;
-(void)initializeEdgeSelection;
-(void)link;
-(void)linkAllSignatures:(BOOL)arg0 ;
-(void)linkLatenciesAllSignatures:(BOOL)arg0 ;
-(void)loadObservedRTTSamples:(id)arg0 ;
-(void)logEdgeList:(id)arg0 debug:(BOOL)arg1 toStdout:(BOOL)arg2 ;
-(void)logLatencyInfoToStdout:(BOOL)arg0 logAll:(BOOL)arg1 logEdgeSelection:(BOOL)arg2 ;
-(void)merge:(id)arg0 missingSettingsOnly:(BOOL)arg1 ;
-(void)mergeEdgeList:(id)arg0 forNetworkSignature:(id)arg1 ;
-(void)pushKeybagToKernel;
-(void)pushKeybagToKernelCanReuse:(BOOL)arg0 ;
-(void)pushKeybagToKernelUpdateGeneration:(BOOL)arg0 ;
-(void)rebuildLatencyMapAllSignatures:(BOOL)arg0 ;
-(void)refreshDayPassesWithCompletionHandler:(id)arg0 ;
-(void)removeDayPassesFromKernel;
-(void)removeFromKeychain;
-(void)reprocessAdHocWithEdgeIndex:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)reprocessEdgeAtIndex:(NSUInteger)arg0 networkSignature:(id)arg1 completionHandler:(id)arg2 ;
-(void)reprocessLatencies:(id)arg0 sampleCount:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)reprocessWithCompletionHandler:(id)arg0 ;
-(void)resolveWithCompletionHandler:(id)arg0 ;
-(void)resortEdgeListForCurrentNetworkSignature;
-(void)saveToKeychain;
-(void)setCurrentNetworkCharacteristics:(id)arg0 ;
-(void)startProbingEdges:(id)arg0 atIndex:(NSUInteger)arg1 doneCount:(NSUInteger)arg2 sampleCount:(NSUInteger)arg3 completionHandler:(id)arg4 ;
-(void)teardownNetworkAgent;
-(void)timestampNetworkSignature:(id)arg0 ;
-(void)updateEdgeSelection:(NSUInteger)arg0 ;
-(void)updateMetaDataNeedProbe:(BOOL)arg0 refresh:(BOOL)arg1 push:(BOOL)arg2 minRTT:(NSUInteger)arg3 ;
-(void)updateNetworkAgentWithKeybag:(id)arg0 networkInfo:(id)arg1 ;


@end


#endif