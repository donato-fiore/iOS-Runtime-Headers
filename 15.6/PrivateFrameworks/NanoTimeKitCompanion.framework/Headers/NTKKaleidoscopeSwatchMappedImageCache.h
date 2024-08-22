// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKKALEIDOSCOPESWATCHMAPPEDIMAGECACHE_H
#define NTKKALEIDOSCOPESWATCHMAPPEDIMAGECACHE_H

@class BSUIMappedImageCache, NSArray, NSMutableArray, NSString;
@protocol NTKFaceCollectionObserver;



@interface NTKKaleidoscopeSwatchMappedImageCache : BSUIMappedImageCache <NTKFaceCollectionObserver>

 {
    id *_activeDeviceNotificationBlock;
    NSArray *_libraryCollections;
    NSMutableArray *_loadedCollections;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)keyForAsset:(id)arg0 style:(id)arg1 resourceDirectory:(id)arg2 ;
+(id)sharedCache;
-(id)_init;
-(void)_cleanCache;
-(void)_pruneUnusedKeys;
-(void)_removeImagesForKeysMatching:(id)arg0 ;
-(void)faceCollectionDidLoad:(id)arg0 ;


@end


#endif