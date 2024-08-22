// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIMOVWRITER_H
#define SIMOVWRITER_H

@class NSString, AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor;

#import <Foundation/Foundation.h>


@interface SIMovWriter : NSObject {
    NSString *_trackName;
    AVAssetWriter *_writer;
    AVAssetWriterInput *_writerInput;
    AVAssetWriterInputPixelBufferAdaptor *_inputAdaptor;
}




-(id)initWriterWithVideoURL:(id)arg0 frameSize:(struct CGSize )arg1 ;
-(void)dealloc;
-(void)finishRecording;
-(void)startRecording;
-(void)writeFrame:(struct __CVBuffer *)arg0 andTime:(struct ? )arg1 ;


@end


#endif