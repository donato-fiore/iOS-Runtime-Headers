// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOSALBUMVIEWCONTROLLER_H
#define PUPHOTOSALBUMVIEWCONTROLLER_H

@class PHAssetCollection, PHFetchResult, NSString, PXEditableNavigationTitleView;
@protocol PUSectionedGridLayoutDelegate, PUPhotosSectionHeaderViewDelegate, PXEditableNavigationTitleViewDelegate, PLAlbumProtocol;


#import "PUPhotosGridViewController.h"
#import "PUPhotosPickerViewController.h"
#import "PUPhotosAlbumViewControllerSpec.h"

@interface PUPhotosAlbumViewController : PUPhotosGridViewController <PUSectionedGridLayoutDelegate, PUPhotosSectionHeaderViewDelegate, PXEditableNavigationTitleViewDelegate>

 {
    ? _needsUpdateFlags;
    PUPhotosPickerViewController *_activePhotosPickerViewController;
}


@property (retain, nonatomic, setter=_setAlbumSpec:) PUPhotosAlbumViewControllerSpec *_albumSpec; // ivar: __albumSpec
@property (nonatomic, setter=_setHasAccurateCounts:) BOOL _hasAccurateCounts; // ivar: __hasAccurateCounts
@property (nonatomic, setter=_setCountingAssetTypes:) BOOL _isCountingAssetTypes; // ivar: __isCountingAssetTypes
@property (retain, nonatomic) NSObject<PLAlbumProtocol> *album; // ivar: _album
@property (readonly, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (readonly, nonatomic) PHFetchResult *assetCollectionAssets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXEditableNavigationTitleView *editableTitleView; // ivar: _editableTitleView
@property (readonly, nonatomic) NSString *globalFooterSubtitle;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldShowSectionHeaders;
@property (readonly) Class superclass;


-(BOOL)allowSelectAllButton;
-(BOOL)canBeginStackCollapseTransition;
-(BOOL)canDragIn;
-(BOOL)canDragOut;
-(BOOL)canHandleDropSession:(id)arg0 ;
-(BOOL)isCameraRoll;
-(BOOL)isTrashBinViewController;
-(BOOL)prepareForDismissingForced:(BOOL)arg0 ;
-(BOOL)updateSpec;
-(BOOL)wantsGlobalFooter;
-(CGFloat)globalHeaderHeight;
-(CGFloat)sectionedGridLayout:(id)arg0 accessibilitySectionHeaderHeightForVisualSection:(NSInteger)arg1 ;
-(CGFloat)sectionedGridLayout:(id)arg0 sectionHeaderHeightForVisualSection:(NSInteger)arg1 ;
-(NSInteger)cellFillMode;
-(NSInteger)oneUpPresentationOrigin;
-(NSUInteger)additionalOneUpViewControllerOptions;
-(NSUInteger)routingOptionsForDestination:(id)arg0 ;
-(NSUInteger)userEventSourceType;
-(id)_collectionView:(id)arg0 dropSessionDidUpdate:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(id)_globalHeaderTitle;
-(id)editableNavigationTitleView:(id)arg0 validateNewText:(id)arg1 ;
-(id)filterPredicateForAlbum:(id)arg0 ;
-(id)initWithAlbumSpec:(id)arg0 ;
-(id)initWithSpec:(id)arg0 ;
-(id)localizedTitleForAssets:(id)arg0 ;
-(id)newGridLayout;
-(id)px_navigationDestination;
-(id)sessionInfoForTransferredAssets:(id)arg0 ;
-(struct CGPoint )contentOffsetForPreheating;
-(void)_collectionView:(id)arg0 performDropWithCoordinator:(id)arg1 ;
-(void)_countAssetTypesIfNeeded;
-(void)_ensureEditableTitleView;
-(void)_getDataForVisualSection:(NSInteger)arg0 hasActionButton:(*BOOL)arg1 locations:(*id)arg2 title:(*id)arg3 startDate:(*id)arg4 endDate:(*id)arg5 ;
-(void)_invalideSectionHeaders;
-(void)_performAddDropWithSession:(id)arg0 ;
-(void)_performMoveDropWithCoordinator:(id)arg0 ;
-(void)_setNeedsUpdate;
-(void)_updateSectionHeadersIfNeeded;
-(void)configureGlobalFooterView:(id)arg0 ;
-(void)configureGlobalHeaderView:(id)arg0 ;
-(void)configureSupplementaryView:(id)arg0 ofKind:(id)arg1 forIndexPath:(id)arg2 ;
-(void)didTapHeaderView:(id)arg0 ;
-(void)dropInteraction:(id)arg0 performDrop:(id)arg1 ;
-(void)editableNavigationTitleViewDidEndEditing:(id)arg0 ;
-(void)handleAddFromAction;
-(void)handleAddToAlbum:(id)arg0 pickedAssets:(id)arg1 ;
-(void)handleTransitionFade:(BOOL)arg0 animate:(BOOL)arg1 ;
-(void)navigateToDestination:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)photosDataSource:(id)arg0 didReceivePhotoLibraryChange:(id)arg1 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSessionInfo:(id)arg0 ;
-(void)setupScrubber;
-(void)updateLayoutMetrics;
-(void)updateTitle;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif