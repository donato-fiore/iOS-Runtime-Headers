// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBUIPOWERDOWNVIEW_H
#define SBUIPOWERDOWNVIEW_H

@class UIView, NSTimer, _UIActionSlider, UIButton, UILabel, _UIVibrantSettings, SPBeaconManager, NSString;
@protocol _UIActionSliderDelegate, SBUIPowerDownViewInterface, SBUIPowerDownViewDelegate;


#import "SBUIShapeView.h"

@interface SBUIPowerDownView : UIView <_UIActionSliderDelegate, SBUIPowerDownViewInterface>

 {
    NSTimer *_autoDismissTimer;
    UIView *_backdropView;
    SBUIShapeView *_darkeningUnderlayView;
    UIView *_darkeningOverlayView;
    _UIActionSlider *_actionSlider;
    UIButton *_cancelButton;
    UILabel *_cancelLabel;
    UIButton *_findMyButton;
    _UIVibrantSettings *_vibrantSettings;
}


@property (retain, nonatomic) SPBeaconManager *beaconManager; // ivar: _beaconManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBUIPowerDownViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL deviceSupportsFindMy; // ivar: _deviceSupportsFindMy
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldPowerDownViewShowFindMyAlert; // ivar: _shouldPowerDownViewShowFindMyAlert
@property (readonly) Class superclass;


-(BOOL)_isLandscapeAspectRatio;
-(id)_createActionSlider;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 vibrantSettings:(id)arg1 ;
-(void)_animatePowerDown;
-(void)_cancelAutoDismissTimer;
-(void)_cancelButtonTapped;
-(void)_createFindMyUI;
-(void)_didTapFindMy;
-(void)_idleTimerFired;
-(void)_notifyDelegateCancelled;
-(void)_notifyDelegatePowerDown;
-(void)_powerDownSliderDidBeginSlide;
-(void)_powerDownSliderDidCancelSlide;
-(void)_powerDownSliderDidCompleteSlide;
-(void)_powerDownSliderDidUpdateSlideWithValue:(CGFloat)arg0 ;
-(void)_prepareViewsForAlert;
-(void)_readIODeviceSupportsFindMy;
-(void)_readShouldPowerDownViewShowFindMyAlert;
-(void)_resetAutoDismissTimer;
-(void)_updateSliderExclusionPath;
-(void)_willAnimateIn;
-(void)_willAnimateOut;
-(void)actionSlider:(id)arg0 didUpdateSlideWithValue:(CGFloat)arg1 ;
-(void)actionSliderDidBeginSlide:(id)arg0 ;
-(void)actionSliderDidCancelSlide:(id)arg0 ;
-(void)actionSliderDidCompleteSlide:(id)arg0 ;
-(void)dealloc;
-(void)didAcknowledgeFindMyInfo;
-(void)didSuppressFindMy;
-(void)hideAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)layoutSubviews;
-(void)showAnimated:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif