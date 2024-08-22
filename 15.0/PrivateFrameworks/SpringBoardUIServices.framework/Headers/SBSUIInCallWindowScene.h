// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSUIINCALLWINDOWSCENE_H
#define SBSUIINCALLWINDOWSCENE_H

@class UIWindowScene, NSUUID;



@interface SBSUIInCallWindowScene : UIWindowScene {
    NSUUID *_requestedPresentationConfigurationIdentifier;
    NSInteger _validationState;
    BOOL _hasRequestedDestructionForInvalidState;
}


@property (readonly, nonatomic, getter=isBeingShownAboveCoverSheet) BOOL beingShownAboveCoverSheet;
@property (nonatomic, getter=isCallConnected) BOOL callConnected; // ivar: _callConnected
@property (readonly, nonatomic, getter=isDeviceAttachedToWindowedAccessory) BOOL deviceAttachedToWindowedAccessory; // ivar: _deviceAttachedToWindowedAccessory
@property (nonatomic) UIEdgeInsets expanseHUDDodgingInsets; // ivar: _expanseHUDDodgingInsets
@property (nonatomic, getter=isIdleTimerDisabled) BOOL idleTimerDisabled; // ivar: _idleTimerDisabled
@property (nonatomic) NSUInteger preferredHardwareButtonEventTypes; // ivar: _preferredHardwareButtonEventTypes
@property (nonatomic) NSUInteger preferredStatusBarStyleOverridesToSuppress; // ivar: _preferredStatusBarStyleOverridesToSuppress
@property (nonatomic) BOOL prefersBannersHiddenFromClonedDisplay; // ivar: _prefersBannersHiddenFromClonedDisplay
@property (nonatomic) BOOL prefersHiddenWhenDismissed; // ivar: _prefersHiddenWhenDismissed
@property (readonly, nonatomic) NSInteger presentationMode; // ivar: _presentationMode
@property (readonly, nonatomic) NSUUID *requestedPresentationConfigurationIdentifier;
@property (readonly, nonatomic, getter=isScreenSharingPresentation) BOOL screenSharingPresentation;
@property (nonatomic) BOOL shouldBecomeVisibleWhenWakingDisplay; // ivar: _shouldBecomeVisibleWhenWakingDisplay
@property (nonatomic) BOOL shouldNeverBeShownWhenLaunchingFaceTime; // ivar: _shouldNeverBeShownWhenLaunchingFaceTime
@property (nonatomic) BOOL supportsDeviceLockEvents; // ivar: _supportsDeviceLockEvents
@property (readonly, nonatomic) BOOL systemControlsShouldPresentAsEmbedded;
@property (readonly, nonatomic) CGRect windowedAccessoryCutoutFrameInScreen; // ivar: _windowedAccessoryCutoutFrameInScreen


-(id)initWithSession:(id)arg0 connectionOptions:(id)arg1 ;
-(void)_handleDeviceLockAction:(id)arg0 ;
-(void)_handleFrameChanged;
-(void)_handleHardwareButtonEventSceneActions:(id)arg0 ;
-(void)_setAttachedToWindowedAccessory:(BOOL)arg0 windowedAccessoryCutoutFrameInScreen:(struct CGRect )arg1 ;
-(void)_updatePresentationMode:(NSInteger)arg0 analyticsSource:(id)arg1 ;
-(void)_updateValidationStateIfNeededForPresentationMode:(NSInteger)arg0 ;
-(void)dealloc;
-(void)requestTransitionToPresentationMode:(NSInteger)arg0 ;
-(void)requestTransitionToPresentationMode:(NSInteger)arg0 isUserInitiated:(BOOL)arg1 ;
-(void)requestTransitionToPresentationMode:(NSInteger)arg0 isUserInitiated:(BOOL)arg1 analyticsSource:(id)arg2 ;


@end


#endif