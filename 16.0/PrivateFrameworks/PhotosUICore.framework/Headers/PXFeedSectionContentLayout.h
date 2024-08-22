// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXFEEDSECTIONCONTENTLAYOUT_H
#define PXFEEDSECTIONCONTENTLAYOUT_H

@class NSString;
@protocol PXGSublayoutProvider, PXGLayoutContentSource, PXChangeObserver, PXTapToRadarDiagnosticProvider, PXFeedItemLayoutFactory;


#import "PXGCompositeLayout.h"
#import "PXSectionedDataSourceChangeDetails.h"
#import "PXSectionedDataSource.h"
#import "PXFeedAutoplayController.h"
#import "PXFeedSublayoutComposition.h"
#import "PXFeedViewModel.h"

@interface PXFeedSectionContentLayout : PXGCompositeLayout <PXGSublayoutProvider, PXGLayoutContentSource, PXChangeObserver, PXTapToRadarDiagnosticProvider>

 {
    ? _updateFlags;
    PXSectionedDataSourceChangeDetails *_lastChangeDetails;
    PXSectionedDataSource *_presentedDataSource;
    ? _itemLayoutFactoryRespondsTo;
}


@property (readonly, nonatomic) PXFeedAutoplayController *autoplayController; // ivar: _autoplayController
@property (readonly, nonatomic) PXFeedSublayoutComposition *composition;
@property (readonly, nonatomic) PXSectionedDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PXFeedItemLayoutFactory> *itemLayoutFactory; // ivar: _itemLayoutFactory
@property (nonatomic) NSInteger presentedRootLayoutOrientation; // ivar: _presentedRootLayoutOrientation
@property (readonly, nonatomic) PXSimpleIndexPath sectionIndexPath; // ivar: _sectionIndexPath
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXFeedViewModel *viewModel; // ivar: _viewModel


-(BOOL)_handlePresentMenuActionForIndex:(NSInteger)arg0 atLocation:(struct CGPoint )arg1 inView:(id)arg2 ;
-(BOOL)_handlePrimaryActionForItemAtIndex:(NSInteger)arg0 ;
-(BOOL)axShouldSearchLeafsInSubgroups;
-(BOOL)wantsCustomAlphaForSublayouts;
-(CGFloat)alphaForSublayout:(id)arg0 atIndex:(NSInteger)arg1 ;
-(NSInteger)itemForSpriteIndex:(unsigned int)arg0 ;
-(NSInteger)scrollableAxis;
-(NSInteger)sublayoutIndexForObjectReference:(id)arg0 options:(NSUInteger)arg1 updatedObjectReference:(*id)arg2 ;
-(NSUInteger)axFocusabilityForSpriteAtIndex:(unsigned int)arg0 ;
-(id)_handleHoverForItemAtIndex:(SEL)arg0 ;
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
-(void)_invalidatePresentedRootLayoutOrientation;
-(void)_updateAutoplayControllerParameters;
-(void)_updateCompositionParameters;
-(void)_updateFeedSprites;
-(void)_updateFeedSublayouts;
-(void)_updatePresentedRootLayoutOrientation;
-(void)axGroup:(id)arg0 didChange:(NSUInteger)arg1 userInfo:(id)arg2 ;
-(void)collectTapToRadarDiagnosticsIntoContainer:(id)arg0 ;
-(void)didUpdate;
-(void)didUpdateSublayouts;
-(void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(id)arg0 ;
-(void)localHiddenSpriteIndexesDidChange;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)update;
-(void)visibleRectDidChange;
-(void)willRemoveSublayout:(id)arg0 atIndex:(NSInteger)arg1 flags:(NSUInteger)arg2 ;
-(void)willUpdate;


@end


#endif