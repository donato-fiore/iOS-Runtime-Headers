// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFEEDCONTENTLAYOUT_H
#define PXFEEDCONTENTLAYOUT_H

@class NSString;
@protocol PXGSublayoutProvider, PXChangeObserver;


#import "PXGCompositeLayout.h"
#import "PXGStackedSublayoutComposition.h"
#import "PXFeedItemDecorationSource.h"
#import "PXSectionedDataSource.h"
#import "PXFeedViewModel.h"

@interface PXFeedContentLayout : PXGCompositeLayout <PXGSublayoutProvider, PXChangeObserver>

 {
    ? _updateFlags;
}


@property (readonly, nonatomic) PXGStackedSublayoutComposition *composition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PXFeedItemDecorationSource *decorationSource; // ivar: _decorationSource
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXSectionedDataSource *presentedDataSource; // ivar: _presentedDataSource
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXFeedViewModel *viewModel; // ivar: _viewModel


-(NSInteger)anchoredSublayoutIndex;
-(NSInteger)scrollableAxis;
-(NSInteger)sublayoutIndexForObjectReference:(id)arg0 options:(NSUInteger)arg1 updatedObjectReference:(*id)arg2 ;
-(id)init;
-(id)initWithViewModel:(id)arg0 ;
-(id)itemPlacementControllerForItemReference:(id)arg0 ;
-(id)layout:(id)arg0 createSublayoutAtIndex:(NSInteger)arg1 ;
-(struct CGSize )layout:(id)arg0 estimatedContentSizeForSublayoutAtIndex:(NSInteger)arg1 referenceSize:(struct CGSize )arg2 ;
-(struct PXSimpleIndexPath )indexPathClosestToIndexPath:(struct PXSimpleIndexPath )arg0 inDirection:(NSUInteger)arg1 ;
-(void)_invalidateCompositionParameters;
-(void)_invalidateFeedSectionSublayouts;
-(void)_invalidateFeedSelectionSnapshot;
-(void)_updateCompositionParameters;
-(void)_updateFeedSectionSublayouts;
-(void)_updateFeedSelectionSnapshot;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)safeAreaInsetsDidChange;
-(void)update;


@end


#endif