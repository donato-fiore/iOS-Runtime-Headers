// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXIMAGEMODULATIONMANAGER_H
#define PXIMAGEMODULATIONMANAGER_H

@class CAContext, NSString, NSHashTable, UIViewController;
@protocol PXChangeObserver, PXSettingsKeyObserver, PXPreferencesObserver;


#import "PXObservable.h"
#import "PXRequestedEDRHeadroomFactorFilter.h"
#import "PXImageModulationSettings.h"

@interface PXImageModulationManager : PXObservable <PXChangeObserver, PXSettingsKeyObserver, PXPreferencesObserver>

 {
    ? _needsUpdateFlags;
    CGFloat _lastRequestedEDRHeadroomChangeTime;
}


@property (readonly, nonatomic) CGFloat HDRFocus; // ivar: _HDRFocus
@property (readonly, nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (nonatomic, getter=isApplicationActive) BOOL applicationActive; // ivar: _applicationActive
@property (retain, nonatomic) CAContext *coreAnimationContext; // ivar: _coreAnimationContext
@property (readonly, nonatomic) BOOL currentScreenSupportsHDR; // ivar: _currentScreenSupportsHDR
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSHashTable *imageLayerModulators; // ivar: _imageLayerModulators
@property (readonly, nonatomic) CGFloat imageModulationIntensity; // ivar: _imageModulationIntensity
@property (nonatomic, getter=isLowPowerModeEnabled) BOOL lowPowerModeEnabled; // ivar: _lowPowerModeEnabled
@property (readonly, nonatomic, getter=isMainScreen) BOOL mainScreen; // ivar: _mainScreen
@property (readonly, nonatomic) CGFloat requestedEDRHeadroomFactor; // ivar: _requestedEDRHeadroomFactor
@property (readonly, nonatomic) PXRequestedEDRHeadroomFactorFilter *requestedEDRHeadroomFactorFilter; // ivar: _requestedEDRHeadroomFactorFilter
@property (nonatomic) NSInteger requestedEDRHeadroomSignpost; // ivar: _requestedEDRHeadroomSignpost
@property (readonly, weak, nonatomic) UIViewController *rootViewController; // ivar: _rootViewController
@property (readonly, nonatomic) PXImageModulationSettings *settings; // ivar: _settings
@property (readonly) Class superclass;


+(CGFloat)HDRValueForAsset:(id)arg0 ;
+(CGFloat)_hdrGainForAsset:(id)arg0 ;
+(NSInteger)_contentFormatForAsset:(id)arg0 ;
+(struct ? )optionsForAsset:(id)arg0 ;
-(BOOL)_needsUpdate;
-(id)_checkoutImageLayerModulatorWithOptions:(struct ? )arg0 contentType:(NSInteger)arg1 ;
-(id)checkoutImageLayerModulatorWithOptions:(struct ? )arg0 ;
-(id)checkoutLivePhotoViewModulatorWithOptions:(struct ? )arg0 ;
-(id)init;
-(id)initWithRootViewController:(id)arg0 mainScreen:(BOOL)arg1 ;
-(id)mutableChangeObject;
-(void)_applicationDidBecomeActive:(id)arg0 ;
-(void)_applicationDidResignActive:(id)arg0 ;
-(void)_didEndRequestingEDRHeadroomFactor:(CGFloat)arg0 ;
-(void)_didStartRequestingEDRHeadroomFactor:(CGFloat)arg0 ;
-(void)_invalidateActive;
-(void)_invalidateCurrentScreenSupportsHDR;
-(void)_invalidateDesiredDynamicRange;
-(void)_invalidateEnabled;
-(void)_invalidateFinalRequestedEDRHeadroomFactor;
-(void)_invalidateImageLayerModulators;
-(void)_invalidateImageModulationIntensity;
-(void)_invalidateLowPowerModeEnabled;
-(void)_invalidateRequestedEDRHeadroomFactor;
-(void)_processInfoPowerStateDidChange:(id)arg0 ;
-(void)_setNeedsUpdate;
-(void)_updateActiveIfNeeded;
-(void)_updateCoreAnimationContext;
-(void)_updateCurrentScreenSupportsHDRIfNeeded;
-(void)_updateDesiredDynamicRangeIfNeeded;
-(void)_updateEnabledIfNeeded;
-(void)_updateFinalRequestedEDRHeadroomFactorIfNeeded;
-(void)_updateIfNeeded;
-(void)_updateImageLayerModulator:(id)arg0 ;
-(void)_updateImageLayerModulatorsIfNeeded;
-(void)_updateImageModulationIntensityIfNeeded;
-(void)_updateLowPowerModeEnabledIfNeeded;
-(void)_updateRequestedEDRHeadroomFactorIfNeeded;
-(void)checkInImageLayerModulator:(id)arg0 ;
-(void)checkInLivePhotoViewModulator:(id)arg0 ;
-(void)dealloc;
-(void)didPerformChanges;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)preferencesDidChange;
-(void)setNeedsImageModulationIntensityUpdate;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif