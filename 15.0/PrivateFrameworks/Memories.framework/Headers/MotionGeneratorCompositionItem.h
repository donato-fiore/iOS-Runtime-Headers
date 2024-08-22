// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MOTIONGENERATORCOMPOSITIONITEM_H
#define MOTIONGENERATORCOMPOSITIONITEM_H



#import "MovieCompositionItem.h"

@interface MotionGeneratorCompositionItem : MovieCompositionItem



-(BOOL)hasVideoContent;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(struct ? )arg0 ;
-(id)audioTrackSegmentsWithDestinationTime:(struct ? )arg0 ;
-(id)initWithClip:(id)arg0 ;
-(id)videoTrackSegmentsWithDestinationRange:(struct ? )arg0 ;


@end


#endif