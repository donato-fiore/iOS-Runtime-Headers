// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYSCRUBBERLAYOUT_H
#define PXSTORYSCRUBBERLAYOUT_H

@class NSNumber, NSDate, NSString;
@protocol PXChangeObserver;


#import "PXGSplitLayout.h"
#import "PXStoryScrubberContentLayout.h"
#import "PXStoryScrubberScrollLayout.h"
#import "PXStoryViewModel.h"

@interface PXStoryScrubberLayout : PXGSplitLayout <PXChangeObserver>

 {
    ? _updateFlags;
    BOOL _isUpdatingWantsVisible;
}


@property (retain, nonatomic) NSNumber *alphaOverride; // ivar: _alphaOverride
@property (retain, nonatomic) PXStoryScrubberContentLayout *contentLayout; // ivar: _contentLayout
@property (retain, nonatomic) NSDate *currentSkipSegmentActionDate; // ivar: _currentSkipSegmentActionDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *lastScrubbedDate; // ivar: _lastScrubbedDate
@property (retain, nonatomic) PXStoryScrubberScrollLayout *scrollLayout; // ivar: _scrollLayout
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXStoryViewModel *viewModel; // ivar: _viewModel


-(BOOL)allowsRepeatedSublayoutsUpdates;
-(id)init;
-(id)initWithViewModel:(id)arg0 ;
-(void)_invalidateLastScrubbedDate;
-(void)_invalidateSkipSegmentActionDate;
-(void)_invalidateSublayouts;
-(void)_invalidateSublayoutsAlpha;
-(void)_invalidateVisibilityFraction;
-(void)_invalidateWantsVisible;
-(void)_updateLastScrubbedDate;
-(void)_updateSkipSegmentActionDate;
-(void)_updateSublayouts;
-(void)_updateSublayoutsAlpha;
-(void)_updateVisibilityFraction;
-(void)_updateWantsVisible;
-(void)alphaDidChange;
-(void)didUpdate;
-(void)getDetailedPresentedPlacement:(id)arg0 forItemReference:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)setDetailedPlacementOverride:(id)arg0 forItemReference:(id)arg1 ;
-(void)update;
-(void)willUpdate;


@end


#endif