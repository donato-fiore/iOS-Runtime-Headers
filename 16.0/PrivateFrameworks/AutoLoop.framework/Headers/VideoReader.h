// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIDEOREADER_H
#define VIDEOREADER_H

@class AVAsset, AVAssetReader, NSArray, NSError, NSCondition, AVAssetReaderOutput, AVAssetTrack;

#import <Foundation/Foundation.h>


@interface VideoReader : NSObject {
    BOOL _readAheadEnable;
}


@property (readonly) AVAsset *asset; // ivar: asset
@property (readonly) AVAssetReader *assetReader; // ivar: assetReader
@property (readonly) NSArray *formatDescriptions; // ivar: formatDescriptions
@property (readonly) float fps; // ivar: fps
@property (readonly) BOOL fullRangeVideo; // ivar: fullRangeVideo
@property (readonly) unsigned int imageHeight; // ivar: imageHeight
@property (readonly) unsigned int imageWidth; // ivar: imageWidth
@property (readonly) NSError *lastError; // ivar: lastError
@property *opaqueCMSampleBuffer lastFrame; // ivar: _lastFrame
@property (readonly) ? lastPresentationTime; // ivar: lastPresentationTime
@property (readonly) ? minFrameDuration; // ivar: minFrameDuration
@property unsigned int pixelFormatOptions; // ivar: _pixelFormatOptions
@property (readonly) CGAffineTransform preferredTransform; // ivar: preferredTransform
@property (setter=setReadAheadEnable:) BOOL readAheadEnable;
@property float readLength; // ivar: readLength
@property ? readLengthT; // ivar: readLengthT
@property float readStart; // ivar: readStart
@property ? readStartT; // ivar: readStartT
@property *opaqueCMSampleBuffer readaheadBuf; // ivar: _readaheadBuf
@property (retain) NSCondition *readaheadLock; // ivar: _readaheadLock
@property int readaheadState; // ivar: _readaheadState
@property (readonly) int timeScale; // ivar: timeScale
@property (readonly) float trackLength; // ivar: trackLength
@property (readonly) ? trackLengthT; // ivar: trackLengthT
@property (readonly) AVAssetReaderOutput *trackOutput; // ivar: trackOutput
@property (readonly) float trackStart; // ivar: trackStart
@property (readonly) ? trackStartT; // ivar: trackStartT
@property (readonly) AVAssetTrack *videoTrack; // ivar: videoTrack


-(?)getFrameAsSampleBuf;
-(?)getFrameAtTime:(?)arg0 exactTimeframe;
-(id)initFromFile:(id)arg0 ;
-(id)initWithAsset:(id)arg0 ;
-(int)buildAssetReader;
-(int)getFrame:(struct CGImage **)arg0 ;
-(int)reset;
-(int)skipFrames:(unsigned int)arg0 ;
-(struct opaqueCMSampleBuffer *)nextSampleBuf;
-(void)dealloc;
-(void)fireReadahead;


@end


#endif