// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFVIDEOSHARINGOPERATION_H
#define PFVIDEOSHARINGOPERATION_H

@class NSOperation, AVAsset, AVAudioMix, AVVideoComposition, NSArray, AVAssetExportSession, NSError, NSString, NSDate, CLLocation, NSURL;
@protocol OS_dispatch_queue;


#import "PFAssetAdjustments.h"

@interface PFVideoSharingOperation : NSOperation {
    AVAsset *_videoAsset;
    AVAudioMix *_audioMix;
    AVVideoComposition *_videoComposition;
    NSArray *_videoMetadata;
    NSObject<OS_dispatch_queue> *_externalIsolation;
    AVAssetExportSession *_exportSession;
    BOOL _beganExport;
    BOOL _operationSuccess;
    NSError *_operationError;
}


@property (retain, nonatomic, setter=_setAdjustments:) PFAssetAdjustments *_adjustments; // ivar: __adjustments
@property (copy, nonatomic) NSString *customAccessibilityLabel; // ivar: _customAccessibilityLabel
@property (copy, nonatomic) NSString *customCaption; // ivar: _customCaption
@property (copy, nonatomic) NSDate *customDate; // ivar: _customDate
@property (copy, nonatomic) CLLocation *customLocation; // ivar: _customLocation
@property (copy, nonatomic) NSString *exportFileType; // ivar: _exportFileType
@property (copy, nonatomic) NSString *exportPreset; // ivar: _exportPreset
@property (retain, nonatomic, setter=_setOperationError:) NSError *operationError;
@property (copy, nonatomic) NSURL *outputDirectoryURL; // ivar: _outputDirectoryURL
@property (copy, nonatomic) NSString *outputFilename; // ivar: _outputFilename
@property (readonly, nonatomic) float progress;
@property (readonly, copy, nonatomic) NSURL *resultingFileURL; // ivar: _resultingFileURL
@property (nonatomic) BOOL shouldStripAccessibilityDescription; // ivar: _shouldStripAccessibilityDescription
@property (nonatomic) BOOL shouldStripCaption; // ivar: _shouldStripCaption
@property (nonatomic) BOOL shouldStripLocation; // ivar: _shouldStripLocation
@property (nonatomic) BOOL shouldStripMetadata; // ivar: _shouldStripMetadata
@property (nonatomic, setter=_setSuccess:) BOOL success;
@property (copy, nonatomic, setter=_setVideoURL:) NSURL *videoURL; // ivar: _videoURL


+(id)operationErrorWithCode:(NSInteger)arg0 underlyingError:(id)arg1 withDescription:(id)arg2 ;
-(BOOL)_ensureVideoProperties;
-(BOOL)_runExport;
-(id)initWithVideoURL:(id)arg0 adjustmentData:(id)arg1 ;
-(void)_validateMetadata;
-(void)cancel;
-(void)main;


@end


#endif