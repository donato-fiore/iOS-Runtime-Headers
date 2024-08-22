// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLEXAUDIOCOMPOSITIONITEM_H
#define FLEXAUDIOCOMPOSITIONITEM_H



#import "MovieCompositionItem.h"
#import "FlexAudioClip.h"

@interface FlexAudioCompositionItem : MovieCompositionItem

@property (retain, nonatomic) FlexAudioClip *clip;


-(id)audioTrackSegmentsForDestinationTime:(struct ? )arg0 ;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(struct ? )arg0 ;
-(id)initWithClip:(id)arg0 ;
-(id)segmentsForFMTrack:(id)arg0 andTimeRange:(struct ? )arg1 ;
-(id)trackInfoDict;


@end


#endif