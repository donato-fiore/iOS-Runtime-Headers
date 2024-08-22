// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDEVICEAPPLICATIONINPUTUIVIEWPROVIDER_H
#define SBDEVICEAPPLICATIONINPUTUIVIEWPROVIDER_H

@class UIViewController, NSString;
@protocol SBDeviceApplicationSceneHandleObserver, SBScenePresenting, BSInvalidatable, SBScenePresentingDelegate;


#import "SBDeviceApplicationSceneOverlayViewProvider.h"

@interface SBDeviceApplicationInputUIViewProvider : SBDeviceApplicationSceneOverlayViewProvider <SBDeviceApplicationSceneHandleObserver, SBScenePresenting>

 {
    BOOL _isActive;
    NSInteger _displayMode;
    UIViewController *_inputUIViewController;
    id<BSInvalidatable> *_systemUIScenePresenterAssertion;
    id<SBScenePresentingDelegate> *_inputUIPresentingDelegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isUnderUILock;
-(BOOL)isVisibleOnScreen;
-(BOOL)wantsResignActiveAssertion;
-(id)_realOverlayViewController;
-(id)parentSceneIdentityToken;
-(id)presentScene:(id)arg0 viewControllerBuilderBlock:(id)arg1 ;
-(void)_acquireInputUIPresentingAssertionIfNecessary;
-(void)_activateIfPossible;
-(void)_deactivateIfPossible;
-(void)_invalidateInputUIPresentingAssertion;
-(void)cancel;
-(void)dealloc;
-(void)noteDisplayModeChange:(NSInteger)arg0 ;
-(void)setPresentingDelegate:(id)arg0 ;


@end


#endif