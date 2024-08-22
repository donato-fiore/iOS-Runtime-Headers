// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCCONNECTIONLEGACY_H
#define VCCONNECTIONLEGACY_H

@class NSUUID, NSString;
@protocol VCConnectionProtocol;


#import "VCConnection.h"

@interface VCConnectionLegacy : VCConnection <VCConnectionProtocol>



@property (readonly) int connectionId;
@property int connectionMTU;
@property (readonly) *tagCONNRESULT connectionResult; // ivar: _connectionResult
@property (readonly) NSUUID *connectionUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned int downlinkBitrateCap;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isEndToEndLink;
@property (readonly) BOOL isIPv6;
@property (readonly) BOOL isLocalConstrained; // ivar: isLocalConstrained
@property (readonly) BOOL isLocalDelegated; // ivar: isLocalDelegated
@property (readonly) BOOL isLocalExpensive; // ivar: isLocalExpensive
@property (readonly) BOOL isLocalOn5G; // ivar: isLocalOn5G
@property (readonly) BOOL isLocalOnCellular;
@property (readonly) BOOL isLocalOnWiFi;
@property (readonly) BOOL isRelay;
@property (readonly) BOOL isRemoteConstrained; // ivar: isRemoteConstrained
@property (readonly) BOOL isRemoteDelegated; // ivar: isRemoteDelegated
@property (readonly) BOOL isRemoteExpensive; // ivar: isRemoteExpensive
@property (readonly) BOOL isRemoteOn5G; // ivar: isRemoteOn5G
@property (readonly) BOOL isRemoteOnCellular;
@property (readonly) BOOL isRemoteOnWiFi;
@property (readonly) BOOL isReplaceOnly;
@property (readonly) BOOL isUpgraded;
@property (readonly) BOOL isVPN;
@property (readonly) BOOL isVirtualRelayLink; // ivar: isVirtualRelayLink
@property (readonly) BOOL isWifiToWifi;
@property int localCellTech;
@property (readonly) int localConnectionType;
@property (readonly) NSString *localInterfaceName;
@property (readonly) NSString *localInterfaceTypeString;
@property int maxConnectionMTU; // ivar: maxConnectionMTU
@property int priority; // ivar: _priority
@property (readonly) unsigned short relayChannelNumber;
@property int remoteCellTech;
@property (readonly) int remoteConnectionType;
@property (readonly) NSString *remoteInterfaceTypeString;
@property (readonly) BOOL serverIsDegraded;
@property (readonly) Class superclass;
@property (readonly) unsigned int type; // ivar: _type
@property unsigned int uplinkAudioBitrateCapOneToOne;
@property unsigned int uplinkBitrateCap;
@property unsigned int uplinkBitrateCapOneToOne;
@property BOOL waitToBeNominated; // ivar: _waitToBeNominated


-(BOOL)isLocalIPPort:(struct tagIPPORT *)arg0 ;
-(BOOL)isOnSameIPPortWithConnection:(id)arg0 ;
-(BOOL)isOnSameInterfacesWithConnection:(id)arg0 ;
-(BOOL)isRemoteIPPort:(struct tagIPPORT *)arg0 ;
-(BOOL)isSameAsConnection:(id)arg0 ;
-(BOOL)matchesSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg0 ;
-(id)copy;
-(id)initWithCandidatePair:(struct tagCANDIDATEPAIR *)arg0 ;
-(id)initWithConnectionResult:(struct tagCONNRESULT *)arg0 type:(unsigned int)arg1 ;
-(id)ipportToString:(struct tagIPPORT *)arg0 ;
-(int)cellularMTU;
-(struct tagIPPORT )IPPortForNWConnection:(id)arg0 ;
-(unsigned short)updateMaxConnectionMTU:(unsigned short)arg0 ;
-(void)dealloc;
-(void)getSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg0 ;


@end


#endif