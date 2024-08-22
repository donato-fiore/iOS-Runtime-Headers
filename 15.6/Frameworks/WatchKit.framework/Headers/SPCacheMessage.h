// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPCACHEMESSAGE_H
#define SPCACHEMESSAGE_H

@class NSData, NSString;

#import <Foundation/Foundation.h>

#import "SPAssetCacheSyncData.h"

@interface SPCacheMessage : NSObject

@property (retain, nonatomic) NSData *assetData; // ivar: _assetData
@property (retain, nonatomic) NSString *assetKey; // ivar: _assetKey
@property (nonatomic) NSUInteger cacheType; // ivar: _cacheType
@property (nonatomic) NSUInteger error; // ivar: _error
@property (retain, nonatomic) NSString *gizmoCacheIdentifier; // ivar: _gizmoCacheIdentifier
@property (nonatomic) int messageType; // ivar: _messageType
@property (retain, nonatomic) SPAssetCacheSyncData *syncData; // ivar: _syncData


+(id)fromProto:(id)arg0 ;
+(id)toProto:(id)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif