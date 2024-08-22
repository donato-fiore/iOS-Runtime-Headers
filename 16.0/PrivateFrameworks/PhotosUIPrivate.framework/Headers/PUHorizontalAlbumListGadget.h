// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUHORIZONTALALBUMLISTGADGET_H
#define PUHORIZONTALALBUMLISTGADGET_H

@class PXHorizontalCollectionGadget, NSString, PXGadgetOrbContext, NSUserActivity;
@protocol PUStackedAlbumTransitionDelegate, PUCloudSharedAlbumViewControllerDelegate, PXAssetCollectionActionPerformerDelegate, PXNavigableCollectionContainer;


#import "PUAlbumListViewControllerSpec.h"
#import "PUPhotoPinchGestureRecognizer.h"
#import "PUAlbumsGadgetProvider.h"
#import "PUSessionInfo.h"

@interface PUHorizontalAlbumListGadget : PXHorizontalCollectionGadget <PUStackedAlbumTransitionDelegate, PUCloudSharedAlbumViewControllerDelegate, PXAssetCollectionActionPerformerDelegate, PXNavigableCollectionContainer>



@property (readonly, nonatomic) PUAlbumListViewControllerSpec *albumListViewControllerSpec;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PUPhotoPinchGestureRecognizer *pinchGestureRecognizer; // ivar: _pinchGestureRecognizer
@property (retain, nonatomic) PXGadgetOrbContext *previewOrbContext; // ivar: _previewOrbContext
@property (readonly, nonatomic) PUAlbumsGadgetProvider *provider; // ivar: _provider
@property (retain, nonatomic) PUSessionInfo *sessionInfo; // ivar: _sessionInfo
@property (nonatomic) BOOL shouldUseSingleHeightLayout; // ivar: _shouldUseSingleHeightLayout
@property (retain, nonatomic) NSUserActivity *siriActionActivity; // ivar: _siriActionActivity
@property (readonly) Class superclass;


+(BOOL)_showsHorizontalScrollIndicator;
-(BOOL)_canUseStackedAlbumTransitionToNavigationToCollection:(id)arg0 ;
-(BOOL)actionPerformer:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg0 presentViewController:(id)arg1 ;
-(BOOL)canNavigateToCollection:(id)arg0 ;
-(BOOL)collectionView:(id)arg0 shouldSpringLoadItemAtIndexPath:(id)arg1 withContext:(id)arg2 ;
-(NSUInteger)accessoryButtonType;
-(NSUInteger)gadgetCapabilities;
-(NSUInteger)gadgetType;
-(id)accessoryButtonTitle;
-(id)contextMenuWithSuggestedActions:(id)arg0 ;
-(id)init;
-(id)initWithAlbumsGadgetProvider:(id)arg0 ;
-(id)previewContextGadget;
-(id)previewParametersForTargetPreviewView:(id)arg0 ;
-(id)previewViewControllerAtLocation:(struct CGPoint )arg0 fromSourceView:(id)arg1 ;
-(id)px_gridPresentation;
-(id)stackedAlbumTransition:(id)arg0 layoutForCollection:(id)arg1 forCollectionView:(id)arg2 ;
-(id)stackedAlbumTransition:(id)arg0 layoutForPHCollection:(id)arg1 forCollectionView:(id)arg2 ;
-(id)targetPreviewViewForLocation:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(id)undoManagerForActionPerformer:(id)arg0 ;
-(void)_handlePinch:(id)arg0 ;
-(void)_navigateToCollection:(id)arg0 animated:(BOOL)arg1 interactive:(BOOL)arg2 completion:(id)arg3 ;
-(void)_updateCollectionHeight;
-(void)_updateCollectionViewLayout;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 performDropWithCoordinator:(id)arg1 ;
-(void)commitPreviewView:(id)arg0 ;
-(void)commitPreviewViewController:(id)arg0 ;
-(void)didDismissPreviewViewController:(id)arg0 committing:(BOOL)arg1 ;
-(void)didDismissPreviewWithPreviewView:(id)arg0 committing:(BOOL)arg1 ;
-(void)gadget:(id)arg0 didChange:(NSUInteger)arg1 ;
-(void)navigateToCollection:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)setGadgetSpec:(id)arg0 ;
-(void)sharedAlbumDeletedBySharedAlbumViewController:(id)arg0 ;
-(void)stackedAlbumTransition:(id)arg0 setVisibility:(BOOL)arg1 forCollection:(id)arg2 ;
-(void)stackedAlbumTransition:(id)arg0 setVisibility:(BOOL)arg1 forPHCollection:(id)arg2 ;
-(void)viewDidLoad;


@end


#endif