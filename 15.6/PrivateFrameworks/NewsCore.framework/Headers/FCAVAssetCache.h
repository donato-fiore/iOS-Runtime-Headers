// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCAVASSETCACHE_H
#define FCAVASSETCACHE_H

@class NSString, NFUnfairLock, NSURL;
@protocol FCCacheCoordinatorDelegate, FCAVAssetCacheType, FCCacheFlushing;

#import <Foundation/Foundation.h>

#import "FCKeyValueStore.h"
#import "FCCacheCoordinator.h"

@interface FCAVAssetCache : NSObject <FCCacheCoordinatorDelegate, FCAVAssetCacheType, FCCacheFlushing>

 {
    NSString *_cacheDirectory;
    NFUnfairLock *_initializationLock;
    FCKeyValueStore *_metadataStore;
    NSURL *_contentDirectoryURL;
    FCCacheCoordinator *_cacheCoordinator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)containsAssetWithIdentifier:(id)arg0 ;
-(NSUInteger)cacheCoordinatorCurrentSizeWithReadLock:(id)arg0 ;
-(id)cachedFileURLForAssetIdentifier:(id)arg0 ;
-(id)contentArchiveForAssetIdentifier:(id)arg0 ;
-(id)contentKeyIdentifiersForAllAssets;
-(id)contentKeyIdentifiersForAssetIdentifier:(id)arg0 ;
-(id)importAVAsset:(id)arg0 ;
-(id)init;
-(id)interestTokenForAssetIdentifier:(id)arg0 ;
-(id)interestTokenForAssetIdentifiers:(id)arg0 ;
-(void)adoptFileAtURL:(id)arg0 forAssetIdentifier:(id)arg1 remoteURL:(id)arg2 contentKeyIdentifiers:(id)arg3 extension:(id)arg4 ;
-(void)cacheCoordinator:(id)arg0 flushKeysWithWriteLock:(id)arg1 ;
-(void)enableFlushingWithFlushingThreshold:(NSUInteger)arg0 ;


@end


#endif