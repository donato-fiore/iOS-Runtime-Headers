// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCAVASSETFACTORY_H
#define FCAVASSETFACTORY_H

@class NFUnfairLock, NSString;
@protocol FCAVAssetFactoryType, FCAVAssetCacheType, FCAVAssetKeyCacheType, FCAVAssetKeyManagerType, FCAVAssetResourceLoaderType;

#import <Foundation/Foundation.h>

#import "FCMapTable.h"

@interface FCAVAssetFactory : NSObject <FCAVAssetFactoryType>

 {
    id<FCAVAssetCacheType> *_assetCache;
    id<FCAVAssetKeyCacheType> *_assetKeyCache;
    id<FCAVAssetKeyManagerType> *_assetKeyManager;
    id<FCAVAssetResourceLoaderType> *_assetResourceLoader;
    FCMapTable *_assets;
    NFUnfairLock *_assetsLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)assetWithIdentifier:(id)arg0 remoteURL:(id)arg1 overrideMIMEType:(id)arg2 ;
-(id)init;


@end


#endif