// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFAVREADERWRITER_H
#define PFAVREADERWRITER_H

@class AVAssetReader, AVAssetWriter, NSArray, AVAsset, NSString, AVAssetWriterInput, NSURL;
@protocol PFRWSampleBufferChannelDelegate, OS_dispatch_queue, PFAVReaderWriterAdjustDelegate;

#import <Foundation/Foundation.h>


@interface PFAVReaderWriter : NSObject <PFRWSampleBufferChannelDelegate>

 {
    NSObject<OS_dispatch_queue> *_serializationQueue;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    AVAssetReader *assetReader;
    AVAssetWriter *assetWriter;
    NSArray *videoChannels;
    NSArray *passthroughChannels;
    BOOL cancelled;
    id *_progressBlock;
    id *_completionBlock;
    BOOL _writeInProgress;
    ? _stillImagetime;
}


@property (copy, nonatomic) AVAsset *asset; // ivar: _asset
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PFAVReaderWriterAdjustDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AVAssetWriterInput *metadataInput; // ivar: _metadataInput
@property (copy, nonatomic) NSURL *outputURL; // ivar: _outputURL
@property (readonly) Class superclass;
@property (nonatomic) ? timeRange; // ivar: _timeRange


-(BOOL)setUpReaderAndWriterReturningError:(*id)arg0 ;
-(BOOL)startReadingAndWritingReturningError:(*id)arg0 ;
-(id)init;
-(id)initWithAsset:(id)arg0 ;
-(id)initWithAsset:(id)arg0 stillImageTime:(struct ? )arg1 ;
-(void)_didLoadAVAssetValues;
-(void)cancel;
-(void)readingAndWritingDidFinishSuccessfully:(BOOL)arg0 withError:(id)arg1 ;
-(void)sampleBufferChannel:(id)arg0 didReadSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)sampleBufferChannel:(id)arg0 didReadSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 andMadeWriteSampleBuffer:(struct __CVBuffer *)arg2 ;
// -(void)writeToURL:(id)arg0 progress:(id)arg1 completion:(unk)arg2  ;


@end


#endif