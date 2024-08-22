// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPANIMATEDIMAGETRANSCODER_H
#define LPANIMATEDIMAGETRANSCODER_H

@class NSURL, AVAssetWriterInputPixelBufferAdaptor, AVAssetWriter, AVAssetWriterInput;

#import <Foundation/Foundation.h>

#import "LPImage.h"

@interface LPAnimatedImageTranscoder : NSObject {
    LPImage *_sourceImage;
    id *_completionHandler;
    *CGImageSource _imageSource;
    NSURL *_outputURL;
    NSUInteger _frameCount;
    NSUInteger _currentFrame;
    CGFloat _nextFrameTime;
    AVAssetWriterInputPixelBufferAdaptor *_adaptor;
    AVAssetWriter *_writer;
    AVAssetWriterInput *_input;
    BOOL _stopEncoding;
    BOOL _hasReadyForDataObserver;
    unsigned int _loggingID;
}




+(id)encodeQueue;
-(id)initWithAnimatedImage:(id)arg0 ;
-(void)_transcodeWithCompletionHandler:(id)arg0 ;
-(void)cancel;
-(void)encodeNextFrame;
-(void)encodeUntilNotReadyForMoreMediaData;
-(void)failed;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeReadyForDataObserverIfNeeded;
-(void)transcodeWithCompletionHandler:(id)arg0 ;


@end


#endif