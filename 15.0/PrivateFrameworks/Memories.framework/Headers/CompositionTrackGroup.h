// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COMPOSITIONTRACKGROUP_H
#define COMPOSITIONTRACKGROUP_H

@class AVMutableAudioMixInputParameters, NSArray, AVMutableCompositionTrack, AVMutableComposition, NSMutableArray, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface CompositionTrackGroup : NSObject {
    ? m_cursorForMovieAudio;
    BOOL m_videoTrackInUse;
    BOOL m_shouldAddVolumePointsAsWorkaround;
}


@property (readonly, nonatomic) int actualVideoTrackID;
@property (retain, nonatomic) *opaqueCMFormatDescription audioFormatDescription; // ivar: _audioFormatDescription
@property (retain, nonatomic) AVMutableAudioMixInputParameters *audioParameters; // ivar: m_audioInputParameters
@property (readonly, nonatomic) NSArray *audioSegments; // ivar: m_audioSegments
@property (retain, nonatomic) AVMutableCompositionTrack *audioTrack; // ivar: m_audioTrack
@property (retain, nonatomic) AVMutableComposition *composition; // ivar: _composition
@property (readonly, nonatomic) ? cursor; // ivar: m_cursor
@property (readonly, nonatomic) ? cursorAtLastVideoInsertion; // ivar: m_cursorAtLastVideoInsertion
@property (retain, nonatomic) NSMutableArray *extraAudioTrackGroups; // ivar: _extraAudioTrackGroups
@property (nonatomic) ? fadeOutDuration; // ivar: m_fadeOutDuration
@property (nonatomic) ? fadeOutStart; // ivar: m_fadeOutStart
@property (retain, nonatomic) NSDictionary *fmTrackInfoDict; // ivar: m_flexTrackInfoDict
@property (nonatomic) BOOL isExporting; // ivar: _isExporting
@property (nonatomic) BOOL isFlexMusic; // ivar: _isFlexMusic
@property (copy, nonatomic) NSString *label; // ivar: m_groupLabel
@property (nonatomic) ? lastRampToZeroEnd; // ivar: _lastRampToZeroEnd
@property (readonly, nonatomic) NSArray *metaDataVideoSegments; // ivar: m_metaDataVideoSegments
@property (retain, nonatomic) AVMutableCompositionTrack *metaDataVideoTrack; // ivar: m_metaDataVideoTrack
@property (retain, nonatomic) NSString *preferredAudioTimePitchAlgorithm; // ivar: _preferredAudioTimePitchAlgorithm
@property (nonatomic) BOOL seenMoreThanOneASBD; // ivar: _seenMoreThanOneASBD
@property (nonatomic) BOOL seenSpeedClip; // ivar: _seenSpeedClip
@property (nonatomic) ? timeOfLastRequest; // ivar: m_timeOfLastRequest
@property (nonatomic) ? timeOfLastVolumeChange; // ivar: m_timeOfLastVolumeChange
@property (nonatomic) NSString *timePitchAlgorithm; // ivar: _timePitchAlgorithm
@property (readonly, nonatomic) int usableVideoTrackID;
@property (readonly, nonatomic) NSArray *videoSegments; // ivar: m_videoSegments
@property (retain, nonatomic) AVMutableCompositionTrack *videoTrack; // ivar: m_videoTrack
@property (nonatomic) float volumeAtLastVolumeChange; // ivar: m_volumeAtLastVolumeChange
@property (nonatomic) float volumeChangePending; // ivar: m_volumeChangePending


+(id)visualDescriptionForSegments:(id)arg0 ;
-(BOOL)asbd:(struct opaqueCMFormatDescription *)arg0 isEqualTo:(struct opaqueCMFormatDescription *)arg1 ;
-(BOOL)commitPendingVolumeToTime:(struct ? )arg0 ;
-(BOOL)containsAudioSegments;
-(BOOL)containsSegments;
-(BOOL)containsVideoSegments;
-(BOOL)requestVolume:(float)arg0 atTime:(struct ? )arg1 ;
-(BOOL)requestVolumeRampFromStartVolume:(float)arg0 toEndVolume:(float)arg1 timeRange:(struct ? )arg2 ;
-(BOOL)requestVolumeRampFromStartVolume:(float)arg0 toEndVolume:(float)arg1 timeRange:(struct ? )arg2 fillEmptySegment:(BOOL)arg3 ;
-(BOOL)shouldAddVolumePointsAsWorkaround;
-(BOOL)shouldCommitVolume:(float)arg0 ;
-(BOOL)validate;
-(float)linearFadeOutValueForTime:(struct ? )arg0 ;
-(float)setFadedVolumeRampFromStartVolume:(float)arg0 toEndVolume:(float)arg1 timeRange:(struct ? )arg2 ;
-(id)apply_version2_to_track:(id)arg0 withSegments:(id)arg1 assets:(id)arg2 ;
-(id)description;
-(id)initWithLabel:(id)arg0 ;
-(void)_updateIsFlexMusic:(id)arg0 ;
-(void)addExtraAudioTrackGroup:(id)arg0 ;
-(void)apply:(id)arg0 ;
-(void)applyAudioMixParameters:(id)arg0 ;
-(void)applyCompositionItem:(id)arg0 ;
-(void)applyCompositionItem:(id)arg0 atTime:(struct ? )arg1 ;
-(void)applyCompositionItem:(id)arg0 atTime:(struct ? )arg1 videoOnly:(BOOL)arg2 ;
-(void)applyCompositionItem:(id)arg0 videoOnly:(BOOL)arg1 ;
-(void)applyCompositionItemAsLoopedAudio:(id)arg0 forTimeRange:(struct ? )arg1 ;
-(void)applyFlexAudioMix:(id)arg0 ;
-(void)applyPaddingToTime:(struct ? )arg0 ;
-(void)apply_version1;
-(void)apply_version2:(id)arg0 ;
-(void)commitVolumeRampFromStartVolume:(float)arg0 toEndVolume:(float)arg1 timeRange:(struct ? )arg2 ;
-(void)dealloc;
-(void)fixAVFoundationsMistake;
-(void)markDirty;
-(void)removeExtraAudioTrackGroups;
-(void)resetVolumeState;


@end


#endif