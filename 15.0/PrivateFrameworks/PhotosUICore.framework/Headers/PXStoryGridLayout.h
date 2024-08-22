// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYGRIDLAYOUT_H
#define PXSTORYGRIDLAYOUT_H

@class NSIndexSet;


#import "PXStoryModelTimelineLayout.h"

@interface PXStoryGridLayout : PXStoryModelTimelineLayout {
    NSIndexSet *_supportedResourceKindsForClipLayouts;
}




-(NSInteger)viewMode;
-(id)hitTestResultForSpriteIndex:(unsigned int)arg0 ;
-(id)initWithModel:(id)arg0 ;
-(id)supportedResourceKindsForClipLayouts;
-(void)configureClipLayout:(id)arg0 ;
-(void)handleModelChange:(NSUInteger)arg0 ;
-(void)referenceSizeDidChange;
-(void)updateClipsCornerRadius;
-(void)updateDisplayedTimeRange;
-(void)updateDisplayedTimeline;
-(void)updateDisplayedTimelineRect;
-(void)updatePresentedTimelineTransition;


@end


#endif