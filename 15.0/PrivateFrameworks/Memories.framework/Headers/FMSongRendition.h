// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FMSONGRENDITION_H
#define FMSONGRENDITION_H

@class NSDictionary;
@protocol FlexSongProtocol;

#import <Foundation/Foundation.h>

#import "FMTrack.h"

@interface FMSongRendition : NSObject

@property (nonatomic) NSInteger duration; // ivar: _duration
@property (nonatomic) NSInteger durationOfMusic; // ivar: _durationOfMusic
@property (nonatomic) NSInteger durationOfSilence; // ivar: _durationOfSilence
@property (readonly, nonatomic) NSDictionary *options; // ivar: _options
@property (retain, nonatomic) NSObject<FlexSongProtocol> *song; // ivar: _song
@property (retain, nonatomic) FMTrack *trackA; // ivar: _trackA
@property (retain, nonatomic) FMTrack *trackB; // ivar: _trackB


+(id)coalesceMixParamsA:(id)arg0 withMixParamsB:(id)arg1 ;
-(CGFloat)_maxPeakAndLoudness:(*CGFloat)arg0 missingPeakValueCount:(*int)arg1 missingLoudnessCount:(*int)arg2 ;
-(id)_buildOutroFadeoutMixParams;
-(id)avCompositionWithAudioMix:(*id)arg0 includeShortenedOutroFadeOut:(BOOL)arg1 ;
-(id)description;
-(id)initWithSong:(id)arg0 andOptions:(id)arg1 ;
-(id)timedMetadataItemsWithIdentifier:(id)arg0 ;


@end


#endif