// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYMUTABLEDUMMYTIMELINE_H
#define PXSTORYMUTABLEDUMMYTIMELINE_H



#import "PXStoryDummyTimeline.h"

@interface PXStoryMutableDummyTimeline : PXStoryDummyTimeline



-(NSInteger)addClipWithTimeRange:(struct ? )arg0 frame:(struct CGRect )arg1 resource:(id)arg2 playbackStyle:(NSInteger)arg3 transitionInfo:(struct ? )arg4 ;
-(NSInteger)addSegmentWithResources:(id)arg0 preferredDuration:(struct ? )arg1 compositionInfo:(struct ? )arg2 transitionInfo:(struct ? )arg3 ;
-(NSInteger)addSegmentWithTimeRange:(struct ? )arg0 compositionInfo:(struct ? )arg1 transitionInfo:(struct ? )arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif