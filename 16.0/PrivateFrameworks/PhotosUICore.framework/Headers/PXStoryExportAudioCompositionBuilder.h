// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYEXPORTAUDIOCOMPOSITIONBUILDER_H
#define PXSTORYEXPORTAUDIOCOMPOSITIONBUILDER_H

@class AVMutableComposition, NSMutableArray, AVMutableCompositionTrack, NSError;

#import <Foundation/Foundation.h>


@interface PXStoryExportAudioCompositionBuilder : NSObject

@property (retain, nonatomic) AVMutableComposition *audioComposition; // ivar: _audioComposition
@property (retain, nonatomic) NSMutableArray *audioMixParameters; // ivar: _audioMixParameters
@property (retain, nonatomic) AVMutableCompositionTrack *currentVideoHighlightCompositionTrack; // ivar: _currentVideoHighlightCompositionTrack
@property (retain, nonatomic) NSMutableArray *duckingAudioSegments; // ivar: _duckingAudioSegments
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) ? maximumDuration; // ivar: _maximumDuration
@property (nonatomic) float musicCompositionDefaultVolume; // ivar: _musicCompositionDefaultVolume
@property (retain, nonatomic) NSMutableArray *musicCompositionTracks; // ivar: _musicCompositionTracks
@property (retain, nonatomic) NSMutableArray *musicMixParameters; // ivar: _musicMixParameters
@property (nonatomic) ? outroDuration; // ivar: _outroDuration
@property (retain, nonatomic) AVMutableCompositionTrack *videoHighlightCompositionTrackA; // ivar: _videoHighlightCompositionTrackA
@property (retain, nonatomic) AVMutableCompositionTrack *videoHighlightCompositionTrackB; // ivar: _videoHighlightCompositionTrackB


-(BOOL)addAudioFromVideoHighlightAsset:(id)arg0 fromTime:(struct ? )arg1 atStoryTimeRange:(struct ? )arg2 volume:(float)arg3 fadeIn:(CGFloat)arg4 fadeOut:(CGFloat)arg5 shouldDuck:(BOOL)arg6 error:(*id)arg7 ;
-(BOOL)addMusicAsset:(id)arg0 withAudioMix:(id)arg1 preferredVolume:(float)arg2 error:(*id)arg3 ;
-(id)_insertAudioTrack:(id)arg0 fromTime:(struct ? )arg1 intoAudioCompositionTrack:(id)arg2 atTimeRange:(struct ? )arg3 error:(*id)arg4 ;
-(id)_mutableAudioMixParametersCreatedIfNeededForCompositionTrack:(id)arg0 ;
-(id)_mutableAudioMixParametersForCompositionTrack:(id)arg0 ;
-(id)initWithMaximumDuration:(struct ? )arg0 outroDuration:(struct ? )arg1 ;
-(void)_applyMusicDuckingAndFadeOut;
-(void)_applyVolumeRampsToVideoHilightAudioSegment:(id)arg0 inAudioCompositionTrack:(id)arg1 volume:(float)arg2 fadeIn:(CGFloat)arg3 fadeOut:(CGFloat)arg4 ;
-(void)finishAndWaitWithResultHandler:(id)arg0 ;


@end


#endif