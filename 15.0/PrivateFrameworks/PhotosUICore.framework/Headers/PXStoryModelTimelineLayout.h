// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYMODELTIMELINELAYOUT_H
#define PXSTORYMODELTIMELINELAYOUT_H

@class NSString;
@protocol PXChangeObserver;


#import "PXStoryTimelineLayout.h"
#import "PXStoryModel.h"

@interface PXStoryModelTimelineLayout : PXStoryTimelineLayout <PXChangeObserver>

 {
    ? _updateFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXStoryModel *model; // ivar: _model
@property (readonly) Class superclass;


-(id)init;
-(id)initWithModel:(id)arg0 ;
-(void)configureClipLayout:(id)arg0 ;
-(void)didUpdate;
-(void)handleModelChange:(NSUInteger)arg0 ;
-(void)invalidateClipsCornerRadius;
-(void)invalidateDisplayedRect;
-(void)invalidateDisplayedTimeRange;
-(void)invalidateDisplayedTimeline;
-(void)invalidatePresentedTimelineTransition;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)update;
-(void)updateClipsCornerRadius;
-(void)updateDisplayedTimeRange;
-(void)updateDisplayedTimeline;
-(void)updateDisplayedTimelineRect;
-(void)updatePresentedTimelineTransition;
-(void)willUpdate;


@end


#endif