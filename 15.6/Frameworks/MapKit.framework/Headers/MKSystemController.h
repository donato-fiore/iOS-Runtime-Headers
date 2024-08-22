// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKSYSTEMCONTROLLER_H
#define MKSYSTEMCONTROLLER_H

@protocol MKSystemControllerOpenURLDelegate;

#import <Foundation/Foundation.h>


@interface MKSystemController : NSObject

@property (weak, nonatomic) NSObject<MKSystemControllerOpenURLDelegate> *openURLDelegate; // ivar: _openURLDelegate


+(id)sharedInstance;
-(BOOL)_isInSpotlight;
-(BOOL)_isRunningInLockScreen;
-(BOOL)_shouldUseLaunchServices;
-(BOOL)isDevicePluggedIn;
-(BOOL)isHiDPI;
-(BOOL)isInternalInstall;
-(BOOL)isPhone6PlusOrLarger;
-(BOOL)isWifiEnabled;
-(BOOL)openURL:(id)arg0 ;
-(BOOL)overrideBlurStyle;
-(BOOL)reduceMotionEnabled;
-(BOOL)requiresRTT;
-(BOOL)shouldCaptureMapViewGestureAnalytics;
-(BOOL)supports3DImagery;
-(BOOL)supports3DMaps;
-(BOOL)supportsAlwaysOnCompass;
-(BOOL)supportsPitchAPI;
-(CGFloat)screenScale;
-(id)_defaultOpenURLOptions;
-(id)_transformURLIfNecessary:(id)arg0 ;
-(int)userInterfaceIdiom;
-(struct CGSize )screenSize;
-(void)openURL:(id)arg0 bundleIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)openURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)openURL:(id)arg0 fromScene:(id)arg1 completionHandler:(id)arg2 ;
-(void)openUserActivity:(id)arg0 withApplicationRecord:(id)arg1 requireOptionKeyPromptUnlockDevice:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)placeDialRequest:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif