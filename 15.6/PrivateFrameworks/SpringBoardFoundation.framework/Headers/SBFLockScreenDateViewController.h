// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFLOCKSCREENDATEVIEWCONTROLLER_H
#define SBFLOCKSCREENDATEVIEWCONTROLLER_H

@class UIViewController, NSString, _UILegibilitySettings;
@protocol PTSettingsKeyObserver, SBFDateProviding;



@interface SBFLockScreenDateViewController : UIViewController <PTSettingsKeyObserver>

 {
    id *_timerToken;
    BOOL _isVisible;
    id *_minuteHandlerToken;
    BOOL _disablesUpdates;
}


@property (retain, nonatomic) NSObject<SBFDateProviding> *dateProvider; // ivar: _dateProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (nonatomic) BOOL screenOff; // ivar: _screenOff
@property (nonatomic, getter=isSubtitleHidden) BOOL subtitleHidden;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(id)dateView;
-(id)dateViewIfExists;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_addObservers;
-(void)_handleTimeZoneChange;
-(void)_startUpdateTimer;
-(void)_stopUpdateTimer;
-(void)_updateFormat;
-(void)_updateFormatIfEnabled;
-(void)_updateLegibilityStrength;
-(void)_updateState;
-(void)_updateView;
-(void)dealloc;
-(void)loadView;
-(void)setContentAlpha:(CGFloat)arg0 withSubtitleVisible:(BOOL)arg1 ;
-(void)setCustomSubtitleView:(id)arg0 ;
-(void)setView:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)updateTimeNow;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif