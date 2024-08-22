// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPURLASSET_H
#define VCPURLASSET_H

@class NSURL, AVURLAsset, NSDictionary, NSMutableDictionary;


#import "VCPAsset.h"

@interface VCPURLAsset : VCPAsset {
    NSURL *_imageURL;
    AVURLAsset *_movie;
    NSInteger _mediaType;
    NSUInteger _mediaSubtypes;
    NSUInteger _pixelWidth;
    NSUInteger _pixelHeight;
    BOOL _onceExif;
    NSDictionary *_cachedExif;
    BOOL _onceScenes;
    NSMutableDictionary *_cachedScenes;
}




+(id)imageAssetWithURL:(id)arg0 ;
+(id)livePhotoAssetWithImageURL:(id)arg0 andMovieURL:(id)arg1 ;
+(id)movieAssetWithURL:(id)arg0 ;
+(id)sdofImageAssetWithURL:(id)arg0 ;
-(BOOL)isMovieResourceLocalAvailable;
-(CGFloat)duration;
-(NSInteger)mediaType;
-(NSUInteger)mediaSubtypes;
-(NSUInteger)pixelHeight;
-(NSUInteger)pixelWidth;
-(float)originalPhotoOffsetSeconds;
-(float)photoOffsetSeconds;
-(float)slowmoRate;
-(id)exif;
-(id)initWithImageURL:(id)arg0 andMovieURL:(id)arg1 ;
-(id)initWithImageURL:(id)arg0 isSDOF:(BOOL)arg1 ;
-(id)initWithMovieURL:(id)arg0 ;
-(id)mainFileURL;
-(id)modificationDate;
-(id)movie;
-(id)originalMovie;
-(id)scenes;
-(struct ? )slomoRange;
-(struct __CVBuffer *)imageWithPreferredDimension:(NSUInteger)arg0 ;
-(struct __CVBuffer *)imageWithPreferredDimension:(NSUInteger)arg0 orientation:(*unsigned int)arg1 ;


@end


#endif