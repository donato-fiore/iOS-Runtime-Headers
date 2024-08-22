// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MRDEVICEINFOMESSAGEPROTOBUF_H
#define _MRDEVICEINFOMESSAGEPROTOBUF_H

@class PBCodable, NSString, NSMutableArray, NSData;
@protocol NSCopying;



@interface _MRDeviceInfoMessageProtobuf : PBCodable <NSCopying>

 {
    NSUInteger _protocolVersion;
    NSString *_airPlayGroupID;
    NSMutableArray *_airplayReceivers;
    NSString *_applicationBundleIdentifier;
    NSString *_applicationBundleVersion;
    NSData *_bluetoothAddress;
    NSString *_clusterID;
    NSString *_clusterLeaderID;
    unsigned int _clusterType;
    int _deviceClass;
    NSString *_deviceUID;
    NSString *_groupName;
    NSString *_groupUID;
    NSMutableArray *_groupedDevices;
    unsigned int _lastSupportedMessageType;
    NSString *_linkAgent;
    NSString *_localizedModelName;
    unsigned int _logicalDeviceCount;
    NSString *_managedConfigDeviceID;
    NSString *_modelID;
    NSString *_name;
    NSString *_routingContextID;
    NSString *_senderDefaultGroupUID;
    unsigned int _sharedQueueVersion;
    NSString *_systemBooksApplication;
    NSString *_systemBuildVersion;
    NSString *_systemMediaApplication;
    NSString *_systemPodcastApplication;
    NSString *_tightSyncUID;
    NSString *_uniqueIdentifier;
    BOOL _allowsPairing;
    BOOL _connected;
    BOOL _isAirplayActive;
    BOOL _isClusterAware;
    BOOL _isGroupLeader;
    BOOL _isProxyGroupPlayer;
    BOOL _supportsACL;
    BOOL _supportsExtendedMotion;
    BOOL _supportsMultiplayer;
    BOOL _supportsSharedQueue;
    BOOL _supportsSystemPairing;
    BOOL _tightlySyncedGroup;
    ? _has;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif