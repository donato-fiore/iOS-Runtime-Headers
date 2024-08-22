// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSXGPTPNETWORKPORT_H
#define TSXGPTPNETWORKPORT_H

@class NSPointerArray, NSString;
@protocol TSXgPTPNetworkPortClient;


#import "TSXgPTPPort.h"
#import "TSgPTPNetworkPort.h"

@interface TSXgPTPNetworkPort : TSXgPTPPort <TSXgPTPNetworkPortClient>

 {
    NSPointerArray *_clients;
    os_unfair_lock_s _clientLock;
    BOOL _clientAddedToDaemon;
}


@property (nonatomic, getter=isASCapable) BOOL asCapable; // ivar: _asCapable
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *destinationAddressString; // ivar: _destinationAddressString
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (nonatomic) BOOL hasLocalFrequencyStabilityLower; // ivar: _hasLocalFrequencyStabilityLower
@property (nonatomic) BOOL hasLocalFrequencyStabilityUpper; // ivar: _hasLocalFrequencyStabilityUpper
@property (nonatomic) BOOL hasLocalFrequencyToleranceLower; // ivar: _hasLocalFrequencyToleranceLower
@property (nonatomic) BOOL hasLocalFrequencyToleranceUpper; // ivar: _hasLocalFrequencyToleranceUpper
@property (nonatomic) BOOL hasRemoteFrequencyStabilityLower; // ivar: _hasRemoteFrequencyStabilityLower
@property (nonatomic) BOOL hasRemoteFrequencyStabilityUpper; // ivar: _hasRemoteFrequencyStabilityUpper
@property (nonatomic) BOOL hasRemoteFrequencyToleranceLower; // ivar: _hasRemoteFrequencyToleranceLower
@property (nonatomic) BOOL hasRemoteFrequencyToleranceUpper; // ivar: _hasRemoteFrequencyToleranceUpper
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (nonatomic) char localAnnounceLogMeanInterval; // ivar: _localAnnounceLogMeanInterval
@property (nonatomic) int localFrequencyStabilityLower; // ivar: _localFrequencyStabilityLower
@property (nonatomic) int localFrequencyStabilityUpper; // ivar: _localFrequencyStabilityUpper
@property (nonatomic) int localFrequencyToleranceLower; // ivar: _localFrequencyToleranceLower
@property (nonatomic) int localFrequencyToleranceUpper; // ivar: _localFrequencyToleranceUpper
@property (nonatomic) unsigned char localLinkType; // ivar: _localLinkType
@property (nonatomic) unsigned char localOscillatorType; // ivar: _localOscillatorType
@property (nonatomic) char localSyncLogMeanInterval; // ivar: _localSyncLogMeanInterval
@property (nonatomic) unsigned char localTimestampingMode; // ivar: _localTimestampingMode
@property (nonatomic) unsigned int maximumPropagationDelay; // ivar: _maximumPropagationDelay
@property (nonatomic) unsigned int maximumRawDelay; // ivar: _maximumRawDelay
@property (nonatomic) unsigned int minimumPropagationDelay; // ivar: _minimumPropagationDelay
@property (nonatomic) unsigned int minimumRawDelay; // ivar: _minimumRawDelay
@property (nonatomic) NSUInteger overridenReceiveClockIdentity; // ivar: _overridenReceiveClockIdentity
@property (nonatomic) BOOL overridenReceiveMatching; // ivar: _overridenReceiveMatching
@property (nonatomic) unsigned short overridenReceivePortNumber; // ivar: _overridenReceivePortNumber
@property (weak, nonatomic) TSgPTPNetworkPort *owner; // ivar: _owner
@property (nonatomic) unsigned int propagationDelay; // ivar: _propagationDelay
@property (nonatomic) unsigned int propagationDelayLimit; // ivar: _propagationDelayLimit
@property (nonatomic) char remoteAnnounceLogMeanInterval; // ivar: _remoteAnnounceLogMeanInterval
@property (nonatomic) NSUInteger remoteClockIdentity; // ivar: _remoteClockIdentity
@property (nonatomic) int remoteFrequencyStabilityLower; // ivar: _remoteFrequencyStabilityLower
@property (nonatomic) int remoteFrequencyStabilityUpper; // ivar: _remoteFrequencyStabilityUpper
@property (nonatomic) int remoteFrequencyToleranceLower; // ivar: _remoteFrequencyToleranceLower
@property (nonatomic) int remoteFrequencyToleranceUpper; // ivar: _remoteFrequencyToleranceUpper
@property (nonatomic) BOOL remoteIsSameDevice; // ivar: _remoteIsSameDevice
@property (nonatomic) unsigned char remoteLinkType; // ivar: _remoteLinkType
@property (nonatomic) unsigned char remoteOscillatorType; // ivar: _remoteOscillatorType
@property (nonatomic) unsigned short remotePortNumber; // ivar: _remotePortNumber
@property (nonatomic) char remoteSyncLogMeanInterval; // ivar: _remoteSyncLogMeanInterval
@property (nonatomic) unsigned char remoteTimestampingMode; // ivar: _remoteTimestampingMode
@property (copy, nonatomic) NSString *sourceAddressString; // ivar: _sourceAddressString
@property (readonly) Class superclass;


+(id)clientProtocol;
+(id)serverProtocol;
-(BOOL)deregisterAsyncCallbackError:(*id)arg0 ;
-(BOOL)disablePortError:(*id)arg0 ;
-(BOOL)enablePortError:(*id)arg0 ;
-(BOOL)getCurrentPortInfo:(struct ? *)arg0 error:(*id)arg1 ;
-(BOOL)overrideReceiveMatchingWithRemoteClockIdentity:(NSUInteger)arg0 remotePortNumber:(unsigned short)arg1 error:(*id)arg2 ;
-(BOOL)registerAsyncCallbackError:(*id)arg0 ;
-(BOOL)requestRemoteMessageIntervalsWithPDelayMessageInterval:(char)arg0 syncMessageInterval:(char)arg1 announceMessageInterval:(char)arg2 error:(*id)arg3 ;
-(BOOL)restoreReceiveMatchingError:(*id)arg0 ;
-(id)exportedObject;
-(id)initWithEndpoint:(id)arg0 ;
-(void)_updateFromProperties:(id)arg0 ;
-(void)addClient:(id)arg0 ;
-(void)announceTimeout;
-(void)changedASCapable:(BOOL)arg0 ;
-(void)changedAdministrativeEnable:(BOOL)arg0 ;
-(void)interruptedConnection;
-(void)invalidatedConnection;
-(void)removeClient:(id)arg0 ;
-(void)syncTimeoutWithMean:(NSInteger)arg0 median:(NSInteger)arg1 standardDeviation:(NSUInteger)arg2 minimum:(NSInteger)arg3 maximum:(NSInteger)arg4 numberOfSamples:(unsigned int)arg5 ;
-(void)terminatedService;
-(void)timedoutMACLookup;


@end


#endif