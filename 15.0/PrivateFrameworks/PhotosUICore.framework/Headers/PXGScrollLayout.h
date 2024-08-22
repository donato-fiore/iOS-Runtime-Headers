// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGSCROLLLAYOUT_H
#define PXGSCROLLLAYOUT_H

@class NSString, NSNumber;
@protocol PXGAnchorDelegate, PXGViewSource, PXGScrollViewContainerDelegate, PXChangeObserver, PXGDataSourceDrivenLayout, PXGScrollLayoutDelegate;


#import "PXGLayout.h"
#import "PXGScrollViewModel.h"

@interface PXGScrollLayout : PXGLayout <PXGAnchorDelegate, PXGViewSource, PXGScrollViewContainerDelegate, PXChangeObserver, PXGDataSourceDrivenLayout>

 {
    ? _updateFlags;
    unsigned int _scrollViewSpriteIndex;
    unsigned short _scrollViewMediaVersion;
    BOOL _isUpdatingContentLayout;
    ? _delegateRespondsTo;
}


@property (retain, nonatomic) PXGLayout *contentLayout;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGScrollLayoutDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSNumber *fixedHeight; // ivar: _fixedHeight
@property (retain, nonatomic) NSNumber *fixedWidth; // ivar: _fixedWidth
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isScrolling; // ivar: _isScrolling
@property (nonatomic) NSInteger scrollDecelerationRate; // ivar: _scrollDecelerationRate
@property (readonly, nonatomic) PXGScrollViewModel *scrollViewModel; // ivar: _scrollViewModel
@property (nonatomic) float scrollViewSpriteZPosition; // ivar: _scrollViewSpriteZPosition
@property (nonatomic) BOOL showsHorizontalScrollIndicator; // ivar: _showsHorizontalScrollIndicator
@property (nonatomic) BOOL showsVerticalScrollIndicator; // ivar: _showsVerticalScrollIndicator
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsScrollView; // ivar: _wantsScrollView


-(BOOL)axShouldBeConsideredAsSubgroup;
-(Class)viewClassForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSInteger)intrinsicScrollRegime;
-(NSInteger)sublayoutIndexForObjectReference:(id)arg0 options:(NSUInteger)arg1 updatedObjectReference:(*id)arg2 ;
-(id)axContainingScrollViewForAXGroup:(id)arg0 ;
-(id)axSpriteIndexes;
-(id)createAnchorForVisibleAreaIgnoringEdges:(NSUInteger)arg0 ;
-(id)focusItemsForScrollViewContainer:(id)arg0 inRect:(struct CGRect )arg1 ;
-(id)init;
-(id)initWithContentLayout:(id)arg0 ;
-(id)layoutForItemChanges;
-(id)viewUserDataForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(struct CGPoint )anchor:(id)arg0 visibleRectOriginForProposedVisibleRect:(struct CGRect )arg1 forLayout:(id)arg2 ;
-(void)_invalidateContentLayout;
-(void)_invalidateLocalContent;
-(void)_invalidateScrollView;
-(void)_updateContentLayout;
-(void)_updateLocalContent;
-(void)alphaDidChange;
-(void)contentSizeDidChange;
-(void)didUpdate;
-(void)insertSublayout:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)lastScrollDirectionDidChange;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)referenceSizeDidChange;
-(void)safeAreaInsetsDidChange;
-(void)screenScaleDidChange;
-(void)scrollViewContainerDidEndScrolling:(id)arg0 ;
-(void)scrollViewContainerDidScroll:(id)arg0 ;
-(void)scrollViewContainerWillBeginScrolling:(id)arg0 ;
-(void)scrollViewContainerWillEndScrolling:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)stopScrolling;
-(void)sublayoutNeedsUpdate:(id)arg0 ;
-(void)update;
-(void)userInterfaceDirectionDidChange;
-(void)viewEnvironmentDidChange;
-(void)willUpdate;


@end


#endif