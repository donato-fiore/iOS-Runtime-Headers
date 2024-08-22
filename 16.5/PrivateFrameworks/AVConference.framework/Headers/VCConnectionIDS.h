// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCCONNECTIONIDS_H
#define VCCONNECTIONIDS_H

@class IDSDataChannelLinkContext, NSUUID, NSString, NSData;
@protocol VCConnectionProtocol;


#import "VCConnection.h"
#import "VCDatagramChannelIDS.h"

@interface VCConnectionIDS : VCConnection <VCConnectionProtocol>

 {
    IDSDataChannelLinkContext *_linkContext;
    int _localCellTech;
    int _remoteCellTech;
    int _connectionMTU;
}


@property (readonly) int connectionId;
@property int connectionMTU;
@property (readonly) NSUUID *connectionUUID;
@property (readonly) VCDatagramChannelIDS *datagramChannel; // ivar: _datagramChannel
@property (readonly) unsigned int datagramChannelToken; // ivar: _datagramChannelToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned int downlinkBitrateCap; // ivar: _downlinkBitrateCap
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isEndToEndLink;
@property (readonly) BOOL isIPv6;
@property (readonly) BOOL isLocalConstrained;
@property (readonly) BOOL isLocalDelegated; // ivar: _isLocalDelegated
@property (readonly) BOOL isLocalExpensive;
@property (readonly) BOOL isLocalOn5G;
@property (readonly) BOOL isLocalOnCellular;
@property (readonly) BOOL isLocalOnWiFi;
@property (readonly) BOOL isRelay;
@property (readonly) BOOL isRemoteConstrained;
@property (readonly) BOOL isRemoteDelegated; // ivar: _isRemoteDelegated
@property (readonly) BOOL isRemoteExpensive;
@property (readonly) BOOL isRemoteOn5G;
@property (readonly) BOOL isRemoteOnCellular;
@property (readonly) BOOL isRemoteOnWiFi;
@property (readonly) BOOL isVPN;
@property (readonly) BOOL isVirtualRelayLink; // ivar: _isVirtualRelayLink
@property (readonly) BOOL isWifiToWifi;
@property (readonly) unsigned char linkID;
@property int localCellTech;
@property (readonly) int localConnectionType;
@property (readonly) NSString *localInterfaceName;
@property (readonly) NSString *localInterfaceTypeString;
@property int maxConnectionMTU; // ivar: _maxConnectionMTU
@property int priority; // ivar: _priority
@property (readonly) NSString *relaySessionToken;
@property int remoteCellTech;
@property (readonly) int remoteConnectionType;
@property (readonly) NSString *remoteInterfaceTypeString;
@property (readonly) unsigned char reportingIPVersion;
@property (readonly) BOOL serverIsDegraded;
@property (readonly) NSData *sharedDigestKey;
@property (readonly) Class superclass;
@property (readonly) unsigned int type; // ivar: _type
@property unsigned int uplinkAudioBitrateCapOneToOne; // ivar: _uplinkAudioBitrateCapOneToOne
@property unsigned int uplinkBitrateCap; // ivar: _uplinkBitrateCap
@property unsigned int uplinkBitrateCapOneToOne; // ivar: _uplinkBitrateCapOneToOne


+(unsigned int)worstCaseNetworkOverheadInBytesWithNumOfStreamId:(int)arg0 isPriorityIncluded:(BOOL)arg1 ;
-(BOOL)isOnSameInterfacesAndQRSessionWithConnection:(id)arg0 ;
-(BOOL)isOnSameInterfacesWithConnection:(id)arg0 ;
-(BOOL)isOnSameQRSessionWithConnection:(id)arg0 ;
-(BOOL)isSameAsConnection:(id)arg0 ;
-(BOOL)matchesChannelTokenWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg0 ;
-(BOOL)matchesSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg0 ;
-(id)connectionQRSessionID;
-(id)initWithLinkContext:(id)arg0 dataChannelToken:(unsigned int)arg1 ;
-(int)cellTechForSoMask:(unsigned int)arg0 fallbackTo:(int)arg1 ;
-(int)networkOverheadInBytesWithNumOfStreamId:(int)arg0 isPriorityIncluded:(BOOL)arg1 ;
-(unsigned short)updateMaxConnectionMTU:(unsigned short)arg0 ;
-(void)dealloc;
-(void)getSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg0 ;
-(void)setCellularMTU:(int)arg0 ;


@end


#endif