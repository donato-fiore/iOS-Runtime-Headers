// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NRBLUETOOTHPACKETPARSER_H
#define NRBLUETOOTHPACKETPARSER_H

@class NSArray, NWAddressEndpoint, NSUUID, NSString;
@protocol NENexusDelegate, OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "NRDeviceIdentifier.h"
#import "NRXPCComm.h"

@interface NRBluetoothPacketParser : NSObject <NENexusDelegate>

 {
    unsigned char _state;
    BOOL _startRequested;
    unsigned char _linkActivationMap;
    BOOL _nexusSetupComplete;
    BOOL _processingNexusInput;
    BOOL _advancedWithoutRXSync;
    BOOL _nexusVOChannelUsedSinceLastPurge;
    BOOL _nexusVIChannelUsedSinceLastPurge;
    BOOL _nexusBEChannelUsedSinceLastPurge;
    BOOL _nexusBKChannelUsedSinceLastPurge;
    BOOL _simulateWakePacketForTesting;
    BOOL _forceWakePacketForTesting;
    unsigned char _ringIdxToStart;
    unsigned char _ringIdxToStartForMedium;
    NRDeviceIdentifier *_deviceIdentifier;
    NSUInteger _identifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_nexusInstances;
    NWAddressEndpoint *_localEndpoint;
    NWAddressEndpoint *_remoteEndpoint;
    *? _readContextForMedium;
    *? _writeContextForMedium;
    *? _readContextForHigh;
    *? _writeContextForHigh;
    *? _readContextForIsochronous;
    *? _writeContextForIsochronous;
    NSUInteger _activityMask;
    NSUInteger _writeActivityCounterForMedium;
    NSUInteger _lastReadWriteActivityCounterForMedium;
    NSUInteger _writeActivityCounterForHigh;
    NSUInteger _lastReadWriteActivityCounterForHigh;
    NSUInteger _writeActivityCounterForIsochronous;
    NSUInteger _lastReadWriteActivityCounterForIsochronous;
    NSUInteger _counterForDataStallCheck;
    NSUInteger _counterForDataStallRemediation;
    *channel _nexusVOChannel;
    *channel _nexusVIChannel;
    *channel _nexusBEChannel;
    *channel _nexusBKChannel;
    *channel_ring_desc _nexusVOInputRing;
    *channel_ring_desc _nexusVOOutputRing;
    *channel_ring_desc _nexusVIInputRing;
    *channel_ring_desc _nexusVIOutputRing;
    *channel_ring_desc _nexusBEInputRing;
    *channel_ring_desc _nexusBEOutputRing;
    *channel_ring_desc _nexusBKInputRing;
    *channel_ring_desc _nexusBKOutputRing;
    NSObject<OS_dispatch_source> *_dNexusVOInputSource;
    NSObject<OS_dispatch_source> *_dNexusVOOutputSource;
    NSObject<OS_dispatch_source> *_dNexusVIInputSource;
    NSObject<OS_dispatch_source> *_dNexusVIOutputSource;
    NSObject<OS_dispatch_source> *_dNexusBEInputSource;
    NSObject<OS_dispatch_source> *_dNexusBEOutputSource;
    NSObject<OS_dispatch_source> *_dNexusBKInputSource;
    NSObject<OS_dispatch_source> *_dNexusBKOutputSource;
    NSObject<OS_dispatch_group> *_nexusVOGroup;
    NSObject<OS_dispatch_group> *_nexusVIGroup;
    NSObject<OS_dispatch_group> *_nexusBEGroup;
    NSObject<OS_dispatch_group> *_nexusBKGroup;
    NRXPCComm *_xpcComm;
    NSUInteger _lastPacketDataArrivalTime;
    NSUInteger _packetDataIntervalAverage;
    NSObject<OS_dispatch_source> *_poolPurgeTimer;
    NSUInteger _packetsFromNexusVO;
    NSUInteger _packetsToNexusVO;
    NSUInteger _packetsFromNexusVI;
    NSUInteger _packetsToNexusVI;
    NSUInteger _packetsFromNexusBE;
    NSUInteger _packetsToNexusBE;
    NSUInteger _packetsFromNexusBK;
    NSUInteger _packetsToNexusBK;
    NSUInteger _lastReadPacketsFromNexusVO;
    NSUInteger _lastReadPacketsToNexusVO;
    NSUInteger _lastReadPacketsFromNexusVI;
    NSUInteger _lastReadPacketsToNexusVI;
    NSUInteger _lastReadPacketsFromNexusBE;
    NSUInteger _lastReadPacketsToNexusBE;
    NSUInteger _lastReadPacketsFromNexusBK;
    NSUInteger _lastReadPacketsToNexusBK;
    NSUInteger _bytesFromLink;
    NSUInteger _bytesToLink;
    NSUInteger _datagramBytesFromLink;
    NSUInteger _datagramBytesToLink;
    NSUInteger _urgentBytesFromLink;
    NSUInteger _urgentBytesToLink;
    NSUInteger _lastReadBytesToLink;
    NSUInteger _lastReadBytesToUrgentLink;
    NSUInteger _lastReadBytesToDatagramLink;
    NSUInteger _lastReadBytesFromLink;
    NSUInteger _lastReadBytesFromUrgentLink;
    NSUInteger _lastReadBytesFromDatagramLink;
    NSObject<OS_dispatch_source> *_linkStatTimerSource;
    NSUInteger _totalContextCount;
    in6_addr _localAddrClassD;
    in6_addr _remoteAddrClassD;
}


@property (retain, nonatomic) NSUUID *bluetoothUUID; // ivar: _bluetoothUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)start;
-(id)initWithBluetoothUUID:(id)arg0 queue:(id)arg1 ;
-(id)initWithDeviceIdentifier:(id)arg0 queue:(id)arg1 ;
-(struct ? *)createReadContextForPriority:(unsigned char)arg0 readAvailableCallback:(*unk)arg1 readAvailableContext:(*void)arg2 ;
-(struct ? *)createWriteContextForPriority:(unsigned char)arg0 writeOutputCallback:(*unk)arg1 writeOutputContext:(*void)arg2 ;
-(void)acceptNewFlow:(id)arg0 fromNexus:(id)arg1 completionHandler:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(void)handleRequestToActivateNexus:(id)arg0 fromFlow:(id)arg1 ;
-(void)resetContextForPriority:(unsigned char)arg0 ;


@end


#endif