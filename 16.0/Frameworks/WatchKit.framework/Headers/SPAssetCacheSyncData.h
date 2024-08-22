// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPASSETCACHESYNCDATA_H
#define SPASSETCACHESYNCDATA_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SPAssetCacheAssets.h"

@interface SPAssetCacheSyncData : NSObject

@property (retain, nonatomic) NSString *cacheIdentifier; // ivar: _cacheIdentifier
@property (retain, nonatomic) SPAssetCacheAssets *permanentCache; // ivar: _permanentCache
@property (retain, nonatomic) SPAssetCacheAssets *transientCache; // ivar: _transientCache


+(id)fromProto:(id)arg0 ;
+(id)toProto:(id)arg0 ;
-(id)init;


@end


#endif