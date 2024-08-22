// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDEVICEAPPLICATIONSCENECLASSICWRAPPERVIEW_H
#define SBDEVICEAPPLICATIONSCENECLASSICWRAPPERVIEW_H

@class UIView, SBAppSwitcherDefaults, NSArray, NSString;
@protocol PTSettingsKeyObserver, BSDefaultObserver;


#import "_SBDeviceApplicationSceneClassicHostPositioningView.h"
#import "SBSwitcherChamoisSettings.h"
#import "SBDeviceApplicationSceneHandle.h"

@interface SBDeviceApplicationSceneClassicWrapperView : UIView <PTSettingsKeyObserver>

 {
    _SBDeviceApplicationSceneClassicHostPositioningView *_positioningView;
    SBAppSwitcherDefaults *_appSwitcherDefaults;
    id<BSDefaultObserver> *_chamoisEnabledObserver;
    SBSwitcherChamoisSettings *_chamoisSettings;
    BOOL _canRasterize;
}


@property (readonly, nonatomic) NSArray *contentViews;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (nonatomic) BOOL preparingForUserDrivenClassicRotation; // ivar: _preparingForUserDrivenClassicRotation
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle; // ivar: _sceneHandle
@property (nonatomic) NSInteger startingOrientationForClassicPhoneAppRotation; // ivar: _startingOrientationForClassicPhoneAppRotation
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressLayoutUpdatesForStartOfClassicPhoneAppRotation; // ivar: _suppressLayoutUpdatesForStartOfClassicPhoneAppRotation
@property (readonly, nonatomic) BOOL wantsBlackBackground;


+(BOOL)shouldUseWrapperViewForSceneHandle:(id)arg0 ;
-(BOOL)_isProbablyScreenSized;
-(BOOL)_shouldRasterizePositioningLayer;
-(id)initWithSceneHandle:(id)arg0 ;
-(struct CGRect )_effectiveSceneBounds;
-(void)_windowingModeChanged;
-(void)addContentView:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)removeContentView:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif