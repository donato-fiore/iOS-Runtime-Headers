// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRDEVICEINFOMESSAGEPROTOBUF_H
#define _MRDEVICEINFOMESSAGEPROTOBUF_H

@class PBCodable, NSString, NSMutableArray, NSData;
@protocol NSCopying;



@interface _MRDeviceInfoMessageProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *airPlayGroupID; // ivar: _airPlayGroupID
@property (retain, nonatomic) NSMutableArray *airplayReceivers; // ivar: _airplayReceivers
@property (retain, nonatomic) NSMutableArray *allClusteredDevices; // ivar: _allClusteredDevices
@property (nonatomic) BOOL allowsPairing; // ivar: _allowsPairing
@property (retain, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (retain, nonatomic) NSString *applicationBundleVersion; // ivar: _applicationBundleVersion
@property (retain, nonatomic) NSData *bluetoothAddress; // ivar: _bluetoothAddress
@property (retain, nonatomic) NSString *clusterID; // ivar: _clusterID
@property (retain, nonatomic) NSString *clusterLeaderID; // ivar: _clusterLeaderID
@property (nonatomic) unsigned int clusterType; // ivar: _clusterType
@property (retain, nonatomic) NSMutableArray *clusteredDevices; // ivar: _clusteredDevices
@property (nonatomic) BOOL connected; // ivar: _connected
@property (nonatomic) int deviceClass; // ivar: _deviceClass
@property (retain, nonatomic) NSString *deviceUID; // ivar: _deviceUID
@property (nonatomic) BOOL groupContainsDiscoverableGroupLeader; // ivar: _groupContainsDiscoverableGroupLeader
@property (retain, nonatomic) NSString *groupName; // ivar: _groupName
@property (retain, nonatomic) NSString *groupUID; // ivar: _groupUID
@property (retain, nonatomic) NSMutableArray *groupedDevices; // ivar: _groupedDevices
@property (readonly, nonatomic) BOOL hasAirPlayGroupID;
@property (nonatomic) BOOL hasAllowsPairing;
@property (readonly, nonatomic) BOOL hasApplicationBundleIdentifier;
@property (readonly, nonatomic) BOOL hasApplicationBundleVersion;
@property (readonly, nonatomic) BOOL hasBluetoothAddress;
@property (readonly, nonatomic) BOOL hasClusterID;
@property (readonly, nonatomic) BOOL hasClusterLeaderID;
@property (nonatomic) BOOL hasClusterType;
@property (nonatomic) BOOL hasConnected;
@property (nonatomic) BOOL hasDeviceClass;
@property (readonly, nonatomic) BOOL hasDeviceUID;
@property (nonatomic) BOOL hasGroupContainsDiscoverableGroupLeader;
@property (readonly, nonatomic) BOOL hasGroupName;
@property (readonly, nonatomic) BOOL hasGroupUID;
@property (nonatomic) BOOL hasIsAirplayActive;
@property (nonatomic) BOOL hasIsClusterAware;
@property (nonatomic) BOOL hasIsGroupLeader;
@property (nonatomic) BOOL hasIsProxyGroupPlayer;
@property (nonatomic) BOOL hasLastKnownClusterType;
@property (nonatomic) BOOL hasLastSupportedMessageType;
@property (readonly, nonatomic) BOOL hasLinkAgent;
@property (readonly, nonatomic) BOOL hasLocalizedModelName;
@property (nonatomic) BOOL hasLogicalDeviceCount;
@property (readonly, nonatomic) BOOL hasManagedConfigDeviceID;
@property (readonly, nonatomic) BOOL hasModelID;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasParentGroupContainsDiscoverableGroupLeader;
@property (nonatomic) BOOL hasProtocolVersion;
@property (readonly, nonatomic) BOOL hasRoutingContextID;
@property (readonly, nonatomic) BOOL hasSenderDefaultGroupUID;
@property (nonatomic) BOOL hasSharedQueueVersion;
@property (nonatomic) BOOL hasSupportsACL;
@property (nonatomic) BOOL hasSupportsExtendedMotion;
@property (nonatomic) BOOL hasSupportsMultiplayer;
@property (nonatomic) BOOL hasSupportsSharedQueue;
@property (nonatomic) BOOL hasSupportsSystemPairing;
@property (readonly, nonatomic) BOOL hasSystemBooksApplication;
@property (readonly, nonatomic) BOOL hasSystemBuildVersion;
@property (readonly, nonatomic) BOOL hasSystemMediaApplication;
@property (readonly, nonatomic) BOOL hasSystemPodcastApplication;
@property (readonly, nonatomic) BOOL hasTightSyncUID;
@property (nonatomic) BOOL hasTightlySyncedGroup;
@property (readonly, nonatomic) BOOL hasUniqueIdentifier;
@property (nonatomic) BOOL isAirplayActive; // ivar: _isAirplayActive
@property (nonatomic) BOOL isClusterAware; // ivar: _isClusterAware
@property (nonatomic) BOOL isGroupLeader; // ivar: _isGroupLeader
@property (nonatomic) BOOL isProxyGroupPlayer; // ivar: _isProxyGroupPlayer
@property (nonatomic) unsigned int lastKnownClusterType; // ivar: _lastKnownClusterType
@property (nonatomic) unsigned int lastSupportedMessageType; // ivar: _lastSupportedMessageType
@property (retain, nonatomic) NSString *linkAgent; // ivar: _linkAgent
@property (retain, nonatomic) NSString *localizedModelName; // ivar: _localizedModelName
@property (nonatomic) unsigned int logicalDeviceCount; // ivar: _logicalDeviceCount
@property (retain, nonatomic) NSString *managedConfigDeviceID; // ivar: _managedConfigDeviceID
@property (retain, nonatomic) NSString *modelID; // ivar: _modelID
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL parentGroupContainsDiscoverableGroupLeader; // ivar: _parentGroupContainsDiscoverableGroupLeader
@property (nonatomic) NSUInteger protocolVersion; // ivar: _protocolVersion
@property (retain, nonatomic) NSString *routingContextID; // ivar: _routingContextID
@property (retain, nonatomic) NSString *senderDefaultGroupUID; // ivar: _senderDefaultGroupUID
@property (nonatomic) unsigned int sharedQueueVersion; // ivar: _sharedQueueVersion
@property (nonatomic) BOOL supportsACL; // ivar: _supportsACL
@property (nonatomic) BOOL supportsExtendedMotion; // ivar: _supportsExtendedMotion
@property (nonatomic) BOOL supportsMultiplayer; // ivar: _supportsMultiplayer
@property (nonatomic) BOOL supportsSharedQueue; // ivar: _supportsSharedQueue
@property (nonatomic) BOOL supportsSystemPairing; // ivar: _supportsSystemPairing
@property (retain, nonatomic) NSString *systemBooksApplication; // ivar: _systemBooksApplication
@property (retain, nonatomic) NSString *systemBuildVersion; // ivar: _systemBuildVersion
@property (retain, nonatomic) NSString *systemMediaApplication; // ivar: _systemMediaApplication
@property (retain, nonatomic) NSString *systemPodcastApplication; // ivar: _systemPodcastApplication
@property (retain, nonatomic) NSString *tightSyncUID; // ivar: _tightSyncUID
@property (nonatomic) BOOL tightlySyncedGroup; // ivar: _tightlySyncedGroup
@property (retain, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)airplayReceiversAtIndex:(NSUInteger)arg0 ;
-(id)allClusteredDevicesAtIndex:(NSUInteger)arg0 ;
-(id)clusteredDevicesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)deviceClassAsString:(int)arg0 ;
-(id)dictionaryRepresentation;
-(id)groupedDevicesAtIndex:(NSUInteger)arg0 ;
-(int)StringAsDeviceClass:(id)arg0 ;
-(void)addAirplayReceivers:(id)arg0 ;
-(void)addAllClusteredDevices:(id)arg0 ;
-(void)addClusteredDevices:(id)arg0 ;
-(void)addGroupedDevices:(id)arg0 ;
-(void)clearAirplayReceivers;
-(void)clearAllClusteredDevices;
-(void)clearClusteredDevices;
-(void)clearGroupedDevices;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif