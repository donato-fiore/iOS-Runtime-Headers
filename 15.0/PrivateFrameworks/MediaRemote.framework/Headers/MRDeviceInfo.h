// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRDEVICEINFO_H
#define MRDEVICEINFO_H

@class NSString, NSArray, NSData, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_MRDeviceInfoMessageProtobuf.h"
#import "MRDeviceInfo.h"

@interface MRDeviceInfo : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *WHAIdentifier;
@property (nonatomic, getter=isAirPlayActive) BOOL airPlayActive; // ivar: _airPlayActive
@property (copy, nonatomic) NSString *airPlayGroupUID; // ivar: _airPlayGroupUID
@property (copy, nonatomic) NSArray *airPlayReceivers; // ivar: _airPlayReceivers
@property (copy, nonatomic) NSData *bluetoothAddress; // ivar: _bluetoothAddress
@property (copy, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (nonatomic, getter=isClusterAware) BOOL clusterAware; // ivar: _clusterAware
@property (copy, nonatomic) NSString *clusterID; // ivar: _clusterID
@property (copy, nonatomic) NSString *clusterLeaderID; // ivar: _clusterLeaderID
@property (nonatomic) unsigned int clusterType; // ivar: _clusterType
@property (readonly, nonatomic, getter=isCompanion) BOOL companion;
@property (nonatomic, getter=isConnected) BOOL connected; // ivar: _connected
@property (readonly, copy, nonatomic) NSData *data;
@property (nonatomic) NSInteger deviceClass; // ivar: _deviceClass
@property (copy, nonatomic) NSString *deviceUID; // ivar: _deviceUID
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic, getter=isGizmo) BOOL gizmo;
@property (nonatomic, getter=isGroupLeader) BOOL groupLeader; // ivar: _groupLeader
@property (nonatomic) NSUInteger groupLogicalDeviceCount; // ivar: _groupLogicalDeviceCount
@property (copy, nonatomic) NSString *groupName; // ivar: _groupName
@property (copy, nonatomic) NSString *groupUID; // ivar: _groupUID
@property (nonatomic) NSUInteger groupedDeviceCount; // ivar: _groupedDeviceCount
@property (copy, nonatomic) NSArray *groupedDevices; // ivar: _groupedDevices
@property (nonatomic) BOOL hasAirPlayActive; // ivar: _hasAirPlayActive
@property (nonatomic) BOOL hasConnected; // ivar: _hasConnected
@property (nonatomic) BOOL hasDeviceClass; // ivar: _hasDeviceClass
@property (nonatomic) BOOL hasGroupLeader; // ivar: _hasGroupLeader
@property (nonatomic) BOOL hasGroupLogicalDeviceCount; // ivar: _hasGroupLogicalDeviceCount
@property (nonatomic) BOOL hasGroupedDeviceCount; // ivar: _hasGroupedDeviceCount
@property (nonatomic) BOOL hasPairingAllowed; // ivar: _hasPairingAllowed
@property (nonatomic) BOOL hasProtocolVersion; // ivar: _hasProtocolVersion
@property (nonatomic) BOOL hasProxyGroupPlayer; // ivar: _hasProxyGroupPlayer
@property (nonatomic) BOOL hasSharedQueueVersion; // ivar: _hasSharedQueueVersion
@property (nonatomic) BOOL hasSupportsACL; // ivar: _hasSupportsACL
@property (nonatomic) BOOL hasSupportsExtendedMotion; // ivar: _hasSupportsExtendedMotion
@property (nonatomic) BOOL hasSupportsMultiplayer; // ivar: _hasSupportsMultiplayer
@property (nonatomic) BOOL hasSupportsSharedQueue; // ivar: _hasSupportsSharedQueue
@property (nonatomic) BOOL hasSupportsSystemPairing; // ivar: _hasSupportsSystemPairing
@property (nonatomic) BOOL hasTightSyncGroup; // ivar: _hasTightSyncGroup
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *linkAgent; // ivar: _linkAgent
@property (copy, nonatomic) NSString *localReceiverPairingIdentity; // ivar: _localReceiverPairingIdentity
@property (copy, nonatomic) NSString *localizedModelName; // ivar: _localizedModelName
@property (copy, nonatomic) NSString *managedConfigurationDeviceIdentifier; // ivar: _managedConfigurationDeviceIdentifier
@property (readonly, copy, nonatomic) NSString *minimalDescription;
@property (copy, nonatomic) NSString *modelID; // ivar: _modelID
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic, getter=isPairingAllowed) BOOL pairingAllowed; // ivar: _pairingAllowed
@property (readonly, nonatomic) _MRDeviceInfoMessageProtobuf *protobuf;
@property (nonatomic) NSUInteger protocolVersion; // ivar: _protocolVersion
@property (nonatomic, getter=isProxyGroupPlayer) BOOL proxyGroupPlayer; // ivar: _proxyGroupPlayer
@property (copy, nonatomic) NSString *routingContextID; // ivar: _routingContextID
@property (copy, nonatomic) NSString *senderDefaultGroupUID; // ivar: _senderDefaultGroupUID
@property (nonatomic) NSUInteger sharedQueueVersion; // ivar: _sharedQueueVersion
@property (readonly, nonatomic) MRDeviceInfo *skeleton;
@property (nonatomic) BOOL supportsACL; // ivar: _supportsACL
@property (nonatomic) BOOL supportsExtendedMotion; // ivar: _supportsExtendedMotion
@property (readonly, nonatomic) BOOL supportsImplicitChangeShuffleAndRepeatModeInSetPlaybackQueueCommandOptions;
@property (nonatomic) BOOL supportsMultiplayer; // ivar: _supportsMultiplayer
@property (nonatomic) BOOL supportsSharedQueue; // ivar: _supportsSharedQueue
@property (nonatomic) BOOL supportsSystemPairing; // ivar: _supportsSystemPairing
@property (copy, nonatomic) NSString *systemBooksApplication; // ivar: _systemBooksApplication
@property (copy, nonatomic) NSString *systemMediaApplication; // ivar: _systemMediaApplication
@property (copy, nonatomic) NSString *systemPodcastApplication; // ivar: _systemPodcastApplication
@property (nonatomic, getter=isTightSyncGroup) BOOL tightSyncGroup; // ivar: _tightSyncGroup
@property (copy, nonatomic) NSString *tightSyncUID; // ivar: _tightSyncUID


+(id)dataFromDeviceInfos:(id)arg0 ;
+(id)deviceInfosFromData:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deltaDescriptionFromDeviceInfo:(id)arg0 ;
-(id)deltaDescriptionFromDeviceInfo:(id)arg0 minimal:(BOOL)arg1 ;
-(id)description;
-(id)initWithData:(id)arg0 ;
-(id)initWithOutputDevice:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(id)minimalDeltaDescriptionFromDeviceInfo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;


@end


#endif