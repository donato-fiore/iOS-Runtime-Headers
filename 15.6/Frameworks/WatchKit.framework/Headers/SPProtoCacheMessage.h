// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPPROTOCACHEMESSAGE_H
#define SPPROTOCACHEMESSAGE_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;


#import "SPProtoCacheSyncData.h"

@interface SPProtoCacheMessage : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *assetData; // ivar: _assetData
@property (retain, nonatomic) NSString *assetKey; // ivar: _assetKey
@property (nonatomic) int cacheType; // ivar: _cacheType
@property (retain, nonatomic) NSString *gizmoCacheIdentifier; // ivar: _gizmoCacheIdentifier
@property (readonly, nonatomic) BOOL hasAssetData;
@property (readonly, nonatomic) BOOL hasAssetKey;
@property (readonly, nonatomic) BOOL hasGizmoCacheIdentifier;
@property (readonly, nonatomic) BOOL hasSyncData;
@property (nonatomic) int messageType; // ivar: _messageType
@property (retain, nonatomic) SPProtoCacheSyncData *syncData; // ivar: _syncData


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif