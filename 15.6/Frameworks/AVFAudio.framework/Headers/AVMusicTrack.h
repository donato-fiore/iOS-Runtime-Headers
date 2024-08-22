// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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


-(BOOL)usesAutomatedParameters;
-(NSUInteger)index;
-(id)initWithImpl:(struct MusicTrackImpl *)arg0 ;
-(struct OpaqueMusicTrack *)track;
-(void)dealloc;
-(void)setUsesAutomatedParameters:(BOOL)arg0 ;


@end


#endif