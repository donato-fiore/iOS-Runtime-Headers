// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKEYBOARDEMOJICOLLECTIONINPUTVIEW_H
#define UIKEYBOARDEMOJICOLLECTIONINPUTVIEW_H

@class NSString, TUIEmojiSearchTextField, TUIEmojiSearchInputViewController, UIResponder<UIKBEmojiHitTestResponder>, NSArray, NSIndexPath;
@protocol UIKeyboardMediaControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, TUIEmojiSearchInputViewControllerDelegate;


#import "UIKeyboardEmojiKeyView.h"
#import "UIKeyboardEmojiCollectionView.h"
#import "UICollectionViewFlowLayout.h"
#import "UIKeyboardEmojiGraphicsTraits.h"
#import "UIKBTree.h"
#import "UIKeyboardEmojiCategory.h"

@interface UIKeyboardEmojiCollectionInputView : UIKeyboardEmojiKeyView <UIKeyboardMediaControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, TUIEmojiSearchInputViewControllerDelegate>

 {
    UIKeyboardEmojiCollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    UIKeyboardEmojiGraphicsTraits *_emojiGraphicsTraits;
    NSUInteger _currentSection;
    BOOL _inputDelegateCanSupportAnimoji;
    BOOL _hasShownAnimojiFirstTimeExperience;
    BOOL _shouldRetryFetchingAnimojiRecents;
    BOOL _useWideAnimojiCell;
    BOOL _hasShownAnimojiCell;
    CGFloat _frameInset;
    BOOL _showingVariants;
    NSInteger _selectedVariant;
    NSInteger _currentVariantRow;
    UIKBTree *_selectedPopupKey;
}


@property UIKeyboardEmojiCategory *category; // ivar: _category
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property BOOL currentlyCheckingMemojiPreference; // ivar: _currentlyCheckingMemojiPreference
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TUIEmojiSearchTextField *emojiSearchField; // ivar: _emojiSearchField
@property (retain, nonatomic) TUIEmojiSearchInputViewController *emojiSearchInputViewController; // ivar: _emojiSearchInputViewController
@property BOOL hasCheckedMemojiPreference; // ivar: _hasCheckedMemojiPreference
@property (readonly) NSUInteger hash;
@property (nonatomic) UIResponder<UIKBEmojiHitTestResponder> *hitTestResponder; // ivar: _hitTestResponder
@property (readonly) BOOL isDraggingInputView; // ivar: _isDraggingInputView
@property BOOL isSearching; // ivar: _isSearching
@property (retain, nonatomic) NSArray *searchResults; // ivar: _searchResults
@property (retain, nonatomic) NSIndexPath *selectedIndexPath; // ivar: _selectedIndexPath
@property (readonly) Class superclass;
@property BOOL supportsMemoji; // ivar: _supportsMemoji
@property (nonatomic) NSIndexPath *tappedSkinToneEmoji; // ivar: _tappedSkinToneEmoji


+(BOOL)shouldHighlightEmoji:(id)arg0 ;
+(BOOL)wantsScreenTraits;
-(BOOL)_handleBaseKeySelectionEvent:(id)arg0 ;
-(BOOL)_handleInitialSelectionEvent:(id)arg0 ;
-(BOOL)_handleVariantSelectionEvent:(id)arg0 ;
-(BOOL)_shouldShowRecentlyUsedMedia;
-(BOOL)_userHasSelectedSkinToneEmoji;
-(BOOL)baseStringIsCoupleEmoji:(id)arg0 ;
-(BOOL)cellShouldScrollWhenSelectedAtIndexPath:(id)arg0 ;
-(BOOL)genderEmojiBaseStringNeedVariantSelector:(id)arg0 ;
-(BOOL)handleKeyEvent:(id)arg0 ;
-(BOOL)handleKeyInputForCollectionViewNavigation:(id)arg0 ;
-(BOOL)handleKeyInputForFamilySelector:(id)arg0 ;
-(BOOL)handleKeyInputForVariantSelector:(id)arg0 ;
-(BOOL)handleSelectionEvent:(id)arg0 ;
-(BOOL)keySupportsVariants:(id)arg0 ;
-(BOOL)memojiSettingEnabled;
-(BOOL)skinToneWasUsedForEmoji:(id)arg0 ;
-(CGFloat)_recentlyUsedMediaRoundedOffset:(CGFloat)arg0 recentlyUsedMediaCellWidth:(CGFloat)arg1 ;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(CGFloat)snappedXOffsetForOffset:(CGFloat)arg0 scrubbing:(BOOL)arg1 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)didInputSubTree:(id)arg0 ;
-(NSInteger)indexForPrettyCategoryDisplay:(id)arg0 ;
-(NSInteger)keyCodeForCurrentEnvironmentFromKeyCode:(NSInteger)arg0 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSInteger)updateToCategoryWithOffsetPercentage:(CGFloat)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)emojiBaseFirstCharacterString:(id)arg0 ;
-(id)emojiBaseString:(id)arg0 ;
-(id)firstFullyVisibleHeader;
-(id)initWithFrame:(struct CGRect )arg0 keyplane:(id)arg1 key:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 keyplane:(id)arg1 key:(id)arg2 screenTraits:(id)arg3 ;
-(id)itemInRect:(struct CGRect )arg0 ;
-(id)selectedChildSkinToneEmoji:(id)arg0 ;
-(id)subTreeHitTest:(struct CGPoint )arg0 ;
-(id)treeForCell:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_setUserHasSelectedSkinToneEmoji:(BOOL)arg0 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)didDismissCardForKeyboardMediaController:(id)arg0 ;
-(void)didInsertMediaForKeyboardMediaController:(id)arg0 ;
-(void)didMoveToWindow;
-(void)didPresentCardForKeyboardMediaController:(id)arg0 ;
-(void)didTearDownRecentsViewForKeyboardMediaController:(id)arg0 ;
-(void)dimKeys:(id)arg0 ;
-(void)emojiSearchDidReceiveResults:(id)arg0 forExactQuery:(id)arg1 autocorrectedQuery:(id)arg2 ;
-(void)emojiSearchTextFieldDidBecomeActive:(id)arg0 ;
-(void)emojiSearchTextFieldDidBecomeInactive:(id)arg0 ;
-(void)emojiSearchTextFieldDidReset:(id)arg0 ;
-(void)emojiSearchTextFieldWillBecomeActive:(id)arg0 ;
-(void)emojiSearchTextFieldWillBecomeInactive:(id)arg0 ;
-(void)emojiSearchTextFieldWillClear:(id)arg0 ;
-(void)insertSelectedEmoji:(id)arg0 shouldDismissPopover:(BOOL)arg1 ;
-(void)preferencesControllerChanged:(id)arg0 ;
-(void)resetSelectionIfNeeded;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setContentScaleFactor:(CGFloat)arg0 ;
-(void)shouldDismissModalDisplayView:(id)arg0 ;
-(void)updateHighlightForIndexPath:(id)arg0 scrollIfNeeded:(BOOL)arg1 animateScroll:(BOOL)arg2 ;
-(void)updateLastSeenItemForIndexPath:(id)arg0 ;
-(void)updateMemojiPreference;
-(void)updateOffsetForSearchResults;
-(void)updatePreferencesForSelectedEmoji:(id)arg0 ;
-(void)updateToCategory:(NSInteger)arg0 ;
-(void)willDisplayModalActionView:(id)arg0 withSubTreeKeyView:(id)arg1 completion:(id)arg2 ;


@end


#endif