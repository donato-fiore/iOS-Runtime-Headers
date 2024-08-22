// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSUPDATABLEASSETCACHEMANAGER_H
#define SSUPDATABLEASSETCACHEMANAGER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SSUpdatableAssetCacheManager : NSObject {
    NSString *_clientIdentifier;
}




-(BOOL)setCacheURLsOnManifestAndAssets:(id)arg0 error:(*id)arg1 ;
-(id)allCachedManifests;
-(id)assetFileName:(id)arg0 ;
-(id)assetFileURL:(id)arg0 ;
-(id)assetsDirectoryURL;
-(id)cacheRoot;
-(id)currentManifestFileURL;
-(id)initWithClientIdentifier:(id)arg0 ;
-(id)loadCurrentCachedManifest;
-(id)manifestFileName:(id)arg0 ;
-(id)manifestFileURL:(id)arg0 ;
-(id)manifestsDirectoryURL;
-(id)validatePath:(id)arg0 ;


@end


#endif