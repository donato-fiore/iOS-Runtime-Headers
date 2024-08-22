// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCCODABLESTORE_H
#define HDCLOUDSYNCCODABLESTORE_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;


#import "HDCloudSyncCodableShardPredicate.h"

@interface HDCloudSyncCodableStore : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL active; // ivar: _active
@property (nonatomic) int deviceMode; // ivar: _deviceMode
@property (retain, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (nonatomic) BOOL hasActive;
@property (nonatomic) BOOL hasDeviceMode;
@property (readonly, nonatomic) BOOL hasDeviceName;
@property (nonatomic) BOOL hasOrder;
@property (readonly, nonatomic) BOOL hasOwnerIdentifier;
@property (readonly, nonatomic) BOOL hasPendingOwnerIdentifier;
@property (readonly, nonatomic) BOOL hasProductType;
@property (nonatomic) BOOL hasRequiredProtocolVersion;
@property (readonly, nonatomic) BOOL hasShardPredicate;
@property (readonly, nonatomic) BOOL hasStoreIdentifier;
@property (nonatomic) BOOL hasSupportedProtocolVersion;
@property (readonly, nonatomic) BOOL hasSystemBuildVersion;
@property (nonatomic) NSInteger order; // ivar: _order
@property (retain, nonatomic) NSString *ownerIdentifier; // ivar: _ownerIdentifier
@property (retain, nonatomic) NSString *pendingOwnerIdentifier; // ivar: _pendingOwnerIdentifier
@property (retain, nonatomic) NSString *productType; // ivar: _productType
@property (nonatomic) int requiredProtocolVersion; // ivar: _requiredProtocolVersion
@property (retain, nonatomic) HDCloudSyncCodableShardPredicate *shardPredicate; // ivar: _shardPredicate
@property (retain, nonatomic) NSData *storeIdentifier; // ivar: _storeIdentifier
@property (nonatomic) int supportedProtocolVersion; // ivar: _supportedProtocolVersion
@property (retain, nonatomic) NSString *systemBuildVersion; // ivar: _systemBuildVersion


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)deviceModeAsString:(int)arg0 ;
-(id)dictionaryRepresentation;
-(id)requiredProtocolVersionAsString:(int)arg0 ;
-(id)supportedProtocolVersionAsString:(int)arg0 ;
-(int)StringAsDeviceMode:(id)arg0 ;
-(int)StringAsRequiredProtocolVersion:(id)arg0 ;
-(int)StringAsSupportedProtocolVersion:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif