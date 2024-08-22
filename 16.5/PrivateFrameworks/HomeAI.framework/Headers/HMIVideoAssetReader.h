// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIVIDEOASSETREADER_H
#define HMIVIDEOASSETREADER_H

@class AVAsset, AVAssetReader, NSMutableArray, NSString;
@protocol HMFLogging;


#import "HMIVideoNode.h"

@interface HMIVideoAssetReader : HMIVideoNode <HMFLogging>

 {
    AVAsset *_asset;
    AVAssetReader *_assetReader;
    *__CFArray _trackSamples;
    NSMutableArray *_trackOutputs;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)_createOutputsForAsset:(id)arg0 readVideo:(BOOL)arg1 readAudio:(BOOL)arg2 ;
-(BOOL)checkAndSaveCrashReportWithData:(id)arg0 ;
-(id)initWithAsset:(id)arg0 ;
-(id)initWithAsset:(id)arg0 readVideoTrack:(BOOL)arg1 readAudioTrack:(BOOL)arg2 ;
-(struct opaqueCMSampleBuffer *)_copyNextSampleBufferFromTrackOutput:(id)arg0 ;
-(struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
-(struct opaqueCMSampleBuffer *)copyNextSampleBufferWithTrackIndexOutput:(*NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif