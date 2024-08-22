// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFLOCKSCREENDATEVIEWCONTROLLER_H
#define SBFLOCKSCREENDATEVIEWCONTROLLER_H

@class UIViewController, CSProminentDisplayViewController, NSString, _UILegibilitySettings;
@protocol PTSettingsKeyObserver, SBFDateProviding;


#import "SBAlwaysOnDefaults.h"

@interface SBFLockScreenDateViewController : UIViewController <PTSettingsKeyObserver>

 {
    id *_timerToken;
    BOOL _isVisible;
    id *_minuteHandlerToken;
    BOOL _disablesUpdates;
    SBAlwaysOnDefaults *_alwaysOnDefaults;
    CSProminentDisplayViewController *_prominentDisplayViewController;
}


@property (nonatomic, getter=isAlternateDateEnabled) BOOL alternateDateEnabled; // ivar: _alternateDateEnabled
@property (nonatomic) CGFloat backgroundAlpha;
@property (retain, nonatomic) UIViewController *complicationContainerViewController;
@property (retain, nonatomic) NSObject<SBFDateProviding> *dateProvider; // ivar: _dateProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIViewController *inlineComplicationViewController;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (nonatomic) BOOL restrictsVibrancy; // ivar: _restrictsVibrancy
@property (nonatomic) BOOL screenOff; // ivar: _screenOff
@property (nonatomic) BOOL shouldApplyVibrancyToComplications;
@property (nonatomic, getter=isSubtitleHidden) BOOL subtitleHidden;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(id)_timelinesForDateInterval:(id)arg0 ;
-(id)dateView;
-(id)dateViewIfExists;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_addObservers;
-(void)_handleTimeZoneChange;
-(void)_startUpdateTimer;
-(void)_stopUpdateTimer;
-(void)_updateAlternateCalendar;
-(void)_updateFormat;
-(void)_updateFormatIfEnabled;
-(void)_updateLegibilityStrength;
-(void)_updateState;
-(void)_updateView;
-(void)_updateWithFrameSpecifier:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)setCustomSubtitle:(id)arg0 ;
-(void)setCustomSubtitle:(id)arg0 withTimeout:(CGFloat)arg1 ;
-(void)setCustomSubtitleView:(id)arg0 ;
-(void)setTimeAlpha:(CGFloat)arg0 subtitleAlpha:(CGFloat)arg1 ;
-(void)setTimerWithText:(id)arg0 ;
-(void)setView:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)updateTimeNow;
-(void)updateTimerWithText:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif