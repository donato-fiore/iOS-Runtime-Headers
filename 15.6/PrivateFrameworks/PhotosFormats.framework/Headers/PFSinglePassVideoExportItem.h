// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFSINGLEPASSVIDEOEXPORTITEM_H
#define PFSINGLEPASSVIDEOEXPORTITEM_H

@class NSArray, AVAssetReader, AVAssetWriter, NSFileHandle, NSURL, NSString, AVAsset, NSProgress, AVAssetReaderTrackOutput, AVAssetTrack, AVAssetWriterInput;
@protocol OS_dispatch_group, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PFVideoExportRangeCoordinator.h"
#import "PFProportionalIntegralController.h"
#import "PFSinglePassVideoExportItemStatistics.h"

@interface PFSinglePassVideoExportItem : NSObject

@property (copy, nonatomic) NSArray *additionalMetadata; // ivar: _additionalMetadata
@property (retain) NSArray *additionalReaderTrackOutputs; // ivar: _additionalReaderTrackOutputs
@property (retain) NSArray *additionalTracks; // ivar: _additionalTracks
@property (retain) NSArray *additionalWriterInputs; // ivar: _additionalWriterInputs
@property (retain) AVAssetReader *assetReader; // ivar: _assetReader
@property (retain) AVAssetWriter *assetWriter; // ivar: _assetWriter
@property (retain) PFVideoExportRangeCoordinator *availableRangeCoordinator; // ivar: _availableRangeCoordinator
@property (retain) PFProportionalIntegralController *bitRateController; // ivar: _bitRateController
@property *OpaqueVTCompressionSession compressionSession; // ivar: _compressionSession
@property (retain) NSFileHandle *conversionOutputFileHandle; // ivar: _conversionOutputFileHandle
@property NSInteger currentEncodingBitRate; // ivar: _currentEncodingBitRate
@property (retain) NSURL *destinationFileURL; // ivar: _destinationFileURL
@property (retain) NSString *identifier; // ivar: _identifier
@property (retain) AVAsset *inputAsset; // ivar: _inputAsset
@property (retain) NSObject<OS_dispatch_group> *inputReadingCompletionGroup; // ivar: _inputReadingCompletionGroup
@property BOOL maximizePowerEfficiency; // ivar: _maximizePowerEfficiency
@property NSUInteger minimumChunkLength; // ivar: _minimumChunkLength
@property BOOL needsCurrentEncodingBitRateUpdate; // ivar: _needsCurrentEncodingBitRateUpdate
@property NSUInteger outputFileLastEndOffset; // ivar: _outputFileLastEndOffset
@property (retain) NSObject<OS_dispatch_source> *outputFileSizeChangeSource; // ivar: _outputFileSizeChangeSource
@property (retain) NSProgress *progress; // ivar: _progress
@property BOOL shouldDeleteDestinationURLOnDeallocation; // ivar: _shouldDeleteDestinationURLOnDeallocation
@property NSUInteger state; // ivar: _state
@property (retain) NSObject<OS_dispatch_queue> *stateQueue; // ivar: _stateQueue
@property (retain) PFSinglePassVideoExportItemStatistics *statistics; // ivar: _statistics
@property (nonatomic) NSUInteger targetOutputFileSize; // ivar: _targetOutputFileSize
@property NSInteger targetOutputMediaDataSize; // ivar: _targetOutputMediaDataSize
@property (retain) AVAssetReaderTrackOutput *videoReaderTrackOutput; // ivar: _videoReaderTrackOutput
@property (retain) AVAssetTrack *videoTrack; // ivar: _videoTrack
@property (retain) AVAssetWriterInput *videoWriterInput; // ivar: _videoWriterInput


-(BOOL)preflight;
-(BOOL)setupConversionWithError:(*id)arg0 ;
-(BOOL)startConversionWithError:(*id)arg0 outputAvailableHandler:(id)arg1 ;
-(NSInteger)estimatedOutputBitRate;
-(id)bitRateControllerForTargetEncodingBitRate:(NSInteger)arg0 ;
-(id)init;
-(id)outputDataInRange:(struct _NSRange )arg0 waitUntilAvailableWithTimeout:(NSUInteger)arg1 error:(*id)arg2 ;
-(void)_cancel;
-(void)configureDroppableFrameRateForCompressionSession:(struct OpaqueVTCompressionSession *)arg0 inputWidth:(int)arg1 inputHeight:(int)arg2 ;
-(void)dealloc;
// -(void)notifyDataAvailableToHandler:(id)arg0 ignoreMinimumChunkLength:(unk)arg1  ;
-(void)processCompressedSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 presentationTimeStamp:(struct ? )arg1 ;
-(void)setupOutputFileSourceWithOutputAvailableHandler:(id)arg0 ;
-(void)startReadingInputAssetWithOutputAvailableHandler:(id)arg0 ;


@end


#endif