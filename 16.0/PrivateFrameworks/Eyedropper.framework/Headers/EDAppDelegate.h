// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAPPDELEGATE_H
#define EDAPPDELEGATE_H

@class UIResponder, NSXPCListener, NSMutableArray, BKSTouchStream, PSPointerClientController, NSString, UIWindow;
@protocol EDLensViewDelegate, FBSSceneDelegate, NSXPCListenerDelegate, EDWindowTrackingDelegate, UIApplicationDelegate, BSInvalidatable;


#import "EDWindow.h"

@interface EDAppDelegate : UIResponder <EDLensViewDelegate, FBSSceneDelegate, NSXPCListenerDelegate, EDWindowTrackingDelegate, UIApplicationDelegate>

 {
    NSXPCListener *_serviceListener;
    EDWindow *_window;
    NSMutableArray *_liveConnections;
    int _notifyTokenLocked;
    BKSTouchStream *_touchStream;
    id<BSInvalidatable> *_mousePointerServiceAssertion;
    BOOL _isFloating;
    CGPoint _lastPresentationLocation;
    CGFloat _lastDismissedTime;
    PSPointerClientController *_pointerClientController;
    id<BSInvalidatable> *_hidePointerAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIWindow *window;


-(BOOL)application:(id)arg0 didFinishLaunchingWithOptions:(id)arg1 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)lensView;
-(void)_enumerateRemoteClientsUsingBlock:(id)arg0 ;
-(void)beginShowingEyeDropper;
-(void)cancelShowingEyeDropper;
-(void)floatEyeDropper;
-(void)hideSystemPointer:(BOOL)arg0 ;
-(void)lensView:(id)arg0 didSelectColor:(id)arg1 ;
-(void)lensViewDidDismiss:(id)arg0 ;
-(void)lockStateChanged;
-(void)scene:(id)arg0 didReceiveActions:(id)arg1 ;
-(void)scene:(id)arg0 didUpdateWithDiff:(id)arg1 transitionContext:(id)arg2 completion:(id)arg3 ;
-(void)trackedTouchesBegan:(id)arg0 ;
-(void)trackedTouchesCancelled:(id)arg0 ;
-(void)trackedTouchesEnded:(id)arg0 ;
-(void)trackedTouchesMoved:(id)arg0 ;


@end


#endif