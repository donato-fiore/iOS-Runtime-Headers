// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMUSICTRACK_H
#define AVMUSICTRACK_H


#import <Foundation/Foundation.h>

#import "AVAudioUnit.h"

@interface AVMusicTrack : NSObject {
    *void _impl;
}


@property (retain, nonatomic) AVAudioUnit *destinationAudioUnit;
@property (nonatomic) unsigned int destinationMIDIEndpoint;
@property (nonatomic) CGFloat lengthInBeats;
@property (nonatomic) CGFloat lengthInSeconds;
@property (nonatomic) _AVBeatRange loopRange;
@property (nonatomic, getter=isLoopingEnabled) BOOL loopingEnabled;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (nonatomic) NSInteger numberOfLoops;
@property (nonatomic) CGFloat offsetTime;
@property (nonatomic, getter=isSoloed) BOOL soloed;
@property (readonly, nonatomic) NSUInteger timeResolution;
@property BOOL usesAutomatedParameters;


-(NSUInteger)index;
-(id)createEventIterator;
-(id)initWithImpl:(struct MusicTrackImpl *)arg0 ;
-(struct OpaqueMusicTrack *)track;
-(void)addEvent:(id)arg0 atBeat:(CGFloat)arg1 ;
-(void)clearEventsInRange:(struct _AVBeatRange )arg0 ;
-(void)copyAndMergeEventsInRange:(struct _AVBeatRange )arg0 fromTrack:(id)arg1 mergeAtBeat:(CGFloat)arg2 ;
-(void)copyEventsInRange:(struct _AVBeatRange )arg0 fromTrack:(id)arg1 insertAtBeat:(CGFloat)arg2 ;
-(void)cutEventsInRange:(struct _AVBeatRange )arg0 ;
-(void)dealloc;
-(void)doAddAUPresetEvent:(id)arg0 atBeat:(CGFloat)arg1 ;
-(void)doAddExtendedNoteOnEvent:(id)arg0 atBeat:(CGFloat)arg1 ;
-(void)doAddExtendedTempoEvent:(id)arg0 atBeat:(CGFloat)arg1 ;
-(void)doAddMIDIChannelEvent:(id)arg0 atBeat:(CGFloat)arg1 ;
-(void)doAddMIDIMetaEvent:(id)arg0 atBeat:(CGFloat)arg1 ;
-(void)doAddMIDINoteEvent:(id)arg0 atBeat:(CGFloat)arg1 ;
-(void)doAddMIDISysexEvent:(id)arg0 atBeat:(CGFloat)arg1 ;
-(void)doAddParameterEvent:(id)arg0 atBeat:(CGFloat)arg1 ;
-(void)doAddUserEvent:(id)arg0 atBeat:(CGFloat)arg1 ;
-(void)enumerateEventsInRange:(struct _AVBeatRange )arg0 usingBlock:(id)arg1 ;
-(void)moveEventsInRange:(struct _AVBeatRange )arg0 byAmount:(CGFloat)arg1 ;


@end


#endif