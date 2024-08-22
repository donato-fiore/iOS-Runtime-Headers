// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTASSETREADER_H
#define PTASSETREADER_H

@class AVAssetReader, AVAssetReaderOutputMetadataAdaptor, AVMutableVideoComposition, AVAssetReaderVideoCompositionOutput, NSMutableArray, NSString, AVAsset;

#import <Foundation/Foundation.h>

#import "PTGlobalCinematographyMetadata.h"
#import "PTGlobalRenderingMetadata.h"
#import "PTGlobalStabilizationMetadata.h"
#import "PTGlobalVideoHeaderMetadata.h"

@interface PTAssetReader : NSObject {
    AVAssetReader *assetReader;
    AVAssetReaderOutputMetadataAdaptor *metadataAdaptor;
    AVMutableVideoComposition *videoComposition;
    AVAssetReaderVideoCompositionOutput *videoCompositionOutput;
    NSMutableArray *composedFrames;
    NSInteger lastDecodedFrameIndex;
    NSUInteger _cachedAccurateFrameCount;
    PTGlobalCinematographyMetadata *_globalCinematographyMetadata;
    PTGlobalRenderingMetadata *_globalRenderingMetadata;
    PTGlobalStabilizationMetadata *_globalStabilizationMetadata;
    PTGlobalVideoHeaderMetadata *_globalVideoHeaderMetadata;
}


@property (retain, nonatomic) NSString *YCbCrMatrix; // ivar: _YCbCrMatrix
@property (readonly, nonatomic) AVAsset *asset; // ivar: _asset
@property (retain, nonatomic) NSString *colorPrimaries; // ivar: _colorPrimaries
@property (readonly, nonatomic) NSUInteger estimatedDataRate; // ivar: _estimatedDataRate
@property (readonly, nonatomic) NSUInteger estimatedFrameCount;
@property (readonly, nonatomic) *opaqueCMFormatDescription formatDescription; // ivar: _formatDescription
@property (readonly, nonatomic) NSUInteger frameCount;
@property (readonly, nonatomic) ? frameDuration; // ivar: _frameDuration
@property (readonly, nonatomic) PTGlobalCinematographyMetadata *globalCinematographyMetadata;
@property (readonly, nonatomic) PTGlobalRenderingMetadata *globalRenderingMetadata;
@property (readonly, nonatomic) PTGlobalStabilizationMetadata *globalStabilizationMetadata;
@property (readonly, nonatomic) PTGlobalVideoHeaderMetadata *globalVideoHeaderMetadata;
@property (nonatomic) BOOL is420YUV10Bit; // ivar: _is420YUV10Bit
@property (readonly, nonatomic) BOOL isReadyForReading;
@property (retain, nonatomic) NSString *transferFunction; // ivar: _transferFunction


+(void)initialize;
-(BOOL)startReadingFrames:(NSUInteger)arg0 atTime:(struct ? )arg1 error:(*id)arg2 ;
-(BOOL)startReadingFrames:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)updateFormatPropertiesFromAsset:(id)arg0 ;
-(id)initWithAsset:(id)arg0 ;
-(id)nextFrame;
-(id)popComposedFrame;
-(void)_decodeGlobalMetadata;
-(void)_decodeMetadata:(id)arg0 ;
-(void)pushComposedFrame:(id)arg0 ;
-(void)startReadingFrames:(NSUInteger)arg0 ;
-(void)stopReadingFrames;


@end


#endif