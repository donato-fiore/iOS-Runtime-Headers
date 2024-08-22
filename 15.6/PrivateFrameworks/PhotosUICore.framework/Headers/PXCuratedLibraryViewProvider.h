// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCURATEDLIBRARYVIEWPROVIDER_H
#define PXCURATEDLIBRARYVIEWPROVIDER_H

@class NSString, PHPhotoLibrary;
@protocol PXGViewDiagnosticsSource, PXZoomablePhotosInteractionDelegate, PXChangeObserver, PXGAXResponder, PXCuratedLibraryEventTracker;

#import <Foundation/Foundation.h>

#import "PXCuratedLibraryAssetsDataSourceManager.h"
#import "PXExtendedTraitCollection.h"
#import "PXCuratedLibraryFooterController.h"
#import "PXGView.h"
#import "PXAssetsDataSourceCountsController.h"
#import "PXCuratedLibraryLayout.h"
#import "PXUIMediaProvider.h"
#import "PXAssetReference.h"
#import "PXSectionedObjectReference.h"
#import "PXCuratedLibraryVideoPlaybackController.h"
#import "PXCuratedLibraryViewModel.h"
#import "PXZoomablePhotosInteraction.h"

@interface PXCuratedLibraryViewProvider : NSObject <PXGViewDiagnosticsSource, PXZoomablePhotosInteractionDelegate, PXChangeObserver, PXGAXResponder>



@property (readonly, nonatomic) PXCuratedLibraryAssetsDataSourceManager *assetsDataSourceManager; // ivar: _assetsDataSourceManager
@property (weak, nonatomic) NSObject<PXGAXResponder> *axNextResponder; // ivar: _axNextResponder
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PXCuratedLibraryEventTracker> *eventTracker; // ivar: _eventTracker
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection; // ivar: _extendedTraitCollection
@property (readonly, nonatomic) PXCuratedLibraryFooterController *footerController; // ivar: _footerController
@property (readonly, nonatomic) PXGView *gridView; // ivar: _gridView
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXAssetsDataSourceCountsController *itemCountsController; // ivar: _itemCountsController
@property (readonly, nonatomic) PXCuratedLibraryLayout *layout; // ivar: _layout
@property (readonly, nonatomic) PXUIMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) PXAssetReference *preferredAnchorAssetReference;
@property (readonly, nonatomic) PXSectionedObjectReference *preferredObjectReferenceToScrollToWhenRestoringState;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXCuratedLibraryVideoPlaybackController *videoPlaybackController; // ivar: _videoPlaybackController
@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel; // ivar: _viewModel
@property (readonly, nonatomic) PXZoomablePhotosInteraction *zoomablePhotosInteraction; // ivar: _zoomablePhotosInteraction


-(BOOL)axGroup:(id)arg0 didRequestToPerformAction:(NSInteger)arg1 userInfo:(id)arg2 ;
-(BOOL)canSelectObjectAtIndexPath:(struct PXSimpleIndexPath )arg0 inDataSource:(id)arg1 ;
-(BOOL)ensureSelectMode;
-(BOOL)zoomablePhotosInteractionShouldBegin:(id)arg0 ;
-(NSInteger)selectionBasisForSelectionManager:(id)arg0 ;
-(id)_itemsGeometryForDataSource:(id)arg0 ;
-(id)additionalRectDiagnosticsProvidersForView:(id)arg0 ;
-(id)axContainingScrollViewForAXGroup:(id)arg0 ;
-(id)discoverabilityTitleForActionType:(id)arg0 ;
-(id)hitTestResultControlsForCurrentZoomLevel;
-(id)indexPathsForItemsInRect:(struct CGRect )arg0 coordinateSpace:(id)arg1 ;
-(id)indexPathsFromIndexPath:(struct PXSimpleIndexPath )arg0 toIndexPath:(struct PXSimpleIndexPath )arg1 inDataSource:(id)arg2 ;
-(id)init;
-(id)initWithPhotoLibrary:(id)arg0 extendedTraitCollection:(id)arg1 ;
-(id)selectionManager:(id)arg0 indexPathsBetweenIndexPath:(struct PXSimpleIndexPath )arg1 andIndexPath:(struct PXSimpleIndexPath )arg2 inDirection:(NSUInteger)arg3 ;
-(id)zoomablePhotosInteraction:(id)arg0 assetReferenceAtLocation:(struct CGPoint )arg1 ;
-(struct PXSimpleIndexPath )_indexPathClosestToIndexPath:(struct PXSimpleIndexPath )arg0 fromDataSource:(id)arg1 inDirection:(NSUInteger)arg2 ;
-(struct PXSimpleIndexPath )selectableIndexPathClosestToIndexPath:(struct PXSimpleIndexPath )arg0 fromDataSource:(id)arg1 inDirection:(NSUInteger)arg2 ;
-(struct PXSimpleIndexPath )selectionManager:(id)arg0 indexPathClosestToIndexPath:(struct PXSimpleIndexPath )arg1 inDirection:(NSUInteger)arg2 ;
-(struct UIEdgeInsets )anchorPaddingForCurrentZoomLevel;
-(void)_handleChangeToModifySelectionWithUserInfo:(id)arg0 ;
-(void)_logLibraryCountsIfNecessary;
-(void)axGroup:(id)arg0 didChange:(NSUInteger)arg1 userInfo:(id)arg2 ;
-(void)extendSelectionInDirection:(NSUInteger)arg0 ;
-(void)moveSelectionInDirection:(NSUInteger)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performActionWithType:(id)arg0 ;
-(void)prepareForNavigationToObjectReference:(id)arg0 ;
-(void)scrollLibraryViewToAssetReference:(id)arg0 scrollPosition:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)scrollLibraryViewToObjectReference:(id)arg0 scrollPosition:(NSUInteger)arg1 padding:(struct UIEdgeInsets )arg2 completionHandler:(id)arg3 ;
-(void)selectionManager:(id)arg0 revealObjectAtIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(void)toggleSelectMode;
-(void)zoomInAllPhotos;
-(void)zoomOutAllPhotos;
-(void)zoomablePhotosInteractionWillBegin:(id)arg0 ;


@end


#endif