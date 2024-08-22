// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUWALLPAPERPOSTERCONTROLLER_H
#define PUWALLPAPERPOSTERCONTROLLER_H

@class PLPhotoAnalysisServiceClient, UIViewPropertyAnimator, PFPosterMedia, NSString, UILabel, NSDate, PHPhotoLibrary, PFPosterConfiguration, PFPosterDescriptor, UIImageView, UIActivityIndicatorView;
@protocol PXChangeObserver, PUWallpaperRenderingDelegate, PUWallpaperRenderingEnvironment, PUWallpaperRenderer;

#import <Foundation/Foundation.h>

#import "PUParallaxLayerStackViewModel.h"

@interface PUWallpaperPosterController : NSObject <PXChangeObserver, PUWallpaperRenderingDelegate>

 {
    NSUInteger _signpost;
    NSUInteger _significantEventsCounter;
    PLPhotoAnalysisServiceClient *_padClient;
}


@property (retain, nonatomic) UIViewPropertyAnimator *alphaAnimator; // ivar: _alphaAnimator
@property (nonatomic) NSInteger backlightLuminance; // ivar: _backlightLuminance
@property (retain, nonatomic) PFPosterMedia *currentPosterMedia; // ivar: _currentPosterMedia
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UILabel *debugHUDLabel; // ivar: _debugHUDLabel
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<PUWallpaperRenderingEnvironment> *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *lastUpgradeCheckTime; // ivar: _lastUpgradeCheckTime
@property (nonatomic) BOOL needsFirstLockSignificantEvent; // ivar: _needsFirstLockSignificantEvent
@property (nonatomic) BOOL needsUpgrade; // ivar: _needsUpgrade
@property (nonatomic) CGFloat nextUpgradeCheckDelay; // ivar: _nextUpgradeCheckDelay
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (retain, nonatomic) PFPosterConfiguration *posterConfiguration; // ivar: _posterConfiguration
@property (retain, nonatomic) PFPosterDescriptor *posterDescriptor; // ivar: _posterDescriptor
@property (retain, nonatomic) UIImageView *posterMediaImageView; // ivar: _posterMediaImageView
@property (retain, nonatomic) UIActivityIndicatorView *progressIndicator; // ivar: _progressIndicator
@property (readonly, nonatomic) NSObject<PUWallpaperRenderer> *renderer; // ivar: _renderer
@property (nonatomic) NSUInteger significantEventsCounter;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIViewPropertyAnimator *transformAnimator; // ivar: _transformAnimator
@property (readonly, nonatomic) PUParallaxLayerStackViewModel *viewModel; // ivar: _viewModel


-(BOOL)_animateShuffleTransitionToSleep;
-(BOOL)_loadAssetFromWallpaperURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)_shouldAnimateShuffleTransitionToSleep;
-(BOOL)triggerPosterUpgradeIfNecessary;
-(id)_createViewModelWithLayerStack:(id)arg0 ;
-(id)_nameForBacklightLuminance:(NSInteger)arg0 ;
-(id)_nextPosterMedia;
-(id)_timelinesForDateInterval:(id)arg0 ;
-(id)initWithRenderer:(id)arg0 photoLibrary:(id)arg1 ;
-(id)posterUpgradeService;
-(struct CGAffineTransform )_inactiveTransform;
-(void)DEBUG_invalidateDebugHUD;
-(void)_handleSegmentationResponse:(id)arg0 ;
-(void)_hidePosterMediaImage;
-(void)_hideProgressIndicator;
-(void)_invalidateCurrentPosterMedia;
-(void)_invalidateDebugHUD;
-(void)_loadContentsFromEnvironment;
-(void)_removeExistingViews;
-(void)_renderPreviewLayerStackFromWallpaperURL:(id)arg0 ;
-(void)_showPosterMediaImage:(id)arg0 ;
-(void)_showProgressIndicator;
-(void)_transitionToBacklightLuminance:(NSInteger)arg0 previousBacklightLuminance:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)_updateBacklightLuminance;
-(void)_updateContainerFrame;
-(void)_updateCurrentPosterMedia;
-(void)_updateDebugHUD;
-(void)_updateSignificantEvents;
-(void)_updateViewHierarchy;
-(void)_updateWithFrameSpecifier:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)renderer:(id)arg0 didInitializeWithEnvironment:(id)arg1 ;
-(void)renderer:(id)arg0 didUpdateEnvironment:(id)arg1 withTransition:(id)arg2 ;
-(void)rendererDidInvalidate:(id)arg0 ;
-(void)triggerPosterUpgrade;


@end


#endif