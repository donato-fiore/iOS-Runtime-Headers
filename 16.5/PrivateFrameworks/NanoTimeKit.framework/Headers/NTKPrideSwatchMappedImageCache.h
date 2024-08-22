// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKPRIDESWATCHMAPPEDIMAGECACHE_H
#define NTKPRIDESWATCHMAPPEDIMAGECACHE_H

@class BSUIMappedImageCache, NSArray;



@interface NTKPrideSwatchMappedImageCache : BSUIMappedImageCache {
    NSArray *_libraryCollections;
}




+(id)keyForFaceStyle:(id)arg0 editOption:(id)arg1 mode:(NSInteger)arg2 selectedOptions:(id)arg3 ;
+(id)sharedCache;
-(id)_init;
-(void)_cleanCache;
-(void)_removeImagesForKeysMatching:(id)arg0 ;


@end


#endif