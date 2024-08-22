// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUICANDIDATEGRID_H
#define TUICANDIDATEGRID_H

@class UIView, NSArray, UICollectionView, NSString, NSIndexPath, TIKeyboardCandidate;
@protocol TUICandidateLayoutDataSource, UICollectionViewDelegate, TUICandidateGridDelegate, TUICandidateViewStyle;


#import "TUICandidateLayout.h"

@interface TUICandidateGrid : UIView <TUICandidateLayoutDataSource, UICollectionViewDelegate>



@property (nonatomic) BOOL animating; // ivar: _animating
@property (nonatomic) CGSize arrowButtonSize; // ivar: _arrowButtonSize
@property (retain, nonatomic) NSArray *candidateGroups; // ivar: _candidateGroups
@property (nonatomic) BOOL candidateNumberEnabled; // ivar: _candidateNumberEnabled
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (nonatomic) BOOL collectionViewLayoutWasSkipped; // ivar: _collectionViewLayoutWasSkipped
@property (readonly, nonatomic) CGSize contentSize;
@property (retain, nonatomic) UIView *customHeader; // ivar: _customHeader
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TUICandidateGridDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSIndexPath *firstIndexPath;
@property (retain, nonatomic) NSIndexPath *firstVisibleIndexPath; // ivar: _firstVisibleIndexPath
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat lastUserSelectedCursorX; // ivar: _lastUserSelectedCursorX
@property (nonatomic) CGFloat maximumRowHeight; // ivar: _maximumRowHeight
@property (retain, nonatomic) TUICandidateLayout *multiRowLayout; // ivar: _multiRowLayout
@property (readonly, nonatomic) CGFloat rowHeight;
@property (nonatomic) NSInteger rowType; // ivar: _rowType
@property (readonly, nonatomic) TIKeyboardCandidate *selectedCandidate;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath; // ivar: _selectedIndexPath
@property (retain, nonatomic) UIView *selectedRowHighlightView; // ivar: _selectedRowHighlightView
@property (nonatomic) CGFloat selectedRowY; // ivar: _selectedRowY
@property (retain, nonatomic) TUICandidateLayout *singleRowLayout; // ivar: _singleRowLayout
@property (retain, nonatomic) NSObject<TUICandidateViewStyle> *style; // ivar: _style
@property (retain, nonatomic) NSObject<TUICandidateViewStyle> *stylePending; // ivar: _stylePending
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressCollectionViewLayout; // ivar: _suppressCollectionViewLayout
@property (readonly, nonatomic) NSArray *visibleCandidates;


+(BOOL)isSafariPasswordSuggestionCandidate:(id)arg0 ;
-(BOOL)canExpandCandidateGrid;
-(BOOL)handleNumberKey:(NSUInteger)arg0 ;
-(BOOL)hasCandidateInForwardDirection:(BOOL)arg0 granularity:(int)arg1 ;
-(BOOL)indexPathIsFullyVisible:(id)arg0 ;
-(BOOL)indexPathIsValid:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)showingSlottedCandidates;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 widthForGroupHeaderInSection:(NSInteger)arg2 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfNonPartialCandidatesInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSInteger)numberOfTransliterationCandidatesInSection:(NSInteger)arg0 ;
-(NSInteger)rowForCandidate:(id)arg0 ;
-(NSInteger)viewOffsetForCandidate:(id)arg0 ;
-(NSUInteger)autofillExtraCandidatesCount;
-(NSUInteger)candidateNumberForIndexPath:(id)arg0 ;
-(NSUInteger)candidateNumberInHorizontalLayoutForIndexPath:(id)arg0 ;
-(NSUInteger)candidateNumberInVerticalLayoutForIndexPath:(id)arg0 ;
-(NSUInteger)slottedCandidatesCount;
-(id)_collectionView:(id)arg0 indexPathForSectionIndexTitle:(id)arg1 atIndex:(NSInteger)arg2 ;
-(id)_sectionIndexTitlesForCollectionView:(id)arg0 ;
-(id)candidateAtIndexPath:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)indexPathForCandidate:(id)arg0 ;
-(id)indexPathForCandidateNumber:(NSUInteger)arg0 ;
-(id)indexPathForVerticalCandidateNumber:(NSUInteger)arg0 ;
-(id)indexPathInForwardDirection:(BOOL)arg0 granularity:(int)arg1 ;
-(id)indexPathsForSelectedRow;
-(id)indexPathsInTheRowThatContainsFrame:(struct CGRect )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)lastIndexPath;
-(id)visibleAttributes;
-(struct CGPoint )collectionView:(id)arg0 targetContentOffsetForProposedContentOffset:(struct CGPoint )arg1 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )safeAreaInsets;
-(void)addAppCandidatesRenderSignposts;
-(void)collectionView:(id)arg0 didHighlightItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didUnhighlightItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)commonInit;
-(void)didMoveHighlightFrame;
-(void)forceUpdateVisibleCells;
-(void)layoutSubviews;
-(void)scrollToCandidateAtIndexPath:(id)arg0 animated:(BOOL)arg1 ;
-(void)scrollToFirstCandidate;
-(void)scrollToTop;
-(void)scrollViewDidChangeContentSize:(id)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setSlottedSeparatorHidden:(BOOL)arg0 inCollectionView:(id)arg1 nearHighlightItemAtIndexPath:(id)arg2 ;
-(void)showCandidateInForwardDirection:(BOOL)arg0 granularity:(int)arg1 ;
-(void)updateBounce;
-(void)updateContentInset;
-(void)updateIndex;
-(void)updateSelectedRowHighlightView;


@end


#endif