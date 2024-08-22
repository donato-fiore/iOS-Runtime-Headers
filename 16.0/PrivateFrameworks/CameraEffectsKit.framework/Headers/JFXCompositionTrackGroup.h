// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JFXCOMPOSITIONTRACKGROUP_H
#define JFXCOMPOSITIONTRACKGROUP_H

@class AVMutableAudioMixInputParameters, NSMutableArray, AVMutableCompositionTrack, AVMutableComposition, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface JFXCompositionTrackGroup : NSObject

@property (readonly, nonatomic) int actualVideoTrackID;
@property (retain, nonatomic) *opaqueCMFormatDescription audioFormatDescription; // ivar: _audioFormatDescription
@property (retain, nonatomic) AVMutableAudioMixInputParameters *audioParameters; // ivar: _audioParameters
@property (retain, nonatomic) NSMutableArray *audioSegments; // ivar: _audioSegments
@property (retain, nonatomic) AVMutableCompositionTrack *audioTrack; // ivar: _audioTrack
@property (retain, nonatomic) AVMutableComposition *composition; // ivar: _composition
@property (readonly, nonatomic) ? cursor; // ivar: _cursor
@property (readonly, nonatomic) ? cursorAtLastVideoInsertion; // ivar: _cursorAtLastVideoInsertion
@property (readonly, nonatomic) ? cursorForMovieAudio; // ivar: _cursorForMovieAudio
@property (retain, nonatomic) NSMutableArray *extraAudioTrackGroups; // ivar: _extraAudioTrackGroups
@property (nonatomic) ? fadeOutDuration; // ivar: _fadeOutDuration
@property (nonatomic) ? fadeOutStart; // ivar: _fadeOutStart
@property (retain, nonatomic) NSDictionary *fmTrackInfoDict; // ivar: _fmTrackInfoDict
@property (nonatomic) BOOL isExporting; // ivar: _isExporting
@property (nonatomic) BOOL isFlexMusic; // ivar: _isFlexMusic
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) ? lastRampToZeroEnd; // ivar: _lastRampToZeroEnd
@property (retain, nonatomic) NSString *preferredAudioTimePitchAlgorithm; // ivar: _preferredAudioTimePitchAlgorithm
@property (nonatomic) BOOL seenMoreThanOneASBD; // ivar: _seenMoreThanOneASBD
@property (nonatomic) BOOL seenSpeedClip; // ivar: _seenSpeedClip
@property (nonatomic) ? timeOfLastRequest; // ivar: _timeOfLastRequest
@property (nonatomic) ? timeOfLastVolumeChange; // ivar: _timeOfLastVolumeChange
@property (nonatomic) NSString *timePitchAlgorithm; // ivar: _timePitchAlgorithm
@property (nonatomic) int timeScale; // ivar: _timeScale
@property (readonly, nonatomic) int usableVideoTrackID;
@property (retain, nonatomic) NSMutableArray *videoSegments; // ivar: _videoSegments
@property (retain, nonatomic) AVMutableCompositionTrack *videoTrack; // ivar: _videoTrack
@property (nonatomic) BOOL videoTrackInUse; // ivar: _videoTrackInUse
@property (nonatomic) float volumeAtLastVolumeChange; // ivar: _volumeAtLastVolumeChange
@property (nonatomic) float volumeChangePending; // ivar: _volumeChangePending


+(id)visualDescriptionForSegments:(id)arg0 ;
-(BOOL)asbd:(struct opaqueCMFormatDescription *)arg0 isEqualTo:(struct opaqueCMFormatDescription *)arg1 ;
-(BOOL)commitPendingVolumeToTime:(struct ? )arg0 ;
-(BOOL)containsAudioSegments;
-(BOOL)containsSegments;
-(BOOL)containsVideoSegments;
-(BOOL)requestVolume:(float)arg0 atTime:(struct ? )arg1 ;
-(BOOL)requestVolumeRampFromStartVolume:(float)arg0 toEndVolume:(float)arg1 timeRange:(struct ? )arg2 ;
-(BOOL)requestVolumeRampFromStartVolume:(float)arg0 toEndVolume:(float)arg1 timeRange:(struct ? )arg2 fillEmptySegment:(BOOL)arg3 ;
-(BOOL)shouldCommitVolume:(float)arg0 ;
-(BOOL)validate;
-(float)linearFadeOutValueForTime:(struct ? )arg0 ;
-(float)setFadedVolumeRampFromStartVolume:(float)arg0 toEndVolume:(float)arg1 timeRange:(struct ? )arg2 ;
-(id)applyToTrack:(id)arg0 withSegments:(id)arg1 assets:(id)arg2 ;
-(id)description;
-(id)initWithLabel:(id)arg0 timeScale:(int)arg1 ;
-(void)addExtraAudioTrackGroup:(id)arg0 ;
-(void)apply:(id)arg0 ;
-(void)applyAudioMixParameters:(id)arg0 ;
-(void)applyCompositionItem:(id)arg0 ;
-(void)applyCompositionItem:(id)arg0 atTime:(struct ? )arg1 ;
-(void)applyCompositionItem:(id)arg0 atTime:(struct ? )arg1 skipAudio:(BOOL)arg2 ;
-(void)applyCompositionItem:(id)arg0 skipAudio:(BOOL)arg1 ;
-(void)applyCompositionItemAsLoopedAudio:(id)arg0 forTimeRange:(struct ? )arg1 ;
-(void)applyPaddingToTime:(struct ? )arg0 ;
-(void)commitVolumeRampFromStartVolume:(float)arg0 toEndVolume:(float)arg1 timeRange:(struct ? )arg2 ;
-(void)dealloc;
-(void)markDirty;
-(void)removeExtraAudioTrackGroups;
-(void)resetVolumeState;


@end


#endif