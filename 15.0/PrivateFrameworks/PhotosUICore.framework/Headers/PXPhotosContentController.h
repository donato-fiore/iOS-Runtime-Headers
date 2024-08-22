// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOSCONTENTCONTROLLER_H
#define PXPHOTOSCONTENTCONTROLLER_H

@class NSString, UIView;
@protocol PXGViewSource, PXPhotosSectionHeaderLayoutViewProvider, PXScrollViewControllerObserver, PXPhotosGridFooterStatusControllerDelegate, PXPhotosGridFooterPresentationDelegate, PXPhotosLayoutDelegate, PXPhotosViewInteractionDelegate, PXChangeObserver, PXGAXResponder, PXSectionedDirectionSelectionScrollableDelegate, PXPhotosContentControllerDelegate, PXPhotosViewEventTracker;

#import <Foundation/Foundation.h>

#import "PXAssetReference.h"
#import "PXPhotosBarsController.h"
#import "PXAssetsDataSourceCountsController.h"
#import "PXPhotosGridFooterPresentation.h"
#import "PXPhotosGridFooterStatusController.h"
#import "PXGView.h"
#import "PXPhotosViewInteraction.h"
#import "PXPhotosLayout.h"
#import "PXMediaProvider.h"
#import "PXExtendedTraitCollection.h"
#import "PXUpdater.h"
#import "PXPhotosViewModel.h"

@interface PXPhotosContentController : NSObject <PXGViewSource, PXPhotosSectionHeaderLayoutViewProvider, PXScrollViewControllerObserver, PXPhotosGridFooterStatusControllerDelegate, PXPhotosGridFooterPresentationDelegate, PXPhotosLayoutDelegate, PXPhotosViewInteractionDelegate, PXChangeObserver, PXGAXResponder, PXSectionedDirectionSelectionScrollableDelegate>



@property (readonly, nonatomic) PXAssetReference *assetReferenceForCurrentScrollPosition;
@property (weak, nonatomic) NSObject<PXGAXResponder> *axNextResponder; // ivar: _axNextResponder
@property (readonly, nonatomic) PXPhotosBarsController *barsController; // ivar: _barsController
@property (readonly, nonatomic) PXAssetsDataSourceCountsController *countsController; // ivar: _countsController
@property (retain, nonatomic) Class customDecorationViewClass; // ivar: _customDecorationViewClass
@property (retain, nonatomic) id *dataSourceManagerPauseToken; // ivar: _dataSourceManagerPauseToken
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXPhotosContentControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PXPhotosViewEventTracker> *eventTracker; // ivar: _eventTracker
@property (readonly, nonatomic) PXPhotosGridFooterPresentation *footerPresentation; // ivar: _footerPresentation
@property (readonly, nonatomic) PXPhotosGridFooterStatusController *footerStatusController; // ivar: _footerStatusController
@property (readonly, nonatomic) PXGView *gridView; // ivar: _gridView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *headerView; // ivar: _headerView
@property (readonly, nonatomic) PXPhotosViewInteraction *interaction; // ivar: _interaction
@property (readonly, nonatomic) PXPhotosLayout *layout; // ivar: _layout
@property (readonly, nonatomic) PXMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) BOOL needsCountsInitially; // ivar: _needsCountsInitially
@property (readonly, nonatomic) BOOL needsFooterStatusController; // ivar: _needsFooterStatusController
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXExtendedTraitCollection *traitCollection; // ivar: _traitCollection
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (readonly, nonatomic) PXPhotosViewModel *viewModel; // ivar: _viewModel


-(?)regionOfInterestForAssetReferenceimage;
-(BOOL)axGroup:(id)arg0 didRequestToPerformAction:(NSInteger)arg1 userInfo:(id)arg2 ;
-(BOOL)canSelectObjectAtIndexPath:(struct PXSimpleIndexPath )arg0 inDataSource:(id)arg1 ;
-(Class)viewClassForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(NSInteger)selectionBasisForSelectionManager:(id)arg0 ;
-(id)axContainingScrollViewForAXGroup:(id)arg0 ;
-(id)indexPathsForItemsInRect:(struct CGRect )arg0 coordinateSpace:(id)arg1 ;
-(id)indexPathsFromIndexPath:(struct PXSimpleIndexPath )arg0 toIndexPath:(struct PXSimpleIndexPath )arg1 inDataSource:(id)arg2 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 traitCollection:(id)arg1 ;
-(id)photosLayout:(id)arg0 animationForProposedAnimation:(id)arg1 ;
-(id)presentingViewControllerForFooterStatusController:(id)arg0 ;
-(id)presentingViewControllerForPhotosInteraction:(id)arg0 ;
-(id)regionOfInterestForAssetReference:(id)arg0 ;
-(id)sectionHeaderLayout:(id)arg0 viewForSpriteReference:(id)arg1 ;
-(id)selectionManager:(id)arg0 indexPathsBetweenIndexPath:(struct PXSimpleIndexPath )arg1 andIndexPath:(struct PXSimpleIndexPath )arg2 inDirection:(NSUInteger)arg3 ;
-(id)viewUserDataForSpriteAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(struct PXSimpleIndexPath )_indexPathClosestToIndexPath:(struct PXSimpleIndexPath )arg0 fromDataSource:(id)arg1 inDirection:(NSUInteger)arg2 ;
-(struct PXSimpleIndexPath )_selectableIndexPathClosestToIndexPath:(struct PXSimpleIndexPath )arg0 fromDataSource:(id)arg1 inDirection:(NSUInteger)arg2 ;
-(struct PXSimpleIndexPath )selectableIndexPathClosestToIndexPath:(struct PXSimpleIndexPath )arg0 inDirection:(NSUInteger)arg1 ;
-(struct PXSimpleIndexPath )selectionManager:(id)arg0 indexPathClosestToIndexPath:(struct PXSimpleIndexPath )arg1 inDirection:(NSUInteger)arg2 ;
-(void)_handleChangeToModifySelectionWithUserInfo:(id)arg0 ;
-(void)_invalidateHasScrollableContent;
-(void)_invalidateHeaderView;
-(void)_setNeedsUpdate;
-(void)_updateBarsController;
-(void)_updateHasScrollableContent;
-(void)_updateHeaderView;
-(void)_updateIsInCompactMode;
-(void)axGroup:(id)arg0 didChange:(NSUInteger)arg1 userInfo:(id)arg2 ;
-(void)contentViewDidAppear:(BOOL)arg0 ;
-(void)contentViewDidScrollToInitialPosition;
-(void)contentViewWillAppear:(BOOL)arg0 ;
-(void)dismissPresentedViewControllerForFooterPresentation:(id)arg0 ;
-(void)enumerateAssetHitTestResultsInDirection:(NSUInteger)arg0 fromSpriteReference:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateAssetHitTestResultsInRect:(struct CGRect )arg0 usingBlock:(id)arg1 ;
-(void)extendSelectionInDirection:(NSUInteger)arg0 ;
-(void)footerPresentation:(id)arg0 presentViewController:(id)arg1 ;
-(void)moveSelectionInDirection:(NSUInteger)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)resumeDataSourceChangesIfNeeded;
-(void)scrollToEdge:(unsigned int)arg0 completionHandler:(id)arg1 ;
-(void)scrollToInitialPositionAnimated:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)scrollToRevealAsset:(id)arg0 completionHandler:(id)arg1 ;
-(void)scrollToRevealAssetReference:(id)arg0 completionHandler:(id)arg1 ;
-(void)scrollToRevealAssetReference:(id)arg0 padding:(struct UIEdgeInsets )arg1 completionHandler:(id)arg2 ;
-(void)scrollToRevealAssetReference:(id)arg0 scrollPosition:(NSUInteger)arg1 padding:(struct UIEdgeInsets )arg2 completionHandler:(id)arg3 ;
-(void)scrollViewControllerContentBoundsDidChange:(id)arg0 ;
-(void)selectionManager:(id)arg0 revealObjectAtIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(void)stopForceIncludingAllAssetsInDataSource;
-(void)suspendDataSourceChangesWithTimeout:(CGFloat)arg0 identifier:(id)arg1 ;
-(void)updateIfNeeded;


@end


#endif