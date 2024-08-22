// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCASSETWRITER_H
#define RCASSETWRITER_H

@class AVAssetWriter, AVAssetWriterInput, NSMutableArray, NSError, AVAudioFormat, NSDictionary, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_group;



@interface RCAssetWriter : AVAssetWriter {
    id *_formatDescription;
    AVAssetWriterInput *_input;
    int _sampleRate;
    NSObject<OS_dispatch_queue> *_bufferQueue;
    NSObject<OS_dispatch_group> *_bufferGroup;
    NSMutableArray *_buffers;
    NSError *_appendError;
}


@property (readonly, nonatomic) AVAudioFormat *fileFormat; // ivar: _fileFormat
@property (readonly, nonatomic) NSInteger frameCount; // ivar: _frameCount
@property (readonly, nonatomic) AVAudioFormat *processingFormat; // ivar: _processingFormat
@property (readonly, nonatomic) NSDictionary *settings; // ivar: _settings
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(BOOL)_appendBufferOnQueue:(id)arg0 error:(*id)arg1 ;
-(BOOL)startWritingAudioFile:(*id)arg0 ;
-(BOOL)writeFromBuffer:(id)arg0 error:(*id)arg1 ;
-(id)initForWriting:(id)arg0 settings:(id)arg1 error:(*id)arg2 ;
-(void)finishWritingAudioFile:(id)arg0 ;


@end


#endif