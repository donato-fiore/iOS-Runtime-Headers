// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTRESOURCELOCATOR_H
#define AVTRESOURCELOCATOR_H

@class NSMutableDictionary, NSURL;

#import <Foundation/Foundation.h>


@interface AVTResourceLocator : NSObject {
    NSMutableDictionary *_imageCache;
    NSURL *_resourcesURL;
    NSURL *_environmentResourcesURL;
    NSURL *_memojiResourcesURL;
    NSURL *_animojiResourcesURL;
    NSURL *_stickerResourcesURL;
    NSURL *_poseResourcesURL;
    NSURL *_memojiAssetsURL;
    NSURL *_rootCacheURL;
    NSURL *_subdivDataCacheURL;
}


@property (readonly) NSURL *rootCacheURL;
@property (readonly) NSURL *subdivDataCacheURL;


+(id)_resourcePathInDirectoryURL:(id)arg0 subDirectory:(id)arg1 name:(id)arg2 ofType:(id)arg3 ;
+(id)sharedResourceLocator;
-(id)init;
-(id)pathForAnimojiResource:(id)arg0 ofType:(id)arg1 ;
-(id)pathForAnimojiResource:(id)arg0 ofType:(id)arg1 inDirectory:(id)arg2 ;
-(id)pathForEnvironmentResource:(id)arg0 ofType:(id)arg1 ;
-(id)pathForEnvironmentResource:(id)arg0 ofType:(id)arg1 inDirectory:(id)arg2 ;
-(id)pathForMemojiResource:(id)arg0 ofType:(id)arg1 ;
-(id)pathForMemojiResource:(id)arg0 ofType:(id)arg1 inDirectory:(id)arg2 ;
-(id)pathForPoseResource:(id)arg0 ofType:(id)arg1 ;
-(id)pathForPoseResource:(id)arg0 ofType:(id)arg1 inDirectory:(id)arg2 ;
-(id)pathForStickerResource:(id)arg0 ofType:(id)arg1 ;
-(id)pathForStickerResource:(id)arg0 ofType:(id)arg1 inDirectory:(id)arg2 ;
-(id)urlForMemojiAssetAtPath:(id)arg0 ;
-(id)urlForMemojiResourceAtPath:(id)arg0 ;
-(id)urlForStickerResourceAtPath:(id)arg0 ;
-(struct CGImage *)imageWithPath:(id)arg0 ;
-(void)deleteLegacyCache;
-(void)deleteObsoleteVersionsInCache:(id)arg0 currentVersion:(NSUInteger)arg1 ;
-(void)initCaches;


@end


#endif