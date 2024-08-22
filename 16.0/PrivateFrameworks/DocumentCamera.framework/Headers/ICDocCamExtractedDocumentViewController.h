// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICDOCCAMEXTRACTEDDOCUMENTVIEWCONTROLLER_H
#define ICDOCCAMEXTRACTEDDOCUMENTVIEWCONTROLLER_H

@class UIViewController, UIBarButtonItem, UILongPressGestureRecognizer, UIToolbar, UIButton, UIImageView, UIColor, NSString, NSMutableArray, UIAlertController, UIAccessibilityHUDItem, NSIndexPath, UILabel, NSLayoutConstraint, UIPageViewController, UIView, UIScrollView, CIContext, UICollectionView, UICollectionViewController, UIStackView;
@protocol CAAnimationDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate, ICDocCamZoomablePageContentDelegate, ICDocCamFilterViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, ICDocCamThumbnailViewLayoutDelegate, UIScrollViewDelegate, UIPageViewControllerDelegatePrivate, ICDocCamExtractedThumbnailContainerViewDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate, DCUnsavedDataDelegate, ICDocCamExtractedDocumentControllerDelegate, DCScanDataDelegate;


#import "ICDocCamDocumentInfoCollection.h"
#import "ICDocCamFilterViewController.h"
#import "ICDocCamImageCache.h"
#import "ICDocCamReorderingThumbnailCollectionViewLayout.h"
#import "ICDocCamExtractedThumbnailContainerView.h"

@interface ICDocCamExtractedDocumentViewController : UIViewController <CAAnimationDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate, ICDocCamZoomablePageContentDelegate, ICDocCamFilterViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, ICDocCamThumbnailViewLayoutDelegate, UIScrollViewDelegate, UIPageViewControllerDelegatePrivate, ICDocCamExtractedThumbnailContainerViewDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate, DCUnsavedDataDelegate>



@property (retain, nonatomic) UIBarButtonItem *actionButtonItem; // ivar: _actionButtonItem
@property (retain, nonatomic) UIBarButtonItem *addButtonItem; // ivar: _addButtonItem
@property (nonatomic) BOOL adjustPageViewControllerForMarkup; // ivar: _adjustPageViewControllerForMarkup
@property (retain, nonatomic) UILongPressGestureRecognizer *axHUDLongPressGestureRecognizer; // ivar: _axHUDLongPressGestureRecognizer
@property (nonatomic) BOOL barsShouldBeHidden; // ivar: _barsShouldBeHidden
@property (weak, nonatomic) UIToolbar *bottomToolbar; // ivar: _bottomToolbar
@property (nonatomic) BOOL cameraRestricted; // ivar: _cameraRestricted
@property (retain, nonatomic) UIButton *collectionTitleButton; // ivar: _collectionTitleButton
@property (readonly, nonatomic) UIImageView *currentImageView;
@property (retain, nonatomic) UIColor *darkenedCollectionViewTitleTintColor; // ivar: _darkenedCollectionViewTitleTintColor
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIColor *defaultCollectionViewTitleTintColor; // ivar: _defaultCollectionViewTitleTintColor
@property (weak, nonatomic) NSObject<ICDocCamExtractedDocumentControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) ICDocCamDocumentInfoCollection *documentInfoCollection; // ivar: _documentInfoCollection
@property (retain, nonatomic) NSMutableArray *documentsToUpdateWhenScrollingStops; // ivar: _documentsToUpdateWhenScrollingStops
@property (retain, nonatomic) UIBarButtonItem *doneButtonItem; // ivar: _doneButtonItem
@property (weak, nonatomic) UIAlertController *editTitleAlert; // ivar: _editTitleAlert
@property (retain, nonatomic) UIBarButtonItem *filterButtonItem; // ivar: _filterButtonItem
@property (retain, nonatomic) UIBarButtonItem *filterButtonItemForNavBar; // ivar: _filterButtonItemForNavBar
@property (retain, nonatomic) ICDocCamFilterViewController *filterViewController; // ivar: _filterViewController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIAccessibilityHUDItem *hudItemForAccessibilityLargerText; // ivar: _hudItemForAccessibilityLargerText
@property (retain, nonatomic) ICDocCamImageCache *imageCache; // ivar: _imageCache
@property (retain, nonatomic) UILongPressGestureRecognizer *imageLongPressGestureRecognizer; // ivar: _imageLongPressGestureRecognizer
@property (nonatomic) BOOL isAnimatingPageViewController; // ivar: _isAnimatingPageViewController
@property (readonly, nonatomic) BOOL isPageViewControllerScrolled;
@property (nonatomic) BOOL isScrollingBetweenPages; // ivar: _isScrollingBetweenPages
@property (nonatomic) NSInteger lastAXProposedIndexForReordering; // ivar: _lastAXProposedIndexForReordering
@property (nonatomic) BOOL layoutHasHappened; // ivar: _layoutHasHappened
@property (nonatomic) CGRect menuControllerTargetRect; // ivar: _menuControllerTargetRect
@property (nonatomic) int mode; // ivar: _mode
@property (retain, nonatomic) NSIndexPath *movingIndexPath; // ivar: _movingIndexPath
@property (nonatomic) CGFloat movingXPosition; // ivar: _movingXPosition
@property (nonatomic) CGFloat movingYPosition; // ivar: _movingYPosition
@property (retain, nonatomic) UILabel *pageIndexLabel; // ivar: _pageIndexLabel
@property (retain, nonatomic) NSLayoutConstraint *pageViewBottomConstraint; // ivar: _pageViewBottomConstraint
@property (retain, nonatomic) UIPageViewController *pageViewController; // ivar: _pageViewController
@property (weak, nonatomic) UIView *pageViewControllerContainerView; // ivar: _pageViewControllerContainerView
@property (retain, nonatomic) UIScrollView *pageViewControllerScrollView; // ivar: _pageViewControllerScrollView
@property (retain, nonatomic) NSLayoutConstraint *pageViewLeadingConstraint; // ivar: _pageViewLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *pageViewTopConstraint; // ivar: _pageViewTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *pageViewTrailingConstraint; // ivar: _pageViewTrailingConstraint
@property (nonatomic) NSInteger presentationPageIndex; // ivar: _presentationPageIndex
@property (nonatomic) CGSize previousViewSize; // ivar: _previousViewSize
@property (retain, nonatomic) UIBarButtonItem *recropButtonItem; // ivar: _recropButtonItem
@property (retain, nonatomic) UIBarButtonItem *recropButtonItemForNavBar; // ivar: _recropButtonItemForNavBar
@property (retain, nonatomic) UIBarButtonItem *retakeButtonItem; // ivar: _retakeButtonItem
@property (retain, nonatomic) UIBarButtonItem *rotateButtonItem; // ivar: _rotateButtonItem
@property (retain, nonatomic) UIBarButtonItem *rotateButtonItemForNavBar; // ivar: _rotateButtonItemForNavBar
@property (nonatomic) BOOL rotationUnderWay; // ivar: _rotationUnderWay
@property (readonly, nonatomic) NSObject<DCScanDataDelegate> *scanCollectionDataDelegate;
@property (readonly, nonatomic) NSObject<DCScanDataDelegate> *selectedScanDataDelegate;
@property (retain, nonatomic) CIContext *sharedCoreImageContext; // ivar: _sharedCoreImageContext
@property (readonly, nonatomic) BOOL shouldDisableActions;
@property (readonly, nonatomic) BOOL shouldDisableSharrow;
@property (nonatomic) BOOL statusBarWasHiddenWhenDoneTapped; // ivar: _statusBarWasHiddenWhenDoneTapped
@property (nonatomic) BOOL statusBarWasHiddenWhenRetakeTapped; // ivar: _statusBarWasHiddenWhenRetakeTapped
@property (readonly) Class superclass;
@property (retain, nonatomic) UICollectionView *thumbnailCollectionView; // ivar: _thumbnailCollectionView
@property (retain, nonatomic) UICollectionViewController *thumbnailCollectionViewController; // ivar: _thumbnailCollectionViewController
@property (readonly, nonatomic) ICDocCamReorderingThumbnailCollectionViewLayout *thumbnailCollectionViewLayout;
@property (retain, nonatomic) ICDocCamExtractedThumbnailContainerView *thumbnailContainerView; // ivar: _thumbnailContainerView
@property (retain, nonatomic) UIBarButtonItem *thumbnailContainerViewItem; // ivar: _thumbnailContainerViewItem
@property (retain, nonatomic) UILongPressGestureRecognizer *thumbnailLongPressGestureRecognizer; // ivar: _thumbnailLongPressGestureRecognizer
@property (retain, nonatomic) UIStackView *titleView; // ivar: _titleView
@property (retain, nonatomic) UIView *titleViewWrapper; // ivar: _titleViewWrapper
@property (retain, nonatomic) NSLayoutConstraint *titleViewWrapperHeightConstraint; // ivar: _titleViewWrapperHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *titleViewWrapperWidthConstraint; // ivar: _titleViewWrapperWidthConstraint
@property (weak, nonatomic) UIView *topToolbar; // ivar: _topToolbar
@property (retain, nonatomic) UIBarButtonItem *trashButtonItem; // ivar: _trashButtonItem
@property (retain, nonatomic) UIBarButtonItem *trashButtonItemForNavBar; // ivar: _trashButtonItemForNavBar


+(struct CGRect )targetRectForOrientation:(NSInteger)arg0 window:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)accessibilityPerformEscape;
-(BOOL)accessibilityScrollLeftPage;
-(BOOL)accessibilityScrollRightPage;
-(BOOL)cameraDisabled;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 canMoveItemAtIndexPath:(id)arg1 ;
-(BOOL)currentImageHasMarkup;
-(BOOL)filterViewControllerApplyToAll:(short)arg0 ;
-(BOOL)filterViewControllerCanApplyToAll:(short)arg0 ;
-(BOOL)filterViewControllerDidSelectFilter:(short)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)imageIsPortrait:(id)arg0 ;
-(BOOL)isShowingBarsForZoomablePageContentViewController:(id)arg0 ;
-(BOOL)prefersStatusBarHidden;
-(BOOL)thumbnailContainerViewIsVisible:(id)arg0 ;
-(BOOL)thumbnailContainerViewSupportsReordering:(id)arg0 ;
-(CGFloat)normalizedPageViewControllerScrollPosition;
-(CGFloat)thumbnailToolbarHeight;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)orientationRotated90DegreesFromOrientation:(NSInteger)arg0 ;
-(NSInteger)preferredStatusBarStyle;
-(NSInteger)preferredStatusBarUpdateAnimation;
-(NSUInteger)documentCount;
-(NSUInteger)thumbnailContainerViewCurrentIndex:(id)arg0 ;
-(NSUInteger)thumbnailContainerViewNumberOfItems:(id)arg0 ;
-(id)_accessibilitySpeakThisElementsAndStrings;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)croppedAndFilteredmageForDocumentAtIndex:(NSInteger)arg0 ;
-(id)croppedButNotFilteredImageForDocInfo:(id)arg0 ;
-(id)croppedButNotFilteredImageForDocumentAtIndex:(NSInteger)arg0 ;
-(id)currentBackgroundColor;
-(id)currentDocument;
-(id)currentPageContentViewController;
-(id)imageForDocInfo:(id)arg0 newFilter:(short)arg1 ;
-(id)indexPathForCurrentDocument;
-(id)initWithDelegate:(id)arg0 documentInfoCollection:(id)arg1 imageCache:(id)arg2 currentIndex:(NSInteger)arg3 mode:(int)arg4 ;
-(id)makeUIImageFromCIImage:(id)arg0 ;
-(id)orientationString:(NSInteger)arg0 ;
-(id)pageViewController:(id)arg0 viewControllerAfterViewController:(id)arg1 ;
-(id)pageViewController:(id)arg0 viewControllerBeforeViewController:(id)arg1 ;
-(id)rootView;
-(id)truncatedString:(id)arg0 clipLength:(NSUInteger)arg1 ;
-(id)undoManager;
-(id)viewControllerAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )imageRectWithZoomAndPanForIndexPath:(id)arg0 ;
-(struct CGRect )recropTargetForIndexPath:(id)arg0 ;
-(struct CGRect )retakeTargetForIndexPath:(id)arg0 ;
-(struct CGRect )targetViewRect;
-(struct CGRect )zoomTargetForIndexPath:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 imageSizeAtIndex:(NSInteger)arg1 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct CGSize )frameSizeForImageSize:(struct CGSize )arg0 ;
-(struct CGSize )imageSizeForDocumentAtIndex:(NSInteger)arg0 ;
-(void)_pageViewControllerDidFinishTransitions:(id)arg0 ;
-(void)addImageAction:(id)arg0 ;
-(void)alertAndDiscardMarkup;
-(void)changePage:(NSInteger)arg0 ;
-(void)collectionNameTapped:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)copy:(id)arg0 ;
-(void)dealloc;
-(void)defaultsChanged;
-(void)delete:(id)arg0 ;
-(void)deleteButtonAction:(id)arg0 ;
-(void)deleteCurrentPage;
-(void)deselectFilterButtons;
-(void)didDismissMarkupViewController;
-(void)didUpdateDocumentImage:(id)arg0 ;
-(void)didUpdateDocumentInfoArrayNewCurrentDocument:(id)arg0 ;
-(void)didUpdateDocumentTitle:(id)arg0 ;
-(void)doneAction:(id)arg0 ;
-(void)filterButtonAction:(id)arg0 ;
-(void)handleAccessibilityLongPressOnCollectionTitle:(id)arg0 ;
-(void)hideBarsForZoomablePageContentViewController:(id)arg0 ;
-(void)hideFilterViewIfNecessary;
-(void)pageViewController:(id)arg0 didFinishAnimating:(BOOL)arg1 previousViewControllers:(id)arg2 transitionCompleted:(BOOL)arg3 ;
-(void)pageViewController:(id)arg0 willTransitionToViewControllers:(id)arg1 ;
-(void)pencilDownInZoomablePageContentViewController:(id)arg0 ;
-(void)prepareForDismissal;
-(void)recreateThumbnailContainerWithWidth:(CGFloat)arg0 leadingTrailingMargin:(CGFloat)arg1 ;
-(void)recropButtonPressed:(id)arg0 ;
-(void)resetImageCentering;
-(void)respondToImageLongPressGesture:(id)arg0 ;
-(void)respondToThumbnailLongPressGesture:(id)arg0 ;
-(void)retakeAction:(id)arg0 ;
-(void)rotateAction:(id)arg0 ;
-(void)rotateCurrentImage;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)selectFilterButtons;
-(void)setCurrentThumbnailItem:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)setImage:(id)arg0 forCell:(id)arg1 useResizedImage:(BOOL)arg2 ;
-(void)setupAccessibilityInfo;
-(void)setupThumbnailViewController;
-(void)share:(id)arg0 ;
-(void)shareAction:(id)arg0 ;
-(void)showBarsForZoomablePageContentViewController:(id)arg0 ;
-(void)showFilterViewIfNecessary;
-(void)showPrimaryControllerForNotes:(id)arg0 animated:(BOOL)arg1 ;
-(void)showViewControllerAtIndex:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)speakAccessibilityAnnouncementForMovingItemFromIndexPath:(id)arg0 toIndexPath:(id)arg1 ;
-(void)speakAccessibilityAnnouncementForReorderIfNecessaryForProposedIndexPath:(id)arg0 ;
-(void)startMarkupViewController;
-(void)switchBarVisibilityForZoomablePageContentViewController:(id)arg0 ;
-(void)thumbnailContainerView:(id)arg0 moveItemFromIndex:(NSInteger)arg1 toIndex:(NSInteger)arg2 ;
-(void)thumbnailContainerViewDecrementCurrentIndex:(id)arg0 ;
-(void)thumbnailContainerViewIncrementCurrentIndex:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateDocumentImage:(id)arg0 ;
-(void)updateFilterButtonItemAccessibilityInfo;
-(void)updateFilterViewLayoutIfNeeded;
-(void)updateForAccessibilityDarkerSystemColors;
-(void)updateImage:(id)arg0 document:(id)arg1 withFilterType:(short)arg2 ;
-(void)updateImageViewAccessibilityForPageContentViewController:(id)arg0 ;
-(void)updateLayout;
-(void)updatePageIndicatorForPageIndex:(NSInteger)arg0 ;
// -(void)updatePageViewControllerConstraints:(BOOL)arg0 animationBlock:(id)arg1 completionBlock:(unk)arg2  ;
-(void)updateTitleView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif