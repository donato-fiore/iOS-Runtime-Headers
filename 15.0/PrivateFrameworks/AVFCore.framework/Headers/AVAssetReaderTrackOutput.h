// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVASSETREADERTRACKOUTPUT_H
#define AVASSETREADERTRACKOUTPUT_H

@class NSString, NSDictionary;


#import "AVAssetReaderOutput.h"
#import "AVAssetReaderTrackOutputInternal.h"
#import "AVAssetTrack.h"

@interface AVAssetReaderTrackOutput : AVAssetReaderOutput {
    AVAssetReaderTrackOutputInternal *_trackOutputInternal;
}


@property (readonly, nonatomic, getter=_isAttachedToAdaptor) BOOL attachedToAdaptor;
@property (copy, nonatomic) NSString *audioTimePitchAlgorithm;
@property (readonly, nonatomic) NSDictionary *outputSettings;
@property (readonly, nonatomic) AVAssetTrack *track;


+(id)assetReaderTrackOutputWithTrack:(id)arg0 outputSettings:(id)arg1 ;
-(BOOL)_enableTrackExtractionReturningError:(*id)arg0 ;
-(BOOL)_trimsSampleDurations;
-(BOOL)appliesPreferredTrackTransform;
-(id)_asset;
-(id)_attachedAdaptor;
-(id)_figAssetReaderExtractionOptions;
-(id)_formatDescriptions;
-(id)description;
-(id)init;
-(id)initWithTrack:(id)arg0 outputSettings:(id)arg1 ;
-(id)mediaType;
-(struct opaqueCMSampleBuffer *)_copyNextSampleBufferForAdaptor;
-(struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
-(unsigned int)_getUniformMediaSubtypeIfExists;
-(void)_setAttachedAdaptor:(id)arg0 ;
-(void)dealloc;
-(void)setAppliesPreferredTrackTransform:(BOOL)arg0 ;


@end


#endif