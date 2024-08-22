// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVASSETEXPORTSESSION_H
#define AVASSETEXPORTSESSION_H

@class NSError, NSString, NSURL;

#import <Foundation/Foundation.h>

#import "AVAssetExportSessionInternal.h"
#import "AVAsset.h"

@interface AVAssetExportSession : NSObject {
    AVAssetExportSessionInternal *_exportSession;
}


@property (readonly, retain, nonatomic) AVAsset *asset;
@property (readonly, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *outputFileType;
@property (copy, nonatomic) NSURL *outputURL;
@property (readonly, nonatomic) NSString *presetName;
@property (readonly, nonatomic) float progress;
@property (nonatomic) BOOL shouldOptimizeForNetworkUse;
@property (readonly, nonatomic) NSInteger status;


+(NSInteger)estimatedOutputFileLengthForPreset:(id)arg0 duration:(struct ? )arg1 properties:(id)arg2 ;
+(id)allExportPresets;
+(id)exportPresetsCompatibleWithAsset:(id)arg0 ;
+(id)exportSessionWithAsset:(id)arg0 presetName:(id)arg1 ;
+(id)keyPathsForValuesAffectingEstimatedOutputFileLength;
+(struct ? )maximumDurationForPreset:(id)arg0 properties:(id)arg1 ;
+(void)determineCompatibilityOfExportPreset:(id)arg0 withAsset:(id)arg1 outputFileType:(id)arg2 completionHandler:(id)arg3 ;
-(BOOL)canPerformMultiplePassesOverSourceMediaData;
-(BOOL)maximizePowerEfficiency;
-(BOOL)preserveSyncFrames;
-(NSInteger)estimatedOutputFileLength;
-(NSInteger)fileLengthLimit;
-(id)audioMix;
-(id)audioTimePitchAlgorithm;
-(id)customVideoCompositor;
-(id)description;
-(id)directoryForTemporaryFiles;
-(id)init;
-(id)initWithAsset:(id)arg0 presetName:(id)arg1 ;
-(id)metadata;
-(id)metadataItemFilter;
-(id)supportedFileTypes;
-(id)videoComposition;
-(id)videoFrameRateConversionAlgorithm;
-(struct ? )maxDuration;
-(struct ? )minVideoFrameDuration;
-(struct ? )timeRange;
-(void)AVExportSessionExportAsynchronouslyCompletionHandler;
-(void)cancelExport;
-(void)dealloc;
-(void)determineCompatibleFileTypesWithCompletionHandler:(id)arg0 ;
-(void)estimateMaximumDurationWithCompletionHandler:(id)arg0 ;
-(void)estimateOutputFileLengthWithCompletionHandler:(id)arg0 ;
-(void)exportAsynchronouslyWithCompletionHandler:(id)arg0 ;
-(void)setAudioMix:(id)arg0 ;
-(void)setAudioTimePitchAlgorithm:(id)arg0 ;
-(void)setCanPerformMultiplePassesOverSourceMediaData:(BOOL)arg0 ;
-(void)setDirectoryForTemporaryFiles:(id)arg0 ;
-(void)setFileLengthLimit:(NSInteger)arg0 ;
-(void)setMaximizePowerEfficiency:(BOOL)arg0 ;
-(void)setMetadata:(id)arg0 ;
-(void)setMetadataItemFilter:(id)arg0 ;
-(void)setMinVideoFrameDuration:(struct ? )arg0 ;
-(void)setPreserveSyncFrames:(BOOL)arg0 ;
-(void)setTimeRange:(struct ? )arg0 ;
-(void)setVideoComposition:(id)arg0 ;
-(void)setVideoFrameRateConversionAlgorithm:(id)arg0 ;


@end


#endif