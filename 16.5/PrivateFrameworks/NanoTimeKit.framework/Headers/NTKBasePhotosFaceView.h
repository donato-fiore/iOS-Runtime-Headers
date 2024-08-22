// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKBASEPHOTOSFACEVIEW_H
#define NTKBASEPHOTOSFACEVIEW_H

@class UIView, NSTimer, UIColor, NSString, NSValue, UIImage;
@protocol NTKPhotoImageViewDelegate;


#import "NTKBackgroundImageFaceView.h"
#import "NTKTaskScheduler.h"
#import "NTKUtilityComplicationFactory.h"
#import "NTKAlbumEmptyView.h"
#import "NTKPhotoImageView.h"

@interface NTKBasePhotosFaceView : NTKBackgroundImageFaceView <NTKPhotoImageViewDelegate>

 {
    BOOL _paused;
    BOOL _updateWhenUnpausing;
    UIView *_blackView;
    BOOL _shouldPlayIntro;
    BOOL _shouldPlayOnWake;
    BOOL _isStartingPlaybackOnSingleTap;
    NSTimer *_playOnWakeTimeout;
    NTKTaskScheduler *_taskScheduler;
    BOOL _preLoadingPhotoOnSleep;
    BOOL _preloadedPhotoOnSleep;
    NSInteger _previousDataMode;
    NSUInteger _dateAlignment;
    UIColor *_foregroundColor;
    UIColor *_shadowColor;
    UIColor *_legibilityGradientColor;
    UIView *_currentGradientView;
    BOOL _isContentLoaded;
    BOOL _isUsingLegibility;
    NTKUtilityComplicationFactory *_complicationFactory;
}


@property (readonly, nonatomic) UIView *cornerView; // ivar: _cornerView
@property (readonly, nonatomic) NSUInteger dateAlignment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInteractive; // ivar: _isInteractive
@property (retain, nonatomic) NSValue *monochromeColorMatrix; // ivar: _monochromeColorMatrix
@property (readonly, nonatomic) NTKAlbumEmptyView *noPhotosView; // ivar: _noPhotosView
@property (nonatomic, getter=isNoPhotosViewVisible) BOOL noPhotosViewVisible; // ivar: _noPhotosViewVisible
@property (readonly, nonatomic) UIImage *photosColorRamp; // ivar: _photosColorRamp
@property (readonly, nonatomic) UIImage *photosMonoColorRamp; // ivar: _photosMonoColorRamp
@property (readonly, nonatomic) NTKPhotoImageView *posterImageView; // ivar: _posterImageView
@property (readonly) Class superclass;


-(BOOL)_curtainViewVisible;
-(BOOL)_fadesComplicationSlot:(id)arg0 inEditMode:(NSInteger)arg1 ;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(NSInteger)arg0 ;
-(BOOL)_preloadNextPhoto;
-(BOOL)_screenOn;
-(BOOL)_timeLabelUsesLegibility;
-(BOOL)screenWillGoDark;
-(CGFloat)_backgroundImageAlphaForEditMode:(NSInteger)arg0 ;
-(CGFloat)_editSpeedForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(CGFloat)_foregroundAlphaForEditMode:(NSInteger)arg0 ;
-(CGFloat)_foregroundAlphaForTransitionFraction:(CGFloat)arg0 fromEditMode:(NSInteger)arg1 toEditMode:(NSInteger)arg2 ;
-(CGFloat)_keylineCornerRadiusForComplicationSlot:(id)arg0 ;
-(CGFloat)_timeLabelAlphaForEditMode:(NSInteger)arg0 ;
-(CGFloat)_timeTravelYAdjustment;
-(Class)photosFaceClass;
-(NSInteger)_complicationPickerStyleForSlot:(id)arg0 ;
-(NSInteger)_utilitySlotForSlot:(id)arg0 ;
-(id)_digitalTimeLabelStyleFromViewMode:(NSInteger)arg0 faceBounds:(struct CGRect )arg1 ;
-(id)_newGradientViewWithColor:(id)arg0 ;
-(id)_newLegacyViewForComplication:(id)arg0 family:(NSInteger)arg1 slot:(id)arg2 ;
-(id)_selectedContentView;
-(id)createFaceColorPalette;
-(id)initWithFaceStyle:(NSInteger)arg0 forDevice:(id)arg1 clientIdentifier:(id)arg2 ;
-(id)palette;
-(void)_animateIn;
-(void)_applyAlignment;
-(void)_applyComplicationContentSpecificAttributesAnimated:(BOOL)arg0 ;
-(void)_applyDataMode;
-(void)_applyForegroundAlphaForTransitionFraction:(CGFloat)arg0 fromEditMode:(NSInteger)arg1 toEditMode:(NSInteger)arg2 ;
-(void)_applyFrozen;
-(void)_applyOption:(id)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)_applyPhotosColor;
-(void)_applyPhotosColorFrom:(id)arg0 to:(id)arg1 fraction:(CGFloat)arg2 ;
-(void)_applyRubberBandingFraction:(CGFloat)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)_applyScrubbingForegroundColor:(id)arg0 shadowColor:(id)arg1 ;
-(void)_applySlow;
-(void)_applyTransitionFraction:(CGFloat)arg0 fromOption:(id)arg1 toOption:(id)arg2 forCustomEditMode:(NSInteger)arg3 slot:(id)arg4 ;
-(void)_cleanupAfterEditing;
-(void)_cleanupAfterOrb:(BOOL)arg0 ;
-(void)_configureComplicationFactory;
-(void)_configureComplicationView:(id)arg0 forSlot:(id)arg1 ;
-(void)_configureForEditMode:(NSInteger)arg0 ;
-(void)_configureForTransitionFraction:(CGFloat)arg0 fromEditMode:(NSInteger)arg1 toEditMode:(NSInteger)arg2 ;
-(void)_didStartPlayingIrisOnSingleTap;
-(void)_endScrubbingAnimationFromUIViewAnimateWithDuration;
-(void)_handleOrdinaryScreenWake;
-(void)_handleScreenWake;
-(void)_handleWristRaiseScreenWake;
-(void)_hideCurtainView;
-(void)_invalidatePreloadedPhoto;
-(void)_layoutForegroundContainerView;
-(void)_loadLayoutRules;
-(void)_loadSnapshotContentViews;
-(void)_playIrisOnSingleTap;
-(void)_playPhoto;
-(void)_playStill;
-(void)_playVideo;
-(void)_playVideoForScreenWake:(id)arg0 ;
-(void)_prepareForEditing;
-(void)_prepareForOrb;
-(void)_scheduleSleepPreloadTask;
-(void)_setComplicationsHidden:(BOOL)arg0 ;
-(void)_setDateAttributes:(id)arg0 animated:(BOOL)arg1 ;
-(void)_showCurtainView;
-(void)_startScrubbingAnimationFromUIViewAnimateWithDuration;
-(void)_unloadSnapshotContentViews;
-(void)_unpauseFromSwitcher;
-(void)_updatePaused;
-(void)applyPhotosColorRamp:(id)arg0 photosMonoColorRamp:(id)arg1 monochromeColorMatrix:(id)arg2 toPhotosImageView:(id)arg3 ;
-(void)dealloc;
-(void)imageViewDidBeginPlaying:(id)arg0 ;
-(void)imageViewDidEndPlaying:(id)arg0 ;
-(void)layoutSubviews;
-(void)updateWithColorPalette:(id)arg0 ;


@end


#endif