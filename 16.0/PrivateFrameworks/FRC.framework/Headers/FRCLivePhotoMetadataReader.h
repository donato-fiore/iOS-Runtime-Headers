// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FRCLIVEPHOTOMETADATAREADER_H
#define FRCLIVEPHOTOMETADATAREADER_H

@class AVAssetReaderOutputMetadataAdaptor;

#import <Foundation/Foundation.h>


@interface FRCLivePhotoMetadataReader : NSObject {
    AVAssetReaderOutputMetadataAdaptor *_metadataOutputAdaptor;
    NSUInteger _frameIndex;
    NSInteger _previousDisplacement;
    NSUInteger _recipe;
    ? _droppingThreshold;
    NSUInteger _totalFrames;
    NSUInteger _initialOriginalPTS;
}


@property (readonly, nonatomic) NSUInteger numberOfDroppedFrames; // ivar: _numberOfDroppedFrames
@property (readonly, nonatomic) NSUInteger numberOfInterpolatedFrames; // ivar: _numberOfInterpolatedFrames
@property (nonatomic) BOOL verbose; // ivar: _verbose


-(BOOL)processLivePhotoMetadataItem:(id)arg0 isIDR:(BOOL)arg1 recipeAvailable:(BOOL)arg2 ;
-(NSUInteger)preParseMetadata;
-(id)createMetadataAdaptorForAsset:(id)arg0 ;
-(id)init;
-(struct ? )getStillImageTime:(id)arg0 ;
-(void)printV3Metadata:(struct ? *)arg0 frameIndex:(NSUInteger)arg1 time:(struct ? )arg2 isIDR:(BOOL)arg3 noRecipeGap:(BOOL)arg4 ;
-(void)readLivePhotoMetadataFromAsset:(id)arg0 ;


@end


#endif