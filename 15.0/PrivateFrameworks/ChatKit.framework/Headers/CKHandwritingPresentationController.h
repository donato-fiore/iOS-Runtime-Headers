// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKHANDWRITINGPRESENTATIONCONTROLLER_H
#define CKHANDWRITINGPRESENTATIONCONTROLLER_H

@class UIViewController<CKHandwritingBrowserViewControllerProtocol>, NSString;
@protocol CKHandwritingViewControllerSendDelegate, CKHandwritingPresentationControllerDelegate;

#import <Foundation/Foundation.h>

#import "CKScheduledUpdater.h"
#import "CKBrowserItemPayload.h"
#import "CKDeviceOrientationManager.h"
#import "CKHandwritingWindow.h"

@interface CKHandwritingPresentationController : NSObject

@property (nonatomic) BOOL actualVisibility; // ivar: _actualVisibility
@property (retain, nonatomic) CKScheduledUpdater *animationScheduledUpdater; // ivar: _animationScheduledUpdater
@property (retain, nonatomic) UIViewController<CKHandwritingBrowserViewControllerProtocol> *browserViewController; // ivar: _browserViewController
@property (retain, nonatomic) CKBrowserItemPayload *cachedPluginPayload; // ivar: _cachedPluginPayload
@property (weak, nonatomic) NSObject<CKHandwritingViewControllerSendDelegate> *cachedSendDelegate; // ivar: _cachedSendDelegate
@property (weak, nonatomic) NSObject<CKHandwritingPresentationControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) CKDeviceOrientationManager *deviceOrientationManager; // ivar: _deviceOrientationManager
@property (nonatomic) BOOL foregrounded; // ivar: _foregrounded
@property (retain, nonatomic) CKHandwritingWindow *handwritingWindow; // ivar: _handwritingWindow
@property (nonatomic) NSInteger initialInterfaceOrientation; // ivar: _initialInterfaceOrientation
@property (readonly) NSString *pluginBundleID;
@property (retain, nonatomic) CKBrowserItemPayload *pluginPayload;
@property (nonatomic) BOOL requestedVisibility; // ivar: _requestedVisibility
@property (nonatomic) BOOL requestedVisibilityShouldBeAnimated; // ivar: _requestedVisibilityShouldBeAnimated
@property (weak, nonatomic) NSObject<CKHandwritingViewControllerSendDelegate> *sendDelegate;
@property (nonatomic) BOOL suppressAppearanceCallbacksBecauseOfFirstInitialization; // ivar: _suppressAppearanceCallbacksBecauseOfFirstInitialization
@property (nonatomic) BOOL visible;


-(BOOL)isHandwritingLandscape;
-(id)init;
-(void)_doInitialization;
-(void)_flushHandwritingWindowCacheIfNeeded;
-(void)_handleApplicationDidEnterBackground:(id)arg0 ;
-(void)_handleApplicationWillEnterForeground:(id)arg0 ;
-(void)_loadCachedPayloadIntoBrowser;
-(void)_updateVisibilityState;
-(void)dealloc;


@end


#endif