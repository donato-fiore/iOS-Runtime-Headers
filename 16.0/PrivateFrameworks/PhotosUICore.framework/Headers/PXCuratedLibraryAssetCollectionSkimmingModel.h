// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCURATEDLIBRARYASSETCOLLECTIONSKIMMINGMODEL_H
#define PXCURATEDLIBRARYASSETCOLLECTIONSKIMMINGMODEL_H


#import <Foundation/Foundation.h>

#import "PXAssetCollectionReference.h"
#import "PXIndexPathSet.h"
#import "PXCuratedLibraryViewModel.h"

@interface PXCuratedLibraryAssetCollectionSkimmingModel : NSObject {
    NSInteger _zoomLevel;
    NSInteger _skimmingZoomLevel;
    id *_dataSourcePauseToken;
}


@property (readonly, nonatomic) BOOL canStartSkimming;
@property (readonly, nonatomic) PXAssetCollectionReference *containingAssetCollectionReference; // ivar: _containingAssetCollectionReference
@property (readonly, copy, nonatomic) PXIndexPathSet *indexPathSetForSkimming; // ivar: _indexPathSetForSkimming
@property (readonly, nonatomic) PXSimpleIndexPath initialIndexPath; // ivar: _initialIndexPath
@property (readonly, nonatomic) BOOL isInteractionInProgress; // ivar: _isInteractionInProgress
@property (readonly, nonatomic) BOOL isPlayingSlideshow; // ivar: _isPlayingSlideshow
@property (nonatomic) PXSimpleIndexPath skimmedIndexPath; // ivar: _skimmedIndexPath
@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel; // ivar: _viewModel


-(id)initWithViewModel:(id)arg0 ;
-(id)validatedAssetCollectionReference:(id)arg0 ;
-(void)_prepareIndexesForAssetCollectionReference:(id)arg0 willStartSkimming:(BOOL)arg1 willStartSlideshow:(BOOL)arg2 ;
-(void)_updateViewModel;
-(void)persistSkimmingState;
-(void)prepareForShowingHintsForAssetCollectionReference:(id)arg0 ;
-(void)prepareForSkimmingInAssetCollectionReference:(id)arg0 ;
-(void)prepareForSlideshowForAssetCollectionReference:(id)arg0 ;
-(void)tearDownAfterSkimmingShowHints:(BOOL)arg0 persistState:(BOOL)arg1 ;
-(void)transitionToSkimming;
-(void)transitionToSlideshow;


@end


#endif