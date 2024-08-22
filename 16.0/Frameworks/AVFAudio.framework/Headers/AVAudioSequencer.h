// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVAUDIOSEQUENCER_H
#define AVAUDIOSEQUENCER_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "AVMusicTrack.h"

@interface AVAudioSequencer : NSObject {
    *void _impl;
}


@property (nonatomic) CGFloat currentPositionInBeats;
@property (nonatomic) CGFloat currentPositionInSeconds;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic) float rate;
@property (readonly, nonatomic) AVMusicTrack *tempoTrack;
@property (readonly, nonatomic) NSArray *tracks;
@property (readonly, nonatomic) NSDictionary *userInfo;


-(BOOL)loadFromData:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)loadFromURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)removeTrack:(id)arg0 ;
-(BOOL)startAndReturnError:(*id)arg0 ;
-(BOOL)writeToURL:(id)arg0 SMPTEResolution:(NSInteger)arg1 replaceExisting:(BOOL)arg2 error:(*id)arg3 ;
-(CGFloat)beatsForHostTime:(NSUInteger)arg0 error:(*id)arg1 ;
-(CGFloat)beatsForSeconds:(CGFloat)arg0 ;
-(CGFloat)secondsForBeats:(CGFloat)arg0 ;
-(NSUInteger)hostTimeForBeats:(CGFloat)arg0 error:(*id)arg1 ;
-(NSUInteger)numberOfTracks;
-(id)createAndAppendTrack;
-(id)dataWithSMPTEResolution:(NSInteger)arg0 error:(*id)arg1 ;
-(id)getTempoTrack;
-(id)init;
-(id)initWithAudioEngine:(id)arg0 ;
-(id)initWithImpl:(*void)arg0 ;
-(id)trackArray;
-(void)cleanTracks;
-(void)dealloc;
-(void)prepareToPlay;
-(void)reverseEvents;
-(void)setTrackArray:(id)arg0 ;
-(void)setUserCallback:(id)arg0 ;
-(void)setupTrackArray;
-(void)setupTracks;
-(void)stop;


@end


#endif