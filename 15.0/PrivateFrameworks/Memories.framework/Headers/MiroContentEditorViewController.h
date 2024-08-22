// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROCONTENTEDITORVIEWCONTROLLER_H
#define MIROCONTENTEDITORVIEWCONTROLLER_H

@class UIViewController, UIBarButtonItem, NSString, UIVisualEffectView, NSLayoutConstraint, UIToolbar, NSSet, UILabel, PHCachingImageManager, CALayer, UITapGestureRecognizer, UIView, UINavigationBar;
@protocol UINavigationBarDelegate, MiroEditorClipCellDelegate, PMTrimmerDelegate, MiroAssetSuggestionsCollectionViewControllerDelegate, MiroEditorClipCollectionDataSource, MiroEditorClipCollectionDelegate, PMClipCollectionProviderDelegate, PMClipProviderDelegate, MiroApplicationTestingEditorControlling, MiroContentEditorViewControllerDelegate;


#import "MiroAssetSuggestionsCollectionViewController.h"
#import "PMClipCollectionProvider.h"
#import "MiroEditorClipCollectionViewController.h"
#import "VEKProduction.h"
#import "PMiOSProgressViewController.h"
#import "MiroTimelineClipCollectionViewController.h"
#import "PMTrimmerViewController.h"
#import "MiroEditorClipCell.h"

@interface MiroContentEditorViewController : UIViewController <UINavigationBarDelegate, MiroEditorClipCellDelegate, PMTrimmerDelegate, MiroAssetSuggestionsCollectionViewControllerDelegate, MiroEditorClipCollectionDataSource, MiroEditorClipCollectionDelegate, PMClipCollectionProviderDelegate, PMClipProviderDelegate, MiroApplicationTestingEditorControlling>



@property (weak, nonatomic) UIBarButtonItem *addBarButtonItem; // ivar: _addBarButtonItem
@property (retain, nonatomic) MiroAssetSuggestionsCollectionViewController *addRemoveCollectionPickerView; // ivar: _addRemoveCollectionPickerView
@property (copy, nonatomic) NSString *assetIdentifierToSnapToAfterAutoEdit; // ivar: _assetIdentifierToSnapToAfterAutoEdit
@property (retain, nonatomic) UIVisualEffectView *bottomBlurEffectView; // ivar: _bottomBlurEffectView
@property (retain, nonatomic) NSLayoutConstraint *bottomBlurEffectViewHeightConstraint; // ivar: _bottomBlurEffectViewHeightConstraint
@property (retain, nonatomic) UIBarButtonItem *bottomPlayPauseBarButtonItem; // ivar: _bottomPlayPauseBarButtonItem
@property (weak, nonatomic) UIToolbar *bottomToolbar; // ivar: _bottomToolbar
@property (retain, nonatomic) UIBarButtonItem *cancelBarButtonItem; // ivar: _cancelBarButtonItem
@property (retain, nonatomic) PMClipCollectionProvider *clipCollectionProvider; // ivar: _clipCollectionProvider
@property (nonatomic) int clipMidTimeToSnapToAfterAutoEdit; // ivar: _clipMidTimeToSnapToAfterAutoEdit
@property (copy, nonatomic) id *commitUserAssetChangesBlock; // ivar: _commitUserAssetChangesBlock
@property (retain, nonatomic) NSSet *currentAssetIDs; // ivar: _currentAssetIDs
@property (retain, nonatomic) UIBarButtonItem *debugAutoEditBarButtonItem; // ivar: _debugAutoEditBarButtonItem
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UILabel *debugEditStyleDescriptionLabel; // ivar: _debugEditStyleDescriptionLabel
@property (weak, nonatomic) UILabel *debugFilterDescriptionLabel; // ivar: _debugFilterDescriptionLabel
@property (weak, nonatomic) UILabel *debugSongDescriptionLabel; // ivar: _debugSongDescriptionLabel
@property (weak, nonatomic) UILabel *debugTitleDescriptionLabel; // ivar: _debugTitleDescriptionLabel
@property (weak, nonatomic) NSObject<MiroContentEditorViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didCenterInitialClipOnFirstAppearance; // ivar: _didCenterInitialClipOnFirstAppearance
@property (nonatomic) BOOL didMakeEdits; // ivar: _didMakeEdits
@property (nonatomic) BOOL didTrim; // ivar: _didTrim
@property (weak, nonatomic) UIBarButtonItem *dislikeBarButtonItem; // ivar: _dislikeBarButtonItem
@property (retain, nonatomic) UIBarButtonItem *doneBarButtonItem; // ivar: _doneBarButtonItem
@property (retain, nonatomic) UIBarButtonItem *durationBarButtonItem; // ivar: _durationBarButtonItem
@property (weak, nonatomic) MiroEditorClipCollectionViewController *editorViewController; // ivar: _editorViewController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PHCachingImageManager *imageManager; // ivar: _imageManager
@property (nonatomic) ? initialStartTime; // ivar: _initialStartTime
@property (nonatomic) BOOL isPerformingInteractiveMovement; // ivar: _isPerformingInteractiveMovement
@property (retain, nonatomic) CALayer *maskLayerCompact; // ivar: _maskLayerCompact
@property (retain, nonatomic) CALayer *maskLayerRegular; // ivar: _maskLayerRegular
@property (retain, nonatomic) UIVisualEffectView *navBarBlurEffectView; // ivar: _navBarBlurEffectView
@property (retain, nonatomic) PMClipCollectionProvider *previousClipCollectionProvider; // ivar: _previousClipCollectionProvider
@property (retain, nonatomic) VEKProduction *production; // ivar: _production
@property (retain, nonatomic) PMiOSProgressViewController *progressViewController; // ivar: _progressViewController
@property (nonatomic) NSInteger removeClipEnteredCount; // ivar: _removeClipEnteredCount
@property (copy, nonatomic) id *revertUserAssetChangesBlock; // ivar: _revertUserAssetChangesBlock
@property (nonatomic) BOOL shouldCancelDownload; // ivar: _shouldCancelDownload
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *thumbnailTapGR; // ivar: _thumbnailTapGR
@property (weak, nonatomic) NSLayoutConstraint *timelineBottomConstraint; // ivar: _timelineBottomConstraint
@property (weak, nonatomic) NSLayoutConstraint *timelineHeightConstraint; // ivar: _timelineHeightConstraint
@property (weak, nonatomic) NSLayoutConstraint *timelineLeftConstraint; // ivar: _timelineLeftConstraint
@property (weak, nonatomic) UIView *timelineMaskView; // ivar: _timelineMaskView
@property (weak, nonatomic) NSLayoutConstraint *timelineRightConstraint; // ivar: _timelineRightConstraint
@property (weak, nonatomic) MiroTimelineClipCollectionViewController *timelineViewController; // ivar: _timelineViewController
@property (weak, nonatomic) UILabel *toolbarDurationLabel; // ivar: _toolbarDurationLabel
@property (retain, nonatomic) NSLayoutConstraint *toolbarHeightConstraint; // ivar: _toolbarHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *topBlurEffectViewTrimmerConstraint; // ivar: _topBlurEffectViewTrimmerConstraint
@property (weak, nonatomic) UINavigationBar *topToolbar; // ivar: _topToolbar
@property (retain, nonatomic) PMTrimmerViewController *trimmer; // ivar: _trimmer
@property (retain, nonatomic) UIVisualEffectView *trimmerBlurEffectView; // ivar: _trimmerBlurEffectView
@property (weak, nonatomic) UIView *trimmerContainerView; // ivar: _trimmerContainerView
@property (retain, nonatomic) NSLayoutConstraint *trimmerLeadingConstraint; // ivar: _trimmerLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *trimmerTopConstraint; // ivar: _trimmerTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *trimmerTrailingConstraint; // ivar: _trimmerTrailingConstraint
@property (weak, nonatomic) MiroEditorClipCell *trimmingCell; // ivar: _trimmingCell


-(BOOL)editorClipCellShouldShowCircularPlayButton:(id)arg0 ;
-(BOOL)navigationBar:(id)arg0 shouldPopItem:(id)arg1 ;
-(BOOL)pickedLocallyAvailableScenesContainAsset:(id)arg0 ;
-(BOOL)prefersStatusBarHidden;
-(BOOL)trimmer:(id)arg0 shouldContinueTrimmingWithClipProvider:(id)arg1 startTime:(float)arg2 endTime:(float)arg3 ;
-(NSInteger)clipCollectionClipCount:(id)arg0 ;
-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)_nearestClipIndexForAssetID:(id)arg0 andClipMidTime:(int)arg1 ;
-(NSUInteger)assetSuggestionsController:(id)arg0 clipCountForAsset:(id)arg1 ;
-(id)_assetsToAddToUsedAssetsForNewSelectedAssets:(id)arg0 ;
-(id)_assetsToRemoveFromUsedAssetsForNewSelectedAssets:(id)arg0 ;
-(id)_debugBarButtonItems;
-(id)_editorCellForIndexPath:(id)arg0 ;
-(id)_maskLayerWithFadeWidth:(CGFloat)arg0 ;
-(id)assetSuggestionsController:(id)arg0 debugMetadataForAsset:(id)arg1 ;
-(id)clipCollection:(id)arg0 clipProviderAtIndex:(NSInteger)arg1 ;
-(id)clipCollection:(id)arg0 willSetClipProvider:(id)arg1 onCell:(id)arg2 indexPath:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)pickListSplitDistanceForAsset:(id)arg0 ;
-(int)_middleFrameTimeForClipProvider:(id)arg0 ;
-(void)_addAssets:(id)arg0 removeAssets:(id)arg1 ;
-(void)_adjustSnappedClipWhenSplitScreenClosesWorkaround;
-(void)_alertSomeAssetsFailed:(NSUInteger)arg0 unsupported:(NSUInteger)arg1 ;
-(void)_alertSomeAssetsFailedToDownload:(NSUInteger)arg0 ;
-(void)_alertSomeAssetsFailedWithTitle:(id)arg0 message:(id)arg1 okActionBlock:(id)arg2 ;
-(void)_cancelProgress;
-(void)_commitEditChangesAndRefreshDebugOverlays:(id)arg0 ;
-(void)_configureBottomToolbarForTraitCollection:(id)arg0 ;
-(void)_configureClipControlBarMinimumSpacingForCells:(id)arg0 ;
-(void)_configureFadeMaskLayerForTraitCollection:(id)arg0 ;
-(void)_configureToolbarsForTraitCollection:(id)arg0 ;
-(void)_configureTopToolbarForTraitCollection:(id)arg0 ;
-(void)_prepareForDismissal;
-(void)_reloadCollectionViewsWithHintSnapToIndex:(NSUInteger)arg0 ;
-(void)_scrollTimelineToTrackEditorContentOffset;
-(void)_setupEditorCollectionViewController:(id)arg0 ;
-(void)_setupNavigationBarAppearanceForContentEditor:(id)arg0 ;
-(void)_setupTimelineCollectionViewController:(id)arg0 ;
-(void)_setupToolbars;
-(void)_setupTransparentBackgroundForNavigationBar:(id)arg0 ;
-(void)_setupTransparentBackgroundForToolbar:(id)arg0 ;
-(void)_setupTrimmerInContainerView:(id)arg0 ;
-(void)_updateBottomBarConstraintsForTraitCollection:(id)arg0 ;
-(void)_updateControlVisibilityOnCells:(id)arg0 ;
-(void)_updateDebugLabelForClipCell:(id)arg0 ;
-(void)_updateDebugLabelsForVisibleTimelineClips;
-(void)_updateDurationLabel:(CGFloat)arg0 ;
-(void)_updateDurationLabelVisibilityAnimated:(BOOL)arg0 ;
-(void)_updateInterfaceElementVisibilityForCell:(id)arg0 ;
-(void)_updateItemNumberLabelForIndexPath:(id)arg0 ;
-(void)_updatePlayPauseButtonForCell:(id)arg0 ;
-(void)_updateThumbnailForCell:(id)arg0 indexPath:(id)arg1 startTime:(int)arg2 ;
-(void)_updateTopToolbarVisibilityForCell:(id)arg0 atIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateTrimmerClipForCell:(id)arg0 ;
-(void)_updateTrimmerPlayerForCell:(id)arg0 ;
-(void)addButtonTouchUpInside:(id)arg0 ;
-(void)addWithCompletion:(id)arg0 ;
-(void)assetSuggestionsController:(id)arg0 didFinishPickingAssets:(id)arg1 ;
-(void)assetSuggestionsControllerDidDismiss:(id)arg0 ;
-(void)cancelButtonTouchUpInside:(id)arg0 ;
-(void)clipCollection:(id)arg0 didBeginDisplayingCell:(id)arg1 indexPath:(id)arg2 ;
-(void)clipCollection:(id)arg0 didCancelInteractiveMovementForItemAtIndexPath:(id)arg1 ;
-(void)clipCollection:(id)arg0 didEndDisplayingCell:(id)arg1 indexPath:(id)arg2 ;
-(void)clipCollection:(id)arg0 didEndInteractiveMovementForItemAtIndexPath:(id)arg1 ;
-(void)clipCollection:(id)arg0 didSelectIndexPath:(id)arg1 ;
-(void)clipCollection:(id)arg0 didSetClipOnCell:(id)arg1 indexPath:(id)arg2 ;
-(void)clipCollection:(id)arg0 didSnapToIndexPath:(id)arg1 ;
-(void)clipCollection:(id)arg0 moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)clipCollection:(id)arg0 willBeginInteractiveMovementForItemAtIndexPath:(id)arg1 ;
-(void)clipCollectionDidScroll:(id)arg0 ;
-(void)clipCollectionProviderDidUpdateResults:(id)arg0 error:(id)arg1 ;
-(void)clipCollectionProviderWillUpdateResults:(id)arg0 ;
-(void)dealloc;
-(void)debugAutoEditButtonTouchUpInside:(id)arg0 ;
-(void)didReceiveMemoryWarning;
-(void)dislikeButtonTouchUpInside:(id)arg0 ;
-(void)doneButtonTouchUpInside:(id)arg0 ;
-(void)editorClipCellDidChangeSpecialTreatment:(id)arg0 ;
-(void)editorClipCellDidStartPlaying:(id)arg0 ;
-(void)editorClipCellDidStopPlaying:(id)arg0 ;
-(void)editorClipCellWillStartPlaying:(id)arg0 ;
-(void)handleChangedProgress:(CGFloat)arg0 taskDescription:(id)arg1 ;
-(void)handleTapOnSnappedClip:(id)arg0 ;
-(void)playCurrentCellIfPossible;
-(void)playPauseButtonTouchUpInside:(id)arg0 ;
-(void)prepareForSegue:(id)arg0 sender:(id)arg1 ;
-(void)removeClipAtIndexPath:(id)arg0 ;
-(void)setupWithProduction:(id)arg0 andResult:(id)arg1 ;
-(void)trimmer:(id)arg0 didContinueTrimmingWithClipProvider:(id)arg1 startTime:(float)arg2 endTime:(float)arg3 ;
-(void)trimmer:(id)arg0 didEndTrimmingWithClipProvider:(id)arg1 startTime:(float)arg2 endTime:(float)arg3 ;
-(void)trimmer:(id)arg0 willStartTrimmingWithClipProvider:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif