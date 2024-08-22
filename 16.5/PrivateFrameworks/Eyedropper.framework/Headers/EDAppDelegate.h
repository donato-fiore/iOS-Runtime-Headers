// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDAPPDELEGATE_H
#define EDAPPDELEGATE_H

@class UIResponder, NSXPCListener, NSMutableArray, BKSTouchStream, PSPointerClientController, NSMutableDictionary, NSString, UIWindow;
@protocol FBSSceneDelegate, NSXPCListenerDelegate, EDLensViewDelegate, UIApplicationDelegate, BSInvalidatable;


#import "EDLensView.h"

@interface EDAppDelegate : UIResponder <FBSSceneDelegate, NSXPCListenerDelegate, EDLensViewDelegate, UIApplicationDelegate>

 {
    NSXPCListener *_serviceListener;
    NSMutableArray *_liveConnections;
    int _notifyTokenLocked;
    BKSTouchStream *_touchStream;
    BOOL _isFloating;
    BOOL _selectedColor;
    CGFloat _lastDismissedTime;
    PSPointerClientController *_pointerClientController;
    id<BSInvalidatable> *_hidePointerAssertion;
    NSMutableDictionary *_sceneDelegateByDisplayIdentifier;
    NSMutableDictionary *_mousePointerServiceAssertionByDisplayIdentifier;
    NSMutableDictionary *_lastDisplayLocationByDisplayIdentifier;
    EDLensView *_activeLensView;
}


@property (readonly, nonatomic) EDLensView *activeLensView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIWindow *window;


-(BOOL)application:(id)arg0 didFinishLaunchingWithOptions:(id)arg1 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(id)mainScreenLensView;
-(id)mainScreenWindow;
-(struct CGPoint )_lastDisplayLocationForLensView:(id)arg0 ;
-(struct CGPoint )_startingPointForWindow:(id)arg0 ;
-(void)_enumerateRemoteClientsUsingBlock:(id)arg0 ;
-(void)_sceneDidDisconnect:(id)arg0 ;
-(void)_sceneWillConnect:(id)arg0 ;
-(void)_updateLastDisplayLocation:(struct CGPoint )arg0 forLensView:(id)arg1 ;
-(void)beginShowingEyeDropper:(id)arg0 ;
-(void)cancelShowingEyeDropper;
-(void)dismissEyedropper;
-(void)floatEyeDropper;
-(void)hideSystemPointer:(BOOL)arg0 ;
-(void)lensView:(id)arg0 didSelectColor:(id)arg1 ;
-(void)lensViewDidActivate:(id)arg0 ;
-(void)lockStateChanged;
-(void)performOnAllWindows:(id)arg0 ;
-(void)scene:(id)arg0 didReceiveActions:(id)arg1 ;
-(void)scene:(id)arg0 didUpdateWithDiff:(id)arg1 transitionContext:(id)arg2 completion:(id)arg3 ;


@end


#endif