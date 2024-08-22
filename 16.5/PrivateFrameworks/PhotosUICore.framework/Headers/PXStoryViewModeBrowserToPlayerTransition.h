// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYVIEWMODEBROWSERTOPLAYERTRANSITION_H
#define PXSTORYVIEWMODEBROWSERTOPLAYERTRANSITION_H



#import "PXStoryViewModeFocusedClipsViewTransition.h"

@interface PXStoryViewModeBrowserToPlayerTransition : PXStoryViewModeFocusedClipsViewTransition



-(CGFloat)alphaForClipWithInfo:(struct ? )arg0 proposedAlpha:(CGFloat)arg1 inViewMode:(NSInteger)arg2 layout:(id)arg3 ;
-(CGFloat)dampingRatio;
-(CGFloat)springStiffness;
-(id)initWithDestinationTimelineLayoutSnapshot:(id)arg0 assetReference:(id)arg1 trackingClipIdentifier:(NSInteger)arg2 ;


@end


#endif