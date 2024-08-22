// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYFEEDSECTIONCONTENTLAYOUT_H
#define PXSTORYFEEDSECTIONCONTENTLAYOUT_H

@class NSString;
@protocol PXGSublayoutProvider, PXGLayoutContentSource, PXChangeObserver, PXTapToRadarDiagnosticProvider, PXStoryFeedItemLayoutFactory;


#import "PXGCompositeLayout.h"
#import "PXSectionedDataSourceChangeDetails.h"
#import "PXSectionedDataSource.h"
#import "PXStoryFeedAutoplayController.h"
#import "PXStoryFeedSublayoutComposition.h"
#import "PXStoryFeedViewModel.h"

@interface PXStoryFeedSectionContentLayout : PXGCompositeLayout <PXGSublayoutProvider, PXGLayoutContentSource, PXChangeObserver, PXTapToRadarDiagnosticProvider>

 {
    ? _updateFlags;
    PXSectionedDataSourceChangeDetails *_lastChangeDetails;
    PXSectionedDataSource *_presentedDataSource;
    ? _itemLayoutFactoryRespondsTo;
}


@property (readonly, nonatomic) PXStoryFeedAutoplayController *autoplayController; // ivar: _autoplayController
@property (readonly, nonatomic) PXStoryFeedSublayoutComposition *composition;
@property (readonly, nonatomic) PXSectionedDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PXStoryFeedItemLayoutFactory> *itemLayoutFactory; // ivar: _itemLayoutFactory
@property (readonly, nonatomic) PXSimpleIndexPath sectionIndexPath; // ivar: _sectionIndexPath
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXStoryFeedViewModel *viewModel; // ivar: _viewModel


-(BOOL)_handlePrimaryActionForItemAtIndex:(NSInteger)arg0 ;
-(BOOL)axCanFocusOnSpriteAtIndex:(unsigned int)arg0 ;
-(BOOL)axShouldSearchLeafsInSubgroups;
-(NSInteger)itemForSpriteIndex:(unsigned int)arg0 ;
-(NSInteger)scrollableAxis;
-(NSInteger)sublayoutIndexForObjectReference:(id)arg0 options:(NSUInteger)arg1 updatedObjectReference:(*id)arg2 ;
-(id)_handleTouchForItemAtIndex:(SEL)arg0 ;
-(id)axSpriteIndexes;
-(id)axSpriteIndexesInRect:(struct CGRect )arg0 ;
-(id)hitTestResultForSpriteIndex:(unsigned int)arg0 ;
-(id)init;
-(id)initWithViewModel:(id)arg0 dataSource:(id)arg1 sectionIndexPath:(struct PXSimpleIndexPath )arg2 ;
-(id)itemPlacementControllerForItemReference:(id)arg0 ;
-(id)layout:(id)arg0 createSublayoutAtIndex:(NSInteger)arg1 ;
-(id)objectReferenceForSpriteIndex:(unsigned int)arg0 ;
-(struct CGSize )layout:(id)arg0 estimatedContentSizeForSublayoutAtIndex:(NSInteger)arg1 referenceSize:(struct CGSize )arg2 ;
-(unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg0 inDirection:(NSUInteger)arg1 ;
-(unsigned int)spriteIndexForObjectReference:(id)arg0 options:(NSUInteger)arg1 updatedObjectReference:(*id)arg2 ;
-(void)_invalidateAutoplayControllerParameters;
-(void)_invalidateCompositionParameters;
-(void)_invalidateFeedSublayouts;
-(void)_invalidateItemLayoutParameters;
-(void)_updateAutoplayControllerParameters;
-(void)_updateCompositionParameters;
-(void)_updateFeedSprites;
-(void)_updateFeedSublayouts;
-(void)axGroup:(id)arg0 didChange:(NSUInteger)arg1 userInfo:(id)arg2 ;
-(void)collectTapToRadarDiagnosticsIntoContainer:(id)arg0 ;
-(void)didUpdate;
-(void)didUpdateSublayouts;
-(void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)update;
-(void)visibleRectDidChange;
-(void)willRemoveSublayout:(id)arg0 atIndex:(NSInteger)arg1 flags:(NSUInteger)arg2 ;
-(void)willUpdate;


@end


#endif