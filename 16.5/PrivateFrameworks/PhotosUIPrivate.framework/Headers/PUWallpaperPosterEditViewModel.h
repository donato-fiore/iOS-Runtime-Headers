// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUWALLPAPERPOSTEREDITVIEWMODEL_H
#define PUWALLPAPERPOSTEREDITVIEWMODEL_H

@class PXObservable, NSSet, NSArray, NSString, NSMutableDictionary, PXUpdater;
@protocol PUWallpaperPosterMutableEditViewModel, PXChangeObserver, PFParallaxLayoutConfiguration, PISegmentationItem;


#import "PUParallaxLayerStackViewModel.h"
#import "PUParallaxLayerStackViewModelUpdater.h"

@interface PUWallpaperPosterEditViewModel : PXObservable <PUWallpaperPosterMutableEditViewModel, PXChangeObserver>



@property (readonly, copy, nonatomic) NSSet *activeLayerStackViewModels; // ivar: _activeLayerStackViewModels
@property (copy, nonatomic) NSArray *availableLayerStackViewModels; // ivar: _availableLayerStackViewModels
@property (copy, nonatomic) NSArray *availableStyles; // ivar: _availableStyles
@property (readonly, nonatomic) CGRect containerFrame; // ivar: _containerFrame
@property (readonly, nonatomic) PUParallaxLayerStackViewModel *currentLayerStackViewModel; // ivar: _currentLayerStackViewModel
@property (readonly, nonatomic) PUParallaxLayerStackViewModelUpdater *currentLayerStackViewModelUpdater;
@property (readonly, copy, nonatomic) NSArray *currentStyleKinds;
@property (copy, nonatomic) NSArray *currentStyles; // ivar: _currentStyles
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL depthEnabled; // ivar: _depthEnabled
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PUParallaxLayerStackViewModel *initialLayerStackViewModel; // ivar: _initialLayerStackViewModel
@property (readonly, nonatomic) PUParallaxLayerStackViewModelUpdater *initialLayerStackViewModelUpdater; // ivar: _initialLayerStackViewModelUpdater
@property (readonly, nonatomic) BOOL isUserPanningOrZooming; // ivar: _isUserPanningOrZooming
@property (readonly, nonatomic) NSMutableDictionary *layerStackViewModelsByStyleKind; // ivar: _layerStackViewModelsByStyleKind
@property (readonly, nonatomic) NSObject<PFParallaxLayoutConfiguration> *layoutConfiguration;
@property (readonly, nonatomic) CGRect normalizedVisibleFrame; // ivar: _normalizedVisibleFrame
@property (readonly, nonatomic) BOOL parallaxDisabled; // ivar: _parallaxDisabled
@property (readonly, nonatomic, getter=isPresentingSingleStyle) BOOL presentingSingleStyle; // ivar: _presentingSingleStyle
@property (readonly, nonatomic) ? scrollPosition; // ivar: _scrollPosition
@property (readonly, nonatomic) NSObject<PISegmentationItem> *segmentationItem; // ivar: _segmentationItem
@property (nonatomic) NSInteger stylesChange; // ivar: _stylesChange
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (readonly, nonatomic) NSMutableDictionary *viewModelUpdatersByStyleKind; // ivar: _viewModelUpdatersByStyleKind
@property (readonly, copy, nonatomic) NSArray *visibleLayerStackViewModels; // ivar: _visibleLayerStackViewModels


-(CGFloat)currentClockAreaLuminanceForStyleKind:(id)arg0 ;
-(id)_layerStackViewModelForStyleKind:(id)arg0 ;
-(id)_nextStyleKindForStyleKind:(id)arg0 ;
-(id)_previousStyleKindForStyleKind:(id)arg0 ;
-(id)init;
-(id)initWithInitialLayerStackViewModel:(id)arg0 availableStyles:(id)arg1 ;
-(id)posterEditConfigurationRepresentation;
-(void)_initScrollPosition;
-(void)_invalidateActiveLayerStackViewModels;
-(void)_invalidateAvailableLayerStackViewModels;
-(void)_invalidateAvailableLayerStackViewModelsProperties;
-(void)_invalidateCurrentLayerStackViewModel;
-(void)_invalidateCurrentStyles;
-(void)_invalidateDepthEnabled;
-(void)_invalidateNormalizedVisibleFrame;
-(void)_invalidatePresentingSingleStyle;
-(void)_invalidateVisibleLayerStackViewModels;
-(void)_setNeedsUpdate;
-(void)_updateActiveLayerStackViewModels;
-(void)_updateAvailableLayerStackViewModels;
-(void)_updateAvailableLayerStackViewModelsProperties;
-(void)_updateCurrentLayerStackViewModel;
-(void)_updateCurrentStyles;
-(void)_updateCurrentStylesWithChange:(NSInteger)arg0 ;
-(void)_updateDepthEnabled;
-(void)_updateLayerStackViewModelProperties:(id)arg0 ;
-(void)_updateNormalizedVisibleFrame;
-(void)_updatePresentingSingleStyle;
-(void)_updateVisibleLayerStackViewModels;
-(void)applyChangesFromPosterEditConfiguration:(id)arg0 ;
-(void)didPerformChanges;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;
-(void)scrollToPosition:(struct ? )arg0 ;
-(void)shutdownWithTimeout:(CGFloat)arg0 ;


@end


#endif