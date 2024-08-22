// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CANNEDENCODEDVIDEOCAPTURE_H
#define CANNEDENCODEDVIDEOCAPTURE_H

@class AVAssetReader, AVURLAsset, NSString, AVAssetReaderOutputMetadataAdaptor, AVAssetTrack, AVAssetReaderTrackOutput;
@protocol CannedVideoFrameFeeder;

#import <Foundation/Foundation.h>

#import "VideoScaler.h"

@interface CannedEncodedVideoCapture : NSObject <CannedVideoFrameFeeder>

 {
    *__CVPixelBufferPool _pixelBufferPool;
    *__CVPixelBufferPool _rotatedPixelBufferPool;
    _opaque_pthread_mutex_t _inputMutex;
    _opaque_pthread_mutex_t _attributeMutex;
}


@property (nonatomic) int allFrameCount; // ivar: _allFrameCount
@property (nonatomic) CGFloat allFrameRate; // ivar: _allFrameRate
@property (retain, nonatomic) AVAssetReader *assetReader; // ivar: _assetReader
@property (retain, nonatomic) AVURLAsset *compressedFileAsset; // ivar: _compressedFileAsset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int frameCount; // ivar: _frameCount
@property (readonly) NSUInteger hash;
@property (nonatomic) int height; // ivar: _height
@property (retain, nonatomic) AVAssetReaderOutputMetadataAdaptor *metadataAdaptor; // ivar: _metadataAdaptor
@property (retain, nonatomic) AVAssetTrack *metadataTrack; // ivar: _metadataTrack
@property (retain, nonatomic) NSString *movieURLString; // ivar: _movieURLString
@property (retain, nonatomic) AVAssetReaderTrackOutput *readerMetadataTrackOutput; // ivar: _readerMetadataTrackOutput
@property (retain, nonatomic) AVAssetReaderTrackOutput *readerVideoTrackOutput; // ivar: _readerVideoTrackOutput
@property (readonly) Class superclass;
@property (retain, nonatomic) VideoScaler *videoScaler; // ivar: _videoScaler
@property (retain, nonatomic) AVAssetTrack *videoTrack; // ivar: _videoTrack
@property (nonatomic) int width; // ivar: _width


-(id)initWithPath:(id)arg0 ;
-(int)finalizeVideoCapture;
-(int)initialize;
-(int)initializeDecoder;
-(int)loadCannedMediaAssets;
-(int)loadMetadataTrackFromList:(id)arg0 error:(id)arg1 ;
-(int)loadVideoTrackFromList:(id)arg0 error:(id)arg1 ;
-(struct __CVBuffer *)createPixelBufferForFrameIndex:(int)arg0 ;
-(void)attachMetadataToPixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)dealloc;
-(void)getFrameRate:(*CGFloat)arg0 frameCount:(*int)arg1 ;


@end


#endif