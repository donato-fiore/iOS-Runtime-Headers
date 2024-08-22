// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EXTRACOMPOSITIONITEM_H
#define EXTRACOMPOSITIONITEM_H



#import "MovieCompositionItem.h"

@interface ExtraCompositionItem : MovieCompositionItem



-(BOOL)hasVideoContent;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(struct ? )arg0 ;
-(id)audioTrackSegmentsWithDestinationTime:(struct ? )arg0 ;
-(id)audioTrackSegmentsWithDestinationTime:(struct ? )arg0 paddedFromTime:(struct ? )arg1 ;
-(id)initWithClip:(id)arg0 ;
-(id)videoTrackSegmentsWithDestinationRange:(struct ? )arg0 ;


@end


#endif