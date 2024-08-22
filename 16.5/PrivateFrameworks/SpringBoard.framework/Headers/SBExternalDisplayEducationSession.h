// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBEXTERNALDISPLAYEDUCATIONSESSION_H
#define SBEXTERNALDISPLAYEDUCATIONSESSION_H

@class BSAtomicSignal, SBSRemoteAlertHandle, NSXPCConnection, NSXPCListener, BSAbsoluteMachTimer, NSString, FBSDisplayIdentity;
@protocol SBExternalDisplayEducationPillViewControllerDelegate, SBRemoteHandshakeProtocol, NSXPCListenerDelegate, BNPosting;

#import <Foundation/Foundation.h>

#import "SBExternalDisplayEducationPillViewController.h"

@interface SBExternalDisplayEducationSession : NSObject <SBExternalDisplayEducationPillViewControllerDelegate, SBRemoteHandshakeProtocol, NSXPCListenerDelegate>

 {
    BSAtomicSignal *_displayDisconnectSignal;
    BOOL _isHardwareAvailable;
    BOOL _isHardwareAvailableDuringDisplayConnectionWindow;
    id<BNPosting> *_bannerPoster;
    NSUInteger _previousPresentedReasons;
    BOOL _isPresenting;
    SBSRemoteAlertHandle *_alertHandle;
    NSXPCConnection *_xpcConnection;
    NSXPCListener *_listener;
    SBExternalDisplayEducationPillViewController *_educationBannerViewController;
    BSAbsoluteMachTimer *_bannerDismissTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity; // ivar: _displayIdentity
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithDisplayIdentity:(id)arg0 hardwareAvailability:(BOOL)arg1 bannerPoster:(id)arg2 ;
-(void)_dismissBanner:(id)arg0 ;
-(void)_dismissEducationAlert:(id)arg0 ;
-(void)_presentBanner;
-(void)_presentEducationAlert:(id)arg0 ;
-(void)dealloc;
-(void)deviceConnectionWindowExpired;
-(void)displayConnected;
-(void)displayDisconnected;
-(void)pillViewControllerDidReceiveUserTap:(id)arg0 ;
-(void)updateHardwareAvailability:(BOOL)arg0 withinDisplayConnectionWindow:(BOOL)arg1 ;
-(void)wakeUpConnection;


@end


#endif