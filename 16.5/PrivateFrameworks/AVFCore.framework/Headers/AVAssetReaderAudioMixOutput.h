// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVASSETREADERAUDIOMIXOUTPUT_H
#define AVASSETREADERAUDIOMIXOUTPUT_H

@class NSDictionary, NSString, NSArray;


#import "AVAssetReaderOutput.h"
#import "AVAssetReaderAudioMixOutputInternal.h"
#import "AVAudioMix.h"

@interface AVAssetReaderAudioMixOutput : AVAssetReaderOutput {
    AVAssetReaderAudioMixOutputInternal *_audioMixOutputInternal;
}


@property (copy, nonatomic) AVAudioMix *audioMix;
@property (readonly, nonatomic) NSDictionary *audioSettings;
@property (copy, nonatomic) NSString *audioTimePitchAlgorithm;
@property (readonly, nonatomic) NSArray *audioTracks;


+(id)assetReaderAudioMixOutputWithAudioTracks:(id)arg0 audioSettings:(id)arg1 ;
-(BOOL)_enableTrackExtractionReturningError:(*id)arg0 ;
-(id)_asset;
-(id)_audioTimePitchAlgorithmForTrack:(id)arg0 ;
-(id)_audioVolumeCurveForTrack:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAudioTracks:(id)arg0 audioSettings:(id)arg1 ;
-(id)mediaType;
-(struct opaqueMTAudioProcessingTap *)_audioTapProcessorForTrack:(id)arg0 ;
-(void)_setAudioTapProcessor:(struct opaqueMTAudioProcessingTap *)arg0 forTrack:(id)arg1 ;
-(void)_setAudioVolumeCurve:(id)arg0 forTrack:(id)arg1 ;
-(void)dealloc;


@end


#endif