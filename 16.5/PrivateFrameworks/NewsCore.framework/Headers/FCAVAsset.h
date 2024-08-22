// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCAVASSET_H
#define FCAVASSET_H

@class NSDictionary, NFUnfairLock, NSURL, AVURLAsset, NSString;
@protocol NSCopying, FCContentArchivable, FCAVAssetCacheType, FCAVAssetKeyCacheType, FCAVAssetResourceLoaderType, FCAVAssetKeyManagerType;

#import <Foundation/Foundation.h>

#import "FCContentArchive.h"

@interface FCAVAsset : NSObject <NSCopying, FCContentArchivable>

 {
    NSDictionary *_assetOptions;
    NFUnfairLock *_assetLock;
    id<FCAVAssetCacheType> *_assetCache;
    id<FCAVAssetKeyCacheType> *_assetKeyCache;
    id<FCAVAssetResourceLoaderType> *_assetResourceLoader;
    id<FCAVAssetKeyManagerType> *_assetKeyManager;
    NSURL *_remoteURL;
}


@property (readonly, nonatomic) AVURLAsset *asset; // ivar: _asset
@property (readonly, nonatomic) FCContentArchive *contentArchive;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)_resetUnderlyingAsset;


@end


#endif