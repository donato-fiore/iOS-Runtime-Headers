// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYSCRUBBERLAYOUT_H
#define PXSTORYSCRUBBERLAYOUT_H

@class NSNumber, NSDate, NSString;
@protocol PXChangeObserver, PXGViewSource;


#import "PXGSplitLayout.h"
#import "PXStoryScrubberContentLayout.h"
#import "PXStoryModel.h"
#import "PXStoryScrubberScrollLayout.h"
#import "PXStoryViewModel.h"

@interface PXStoryScrubberLayout : PXGSplitLayout <PXChangeObserver, PXGViewSource>

 {
    ? _updateFlags;
    BOOL _isUpdatingWantsVisible;
    unsigned int _focusGuideSpriteIndex;
}


@property (retain, nonatomic) NSNumber *alphaOverride; // ivar: _alphaOverride
@property (retain, nonatomic) PXStoryScrubberContentLayout *contentLayout; // ivar: _contentLayout
@property (retain, nonatomic) NSDate *currentSkipSegmentActionDate; // ivar: _currentSkipSegmentActionDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short focusGuideContentVersion; // ivar: _focusGuideContentVersion
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *lastScrubbedDate; // ivar: _lastScrubbedDate
@property (retain, nonatomic) PXStoryModel *mainModel; // ivar: _mainModel
@property (retain, nonatomic) PXStoryScrubberScrollLayout *scrollLayout; // ivar: _scrollLayout
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXStoryViewModel *viewModel; // ivar: _viewModel


-(BOOL)_shouldEnableFocusGuide;
-(BOOL)allowsRepeatedSublayoutsUpdates;
-(Class)viewClassForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)axSpriteIndexes;
-(id)init;
-(id)initWithViewModel:(id)arg0 ;
-(id)preferredFocusLayouts;
-(id)viewUserDataForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(void)_invalidateFocusGuide;
-(void)_invalidateLastScrubbedDate;
-(void)_invalidateMainModel;
-(void)_invalidateSkipSegmentActionDate;
-(void)_invalidateSublayouts;
-(void)_invalidateSublayoutsAlpha;
-(void)_invalidateVisibilityFraction;
-(void)_invalidateWantsVisible;
-(void)_loadSublayoutsIfNeeded;
-(void)_loadTVSublayoutsIfNeeded;
-(void)_updateFocusGuide;
-(void)_updateLastScrubbedDate;
-(void)_updateMainModel;
-(void)_updateSkipSegmentActionDate;
-(void)_updateSublayouts;
-(void)_updateSublayoutsAlpha;
-(void)_updateVisibilityFraction;
-(void)_updateWantsVisible;
-(void)alphaDidChange;
-(void)didUpdate;
-(void)getDetailedPresentedPlacement:(id)arg0 forItemReference:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)referenceDepthDidChange;
-(void)referenceSizeDidChange;
-(void)setDetailedPlacementOverride:(id)arg0 forItemReference:(id)arg1 ;
-(void)update;
-(void)willUpdate;


@end


#endif