// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSGPTPNETWORKPORT_H
#define TSGPTPNETWORKPORT_H

@class IOKConnection, NSMutableArray, NSString;


#import "TSgPTPPort.h"

@interface TSgPTPNetworkPort : TSgPTPPort {
    IOKConnection *_connection;
    NSMutableArray *_clients;
}


@property (nonatomic, getter=isASCapable) BOOL asCapable; // ivar: _asCapable
@property (readonly, nonatomic) IOKConnection *connection;
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
@property (readonly, copy, nonatomic) NSString *interfaceName; // ivar: _interfaceName
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


+(id)diagnosticDescriptionForService:(id)arg0 withIndent:(id)arg1 ;
+(id)iokitMatchingDictionaryForClockIdentifier:(NSUInteger)arg0 ;
-(BOOL)_commonInitWithService:(id)arg0 ;
-(BOOL)deregisterAsyncCallbackError:(*id)arg0 ;
-(BOOL)disablePortError:(*id)arg0 ;
-(BOOL)enablePortError:(*id)arg0 ;
-(BOOL)getCurrentPortInfo:(struct ? *)arg0 error:(*id)arg1 ;
-(BOOL)overrideReceiveMatchingWithRemoteClockIdentity:(NSUInteger)arg0 remotePortNumber:(unsigned short)arg1 error:(*id)arg2 ;
-(BOOL)registerAsyncCallbackError:(*id)arg0 ;
-(BOOL)requestRemoteMessageIntervalsWithPDelayMessageInterval:(char)arg0 syncMessageInterval:(char)arg1 announceMessageInterval:(char)arg2 error:(*id)arg3 ;
-(BOOL)restoreReceiveMatchingError:(*id)arg0 ;
-(void)_handleNotification:(int)arg0 withArg1:(NSUInteger)arg1 arg2:(NSUInteger)arg2 arg3:(NSUInteger)arg3 arg4:(NSUInteger)arg4 arg5:(NSUInteger)arg5 arg6:(NSUInteger)arg6 ;
-(void)addClient:(id)arg0 ;
-(void)removeClient:(id)arg0 ;
-(void)serviceTerminated;
-(void)updateProperties;


@end


#endif