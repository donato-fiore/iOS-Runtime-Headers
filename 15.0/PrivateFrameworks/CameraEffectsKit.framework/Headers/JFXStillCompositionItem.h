// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JFXSTILLCOMPOSITIONITEM_H
#define JFXSTILLCOMPOSITIONITEM_H



#import "JFXMovieCompositionItem.h"

@interface JFXStillCompositionItem : JFXMovieCompositionItem



-(BOOL)hasVideoContent;
-(BOOL)needSilenceAtEnd;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(struct ? )arg0 ;
-(id)audioTrackSegmentsWithDestinationTime:(struct ? )arg0 ;
-(id)audioTrackSegmentsWithDestinationTime:(struct ? )arg0 paddedFromTime:(struct ? )arg1 ;
-(id)initWithClip:(id)arg0 timeScale:(int)arg1 ;
-(id)videoTrackSegmentsWithDestinationRange:(struct ? )arg0 ;


@end


#endif