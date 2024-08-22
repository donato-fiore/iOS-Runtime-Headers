// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONVIEWORTHOGONALSCROLLERSECTIONCONTROLLER_H
#define _UICOLLECTIONVIEWORTHOGONALSCROLLERSECTIONCONTROLLER_H

@class NSIndexSet, NSString, NSHashTable, NSUUID, NSMapTable;
@protocol UIScrollViewDelegate;

#import <Foundation/Foundation.h>

#import "UICollectionView.h"
#import "_UICollectionViewOrthogonalScrollerEmbeddedScrollView.h"

@interface _UICollectionViewOrthogonalScrollerSectionController : NSObject <UIScrollViewDelegate>



@property (weak, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) NSIndexSet *currentOrthogonalSectionIndexes; // ivar: _currentOrthogonalSectionIndexes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSHashTable *elementsBelowOrthogonalScrollView; // ivar: _elementsBelowOrthogonalScrollView
@property (retain, nonatomic) NSHashTable *frontMostElements; // ivar: _frontMostElements
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isHandlingScrollViewDelegateCallout; // ivar: _isHandlingScrollViewDelegateCallout
@property (retain, nonatomic) NSUUID *lastUpdateIdentifier; // ivar: _lastUpdateIdentifier
@property (retain, nonatomic) _UICollectionViewOrthogonalScrollerEmbeddedScrollView *scrollViewCurrentlyBeingConfigured; // ivar: _scrollViewCurrentlyBeingConfigured
@property (retain, nonatomic) NSMapTable *scrollViewFromSectionMap; // ivar: _scrollViewFromSectionMap
@property (retain, nonatomic) NSMapTable *scrollViewToSectionMap; // ivar: _scrollViewToSectionMap
@property (nonatomic) BOOL shouldPreventFocusScrollPastContentSize; // ivar: _shouldPreventFocusScrollPastContentSize
@property (readonly) Class superclass;


-(BOOL)_configureScrollView:(id)arg0 forSection:(NSInteger)arg1 baseContentInsets:(struct UIEdgeInsets )arg2 frameInsets:(struct UIEdgeInsets )arg3 isInitialConfiguration:(BOOL)arg4 ;
-(BOOL)hasOrthogonalSections;
-(BOOL)isElementInOrthogonalScrollingSection:(id)arg0 ;
-(BOOL)isIndexPathInExtantOrthogonalScroller:(id)arg0 ;
-(BOOL)isIndexPathInOrthogonalScrollingSection:(id)arg0 ;
-(id)_addSectionScrollViewForIndexPath:(id)arg0 ;
-(id)_addSectionScrollViewForSection:(NSInteger)arg0 ;
-(id)_managedScrollViews;
-(id)_sectionScrollViewForIndexPath:(id)arg0 ;
-(id)_sectionScrollViewForSection:(NSInteger)arg0 ;
-(id)autoScrollAssistantForOrthogonalScrollingSectionAtIndexPath:(id)arg0 ;
-(id)initWithCollectionView:(id)arg0 ;
-(struct CGSize )_contentSizeForSection:(NSInteger)arg0 layout:(id)arg1 ;
-(struct NSDirectionalEdgeInsets )_orthogonalScrollViewFrameInsetsForSection:(NSInteger)arg0 layout:(id)arg1 ;
-(void)_placeView:(id)arg0 belowOrthogonalScrollViewForSection:(NSInteger)arg1 ;
-(void)_scrollToItemAtIndexPath:(id)arg0 atScrollPosition:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)_updateElementOrdering;
-(void)_updateEmbeddedScrollViewContentSizeForSection:(NSInteger)arg0 ;
-(void)addElementIfNeeded:(id)arg0 ;
-(void)adjustElementHierarchyOrderingForOrthogonalElementIfNeeded:(id)arg0 layoutAttributes:(id)arg1 ;
-(void)cleanupEmbeddedOrthogonalScrollViews;
-(void)performLayout;
-(void)reconfigureOrthogonalSectionsForUpdate:(id)arg0 identifier:(id)arg1 ;
-(void)scrollToItemAtIndexPath:(id)arg0 atScrollPosition:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)updateContentSizesForOrthogonalSections:(id)arg0 ;
-(void)updateParentScrollViewForCellPromiseRegion:(id)arg0 ;


@end


#endif