// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUNIASTRONOMYVISTACONTROLLER_H
#define NUNIASTRONOMYVISTACONTROLLER_H

@class CLKClockTimerToken, CLLocation, NSString, UITapGestureRecognizer, NSDate, UIPanGestureRecognizer;
@protocol NUNIAstronomyRotationModelObserver, UIGestureRecognizerDelegate, NUNIAnimationObserver, NUNIAstronomyVistaControllerDelegate, NUNIAstronomyPulseAnimationDelegate, NUNIAstronomyStyleAnimationDelegate;

#import <Foundation/Foundation.h>

#import "NUNIAstronomyVistaView.h"
#import "NUNIAstronomyRotationModel.h"

@interface NUNIAstronomyVistaController : NSObject <NUNIAstronomyRotationModelObserver, UIGestureRecognizerDelegate, NUNIAnimationObserver>

 {
    NUNIAstronomyVistaView *_vistaView;
    NSArray" _editingVistaAnimations;
    CLLocationCoordinate2D _initialCoordinate;
    ? _previousTranslation;
    float _recentMovement;
    CLKClockTimerToken *_clockTimerToken;
    BOOL _isFallbackLocation;
    CLLocationCoordinate2D _wakeTransitionCoordinateOffset;
}


@property (nonatomic) NSInteger activeModeFrameInterval; // ivar: _activeModeFrameInterval
@property BOOL animatingStyleDefinition; // ivar: _animatingStyleDefinition
@property (readonly, nonatomic) CLLocation *currentLocation; // ivar: _currentLocation
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NUNIAstronomyVistaControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceDisableLocationDot; // ivar: _forceDisableLocationDot
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UITapGestureRecognizer *interactiveModeTapGesture; // ivar: _interactiveModeTapGesture
@property (nonatomic) BOOL isBacklightTransitionEnabled; // ivar: _isBacklightTransitionEnabled
@property (readonly, nonatomic) NSInteger mode; // ivar: _mode
@property (nonatomic) CGFloat numberOfPulses; // ivar: _numberOfPulses
@property (retain, nonatomic) NSDate *overrideDate; // ivar: _overrideDate
@property (nonatomic, getter=isPreparedForTransitions) BOOL preparedForTransitions; // ivar: _preparedForTransitions
@property (weak, nonatomic) NSObject<NUNIAstronomyPulseAnimationDelegate> *pulseAnimationDelegate; // ivar: _pulseAnimationDelegate
@property (nonatomic) CGFloat pulseAnimationDuration; // ivar: _pulseAnimationDuration
@property (readonly, nonatomic) NUNIAstronomyRotationModel *rotationModel; // ivar: _rotationModel
@property (readonly, nonatomic) UIPanGestureRecognizer *spheroidPanGesture; // ivar: _spheroidPanGesture
@property (nonatomic) NSUInteger style; // ivar: _style
@property (weak, nonatomic) NSObject<NUNIAstronomyStyleAnimationDelegate> *styleAnimationDelegate; // ivar: _styleAnimationDelegate
@property (nonatomic) NUNIAegirStyleDefinition styleDefinition; // ivar: _styleDefinition
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITapGestureRecognizer *supplementalModeDoubleTapGesture; // ivar: _supplementalModeDoubleTapGesture
@property (nonatomic) NSUInteger vista; // ivar: _vista
@property (nonatomic) NSUInteger vistaTransitionStyle; // ivar: _vistaTransitionStyle
@property (readonly, nonatomic) NUNIAstronomyVistaView *vistaView;


-(BOOL)shouldShowLocationDot;
-(id)initWithVistaView:(id)arg0 ;
-(void)_animateToStyle:(NSUInteger)arg0 ;
-(void)_animateToStyleDefinition:(struct NUNIAegirStyleDefinition )arg0 ;
-(void)_applyVista;
-(void)_handleInteractiveModeGesture:(id)arg0 ;
-(void)_handleSpheroidPanGesture:(id)arg0 ;
-(void)_handleSupplementalModeGesture:(id)arg0 ;
-(void)_updateMinFrameInterval;
-(void)activeMode;
-(void)animateToStyleDefinition:(struct NUNIAegirStyleDefinition )arg0 duration:(float)arg1 ;
-(void)animateTransitionToMode:(NSInteger)arg0 ;
-(void)applyMode:(NSInteger)arg0 ;
-(void)applyStyle:(NSUInteger)arg0 ;
-(void)applyStyleDefinition:(struct NUNIAegirStyleDefinition )arg0 ;
-(void)applyTransitionFraction:(CGFloat)arg0 fromStyle:(NSUInteger)arg1 toStyle:(NSUInteger)arg2 ;
-(void)applyTransitionFraction:(CGFloat)arg0 fromStyleDefinition:(struct NUNIAegirStyleDefinition )arg1 toStyleDefinition:(struct NUNIAegirStyleDefinition )arg2 ;
-(void)applyTransitionFraction:(CGFloat)arg0 fromVista:(NSUInteger)arg1 fromStyleDefinition:(struct NUNIAegirStyleDefinition )arg2 toVista:(NSUInteger)arg3 toStyleDefinition:(struct NUNIAegirStyleDefinition )arg4 ;
-(void)applyTransitionFraction:(CGFloat)arg0 fromVista:(NSUInteger)arg1 toVista:(NSUInteger)arg2 ;
-(void)cleanUpAfterTransitions;
-(void)deactiveMode;
-(void)disableCloudDataFetch:(BOOL)arg0 ;
-(void)hideLocationDotAnimated:(BOOL)arg0 ;
-(void)hideLocationDotPulse;
-(void)interactiveMode;
-(void)prepareForTransitions;
-(void)prepareOtherVistas;
-(void)pulseLocationDot;
-(void)rotationModelStoppedByDecelerating:(id)arg0 ;
-(void)setCacheDirectory:(id)arg0 ;
-(void)setLocationDotAlpha:(CGFloat)arg0 ;
-(void)showLocationDotAnimated:(BOOL)arg0 ;
-(void)startClockUpdates;
-(void)stopClockUpdates;
-(void)stopLocationDotPulse;
-(void)supplementalMode;
-(void)universeAnimationFinished:(id)arg0 ;
-(void)universeAnimationRemoved:(id)arg0 ;
-(void)updateLocation:(id)arg0 fallbackLocation:(id)arg1 ;
-(void)updateLocation:(id)arg0 fallbackLocation:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateTimeAnimated:(BOOL)arg0 ;


@end


#endif