// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTAVATARATTRIBUTEEDITORVIEWCONTROLLER_H
#define AVTAVATARATTRIBUTEEDITORVIEWCONTROLLER_H

@class UIViewController, UILabel, AVTAttributeEditorAnimationCoordinator, UICollectionView, UIView, AVTMemoji, AVTAvatarRecord, NSString, NSDate, UITapGestureRecognizer, CALayer;
@protocol UICollectionViewDataSource, UICollectionViewDataSourcePrefetching, UICollectionViewDelegateFlowLayout, AVTAvatarAttributeEditorControllerSubSelectionDelegate, AVTGroupPickerDelegate, AVTCollapsibleHeaderControllerDelegate, AVTTransitionModel, AVTNotifyingContainerViewDelegate, AVTFaceTrackingManagerDelegate, AVTAttributeEditorSectionHeaderViewDelegate, AVTAvatarAttributeEditorLayout, AVTAvatarAttributeEditorViewControllerDelegate, AVTTaskScheduler;


#import "AVTViewCarouselLayout.h"
#import "AVTViewSession.h"
#import "AVTViewSessionProvider.h"
#import "AVTViewThrottler.h"
#import "AVTBodyCarouselController.h"
#import "AVTCollapsibleHeaderController.h"
#import "AVTAvatarEditorColorsState.h"
#import "AVTTransition.h"
#import "AVTAvatarAttributeEditorDataSource.h"
#import "AVTUIEnvironment.h"
#import "AVTGroupDial.h"
#import "AVTGroupListCollectionView.h"
#import "_AVTAvatarRecordImageProvider.h"
#import "AVTAvatarAttributeEditorModelManager.h"
#import "AVTShadowView.h"
#import "AVTImageTransitioningContainerView.h"

@interface AVTAvatarAttributeEditorViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDataSourcePrefetching, UICollectionViewDelegateFlowLayout, AVTAvatarAttributeEditorControllerSubSelectionDelegate, AVTGroupPickerDelegate, AVTCollapsibleHeaderControllerDelegate, AVTTransitionModel, AVTNotifyingContainerViewDelegate, AVTFaceTrackingManagerDelegate, AVTAttributeEditorSectionHeaderViewDelegate>



@property (nonatomic) BOOL allowFacetracking; // ivar: _allowFacetracking
@property (retain, nonatomic) UILabel *alphaAssetsLabel; // ivar: _alphaAssetsLabel
@property (retain, nonatomic) AVTAttributeEditorAnimationCoordinator *animationCoordinator; // ivar: _animationCoordinator
@property (retain, nonatomic) UICollectionView *attributesCollectionView; // ivar: _attributesCollectionView
@property (retain, nonatomic) UIView *attributesContainerView; // ivar: _attributesContainerView
@property (readonly, nonatomic) AVTMemoji *avatar;
@property (readonly, nonatomic) AVTAvatarRecord *avatarRecord;
@property (retain, nonatomic) AVTViewCarouselLayout *avtViewLayout; // ivar: _avtViewLayout
@property (retain, nonatomic) AVTViewSession *avtViewSession; // ivar: _avtViewSession
@property (readonly, nonatomic) AVTViewSessionProvider *avtViewSessionProvider; // ivar: _avtViewSessionProvider
@property (retain, nonatomic) AVTViewThrottler *avtViewThrottler; // ivar: _avtViewThrottler
@property (retain, nonatomic) AVTBodyCarouselController *bodyEditorHeaderViewController; // ivar: _bodyEditorHeaderViewController
@property (retain, nonatomic) AVTCollapsibleHeaderController *collapsibleHeaderController; // ivar: _collapsibleHeaderController
@property (nonatomic) BOOL collectionViewIsPerformingBatchUpdates; // ivar: _collectionViewIsPerformingBatchUpdates
@property (retain, nonatomic) AVTAvatarEditorColorsState *colorsState; // ivar: _colorsState
@property (retain, nonatomic) NSObject<AVTAvatarAttributeEditorLayout> *currentLayout; // ivar: _currentLayout
@property (retain, nonatomic) AVTTransition *currentTransition; // ivar: _currentTransition
@property (retain, nonatomic) AVTAvatarAttributeEditorDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVTAvatarAttributeEditorViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableAvatarSnapshotting; // ivar: _disableAvatarSnapshotting
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (retain, nonatomic) AVTGroupDial *groupDial; // ivar: _groupDial
@property (retain, nonatomic) UIView *groupDialContainerView; // ivar: _groupDialContainerView
@property (retain, nonatomic) AVTGroupListCollectionView *groupListView; // ivar: _groupListView
@property (nonatomic) BOOL hasMadeAnySelection; // ivar: _hasMadeAnySelection
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *headerContainerView; // ivar: _headerContainerView
@property (retain, nonatomic) UIView *headerMaskingView; // ivar: _headerMaskingView
@property (retain, nonatomic) _AVTAvatarRecordImageProvider *headerPreviewImageRenderer; // ivar: _headerPreviewImageRenderer
@property (readonly, nonatomic) NSObject<AVTTaskScheduler> *headerPreviewScheduler; // ivar: _headerPreviewScheduler
@property (readonly, nonatomic) NSObject<AVTTaskScheduler> *imageProviderScheduler; // ivar: _imageProviderScheduler
@property (nonatomic) BOOL isAnimatingHighlight; // ivar: _isAnimatingHighlight
@property (readonly, nonatomic) BOOL isCreating; // ivar: _isCreating
@property (retain, nonatomic) NSDate *lastPosedAvatarImageRenderingTime; // ivar: _lastPosedAvatarImageRenderingTime
@property (readonly, nonatomic) AVTAvatarAttributeEditorModelManager *modelManager; // ivar: _modelManager
@property (copy, nonatomic) id *pendingCollectionViewReloadDataBlock; // ivar: _pendingCollectionViewReloadDataBlock
@property (copy, nonatomic) id *pendingUnhighlightBlock; // ivar: _pendingUnhighlightBlock
@property (copy, nonatomic) id *postSessionDidBecomeActiveHandler; // ivar: _postSessionDidBecomeActiveHandler
@property (nonatomic) NSUInteger previewModeType; // ivar: _previewModeType
@property (retain, nonatomic) AVTShadowView *shadowView; // ivar: _shadowView
@property (nonatomic) BOOL shouldHideUserInfoView; // ivar: _shouldHideUserInfoView
@property (retain, nonatomic) UIView *sideGroupContainerView; // ivar: _sideGroupContainerView
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (retain, nonatomic) AVTImageTransitioningContainerView *transitioningContainer; // ivar: _transitioningContainer
@property (retain, nonatomic) CALayer *verticleRule; // ivar: _verticleRule
@property (retain, nonatomic) UIView *verticleRuleContainer; // ivar: _verticleRuleContainer


+(id)attributeRowIdentifier;
+(id)colorRowIdentifier;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(CGFloat)maxGroupLabelWidth;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)interfaceOrientationForFaceTrackingManager:(id)arg0 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)createAlphaAssetsLabel;
-(id)init;
-(id)initWithAvatarRecord:(id)arg0 avtViewSessionProvider:(id)arg1 environment:(id)arg2 isCreating:(BOOL)arg3 ;
-(id)liveView;
-(id)presetSectionItemForIndexPath:(id)arg0 ;
-(id)selectedItemInSection:(id)arg0 ;
-(id)visibleLayout;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )adjustedSafeAreaInsets;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)applyBaseAlpha;
-(void)applyFullAlpha;
-(void)applyLayout:(id)arg0 ;
-(void)applyLayout:(id)arg0 layoutAvatarView:(BOOL)arg1 ;
-(void)attributeEditorSectionController:(id)arg0 didDeleteSectionItems:(id)arg1 ;
-(void)attributeEditorSectionController:(id)arg0 didSelectSectionItem:(id)arg1 ;
-(void)attributeEditorSectionController:(id)arg0 didUpdateSectionItem:(id)arg1 ;
-(void)attributeEditorSectionControllerNeedsLayoutUpdate:(id)arg0 ;
-(void)beginAVTViewSessionWithDidBeginBlock:(id)arg0 ;
-(void)collapsibleHeaderController:(id)arg0 didUpdateHeaderToHeight:(CGFloat)arg1 ;
-(void)collapsibleHeaderController:(id)arg0 isUpdatingHeaderWithIncrementalHeight:(CGFloat)arg1 ;
-(void)collapsibleHeaderController:(id)arg0 willUpdateHeaderToHeight:(CGFloat)arg1 ;
-(void)collectionView:(id)arg0 cancelPrefetchingForItemsAtIndexPaths:(id)arg1 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didHighlightItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didUnhighlightItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 prefetchItemsAtIndexPaths:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)configureAVTViewFromSession:(id)arg0 ;
-(void)configurePPTMemoji:(id)arg0 ;
-(void)configureThrottlerForAVTView:(id)arg0 ;
-(void)configureUserInfoLabel;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)createVerticleRuleIfNeeded;
-(void)didFinishEditing;
-(void)didTapAvatarView:(id)arg0 ;
-(void)groupPicker:(id)arg0 didDeselectGroupAtIndex:(NSInteger)arg1 ;
-(void)groupPicker:(id)arg0 didSelectGroupAtIndex:(NSInteger)arg1 tapped:(BOOL)arg2 ;
-(void)loadView;
-(void)notifyingContainerViewDidChangeSize:(struct CGSize )arg0 ;
-(void)notifyingContainerViewWillChangeSize:(struct CGSize )arg0 ;
-(void)prepareForAnimatedTransitionWithLayout:(id)arg0 completionBlock:(id)arg1 ;
-(void)prepareForPresetsScrollTestOnCategory:(id)arg0 readyHandler:(id)arg1 ;
-(void)rebuildUIModelAfterSelectionInSection:(id)arg0 senderRect:(struct CGRect )arg1 ;
-(void)rebuildUIModelAfterSelectionInSection:(id)arg0 senderRect:(struct CGRect )arg1 reloadSections:(BOOL)arg2 ;
-(void)reloadCollectionViewDataWithCompletion:(id)arg0 ;
-(void)resetAllSectionControllersStateToDefault;
-(void)sectionHeaderView:(id)arg0 didSelectItem:(id)arg1 forPicker:(id)arg2 sender:(id)arg3 ;
-(void)selectCategory:(id)arg0 withCompletionDelay:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)setUpHeaderView;
-(void)setupCollapsibleHeaderIfNeededForLayout:(id)arg0 withSession:(id)arg1 ;
-(void)setupGroupSelectorIfNeeded;
-(void)setupImageView;
-(void)setupPreview:(id)arg0 ;
-(void)setupTapGestureForView:(id)arg0 ;
-(void)tearDownCollapsibleHeaderIfNeeded;
-(void)tearDownThrottler;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)transitionLiveViewToFront;
-(void)transitionStaticViewToFront;
-(void)transitionToLiveViewAnimated:(BOOL)arg0 ;
-(void)updateAlphaAssetsLabelFrameIfNeeded;
-(void)updateBodyEditorHeaderIfNeeded;
-(void)updateCollapsibleHeaderHeightConstraintsAnimated:(BOOL)arg0 ;
-(void)updateForChangedSelectionIfNeeded;
-(void)updateForSelectionOfItem:(id)arg0 controller:(id)arg1 reloadSections:(BOOL)arg2 ;
-(void)updateForSelectionOfItem:(id)arg0 inSection:(id)arg1 senderRect:(struct CGRect )arg2 reloadSections:(BOOL)arg3 ;
-(void)updateForSelectionOfSupplementalItem:(id)arg0 senderRect:(struct CGRect )arg1 ;
-(void)updateHeaderDependentLayoutWithHeaderFrame:(struct CGRect )arg0 fittingSize:(struct CGSize )arg1 ;
-(void)updateHeaderViewForPreviewModeType:(NSUInteger)arg0 ;
-(void)updateImageViewWithPosedAvatarRecordForcingRender:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)updateLayoutAttributes;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif