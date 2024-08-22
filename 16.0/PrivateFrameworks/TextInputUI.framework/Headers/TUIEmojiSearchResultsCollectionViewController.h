// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUIEMOJISEARCHRESULTSCOLLECTIONVIEWCONTROLLER_H
#define TUIEMOJISEARCHRESULTSCOLLECTIONVIEWCONTROLLER_H

@class UICollectionViewController, NSArray, UICollectionViewDiffableDataSource, NSString, UILongPressGestureRecognizer, UILabel;
@protocol UICollectionViewDelegateFlowLayout, TUIEmojiSearchResultsCollectionViewControllerDelegate;


#import "_InvertibleFlowLayout.h"

@interface TUIEmojiSearchResultsCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout>

 {
    NSUInteger _animationBeginOffset;
    NSUInteger _lastAnimatedCellCount;
    BOOL _animatingCellUpdates;
    NSArray *_placeholderIdentifiers;
}


@property (nonatomic, getter=isCellHighlightFrozen) BOOL cellHighlightFrozen; // ivar: _cellHighlightFrozen
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TUIEmojiSearchResultsCollectionViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *displayedEmojis; // ivar: _displayedEmojis
@property (nonatomic) BOOL displayingNoResultsLabel; // ivar: _displayingNoResultsLabel
@property (nonatomic) BOOL displayingVerbatimResults; // ivar: _displayingVerbatimResults
@property (retain, nonatomic) _InvertibleFlowLayout *flowLayout; // ivar: _flowLayout
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // ivar: _longPressGestureRecognizer
@property (retain, nonatomic) UILabel *noResultsLabel; // ivar: _noResultsLabel
@property (readonly) Class superclass;


+(id)emojiTextAttributes;
-(BOOL)_isSelectableEmojiTokenAtIndexPath:(id)arg0 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(id)_userPreferredEmojiStringVariantForToken:(id)arg0 ;
-(id)configuredEmojiCollectionViewCellForCollectionView:(id)arg0 atIndexPath:(id)arg1 forEmojiString:(id)arg2 ;
-(id)init;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)_didRecognizeLongPressGesture:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didUnhighlightItemAtIndexPath:(id)arg1 ;
-(void)resetScrollPositionAnimated:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif