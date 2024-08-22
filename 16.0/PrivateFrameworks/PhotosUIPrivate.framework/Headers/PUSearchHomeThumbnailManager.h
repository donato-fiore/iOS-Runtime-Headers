// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUSEARCHHOMETHUMBNAILMANAGER_H
#define PUSEARCHHOMETHUMBNAILMANAGER_H

@class NSCache, NSTimer, NSMutableDictionary, PXPlacesSearchProvider;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PUSearchHomeThumbnailManager : NSObject

@property (retain, nonatomic) NSCache *cache; // ivar: _cache
@property (retain, nonatomic) NSTimer *diskTimer; // ivar: _diskTimer
@property (retain, nonatomic) NSMutableDictionary *metadataPlist; // ivar: _metadataPlist
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metadataQueue; // ivar: _metadataQueue
@property (retain, nonatomic) PXPlacesSearchProvider *placesProvider; // ivar: _placesProvider
@property (retain, nonatomic) NSMutableDictionary *thumbnailsToWrite; // ivar: _thumbnailsToWrite


+(id)_filePathForHash:(id)arg0 ;
+(id)_filePathForMetadataPlist;
+(id)_thumbnailFilePath;
-(id)_hashStringForKey:(id)arg0 size:(struct CGSize )arg1 interfaceStyle:(NSInteger)arg2 displayScale:(CGFloat)arg3 ;
-(id)_imageForHomeZeroKeywordWithMapImage:(id)arg0 ;
-(id)init;
-(void)_createThumbnailDirectoryIfNeeded;
-(void)_fetchImageForLocation:(id)arg0 size:(struct CGSize )arg1 traitCollection:(id)arg2 completion:(id)arg3 ;
-(void)_setInMemoryAndPersistToDiskThumbnail:(id)arg0 forHashString:(id)arg1 ;
-(void)_setInMemoryThumbnail:(id)arg0 forHashString:(id)arg1 ;
-(void)_setMetadataDate:(id)arg0 forKey:(id)arg1 ;
-(void)_writeMetadataPlistToDisk;
-(void)thumbnailForKey:(id)arg0 type:(NSInteger)arg1 traitCollection:(id)arg2 withSize:(struct CGSize )arg3 completion:(id)arg4 ;


@end


#endif