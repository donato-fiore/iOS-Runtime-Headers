// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPPHOTOSASSET_H
#define VCPPHOTOSASSET_H

@class PHAsset, NSArray, NSDictionary, NSMutableDictionary;


#import "VCPAsset.h"

@interface VCPPhotosAsset : VCPAsset {
    PHAsset *_asset;
    NSArray *_cachedResources;
    BOOL _onceExif;
    NSDictionary *_cachedExif;
    BOOL _onceScenes;
    NSMutableDictionary *_cachedScenes;
}


@property (readonly, nonatomic) NSArray *resources;


+(id)assetWithPHAsset:(id)arg0 ;
-(BOOL)isMovieResourceLocalAvailable;
-(CGFloat)duration;
-(NSInteger)mediaType;
-(NSUInteger)mediaSubtypes;
-(NSUInteger)pixelHeight;
-(NSUInteger)pixelWidth;
-(float)originalPhotoOffsetSeconds;
-(float)photoOffsetSeconds;
-(float)slowmoRate;
-(id)allScenes;
-(id)exif;
-(id)faces;
-(id)fingerprint;
-(id)initWithPHAsset:(id)arg0 ;
-(id)localIdentifier;
-(id)mainFileURL;
-(id)modificationDate;
-(id)movie;
-(id)originalMovie;
-(id)scenes;
-(id)streamedMovie;
-(struct ? )slomoRange;
-(struct CGSize )originalMovieSize;
-(struct __CVBuffer *)imageWithPreferredDimension:(NSUInteger)arg0 ;
-(struct __CVBuffer *)imageWithPreferredDimension:(NSUInteger)arg0 orientation:(*unsigned int)arg1 ;


@end


#endif