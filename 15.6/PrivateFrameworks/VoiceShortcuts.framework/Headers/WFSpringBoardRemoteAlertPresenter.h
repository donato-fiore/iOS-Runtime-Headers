// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSPRINGBOARDREMOTEALERTPRESENTER_H
#define WFSPRINGBOARDREMOTEALERTPRESENTER_H

@class NSXPCConnection, SBSRemoteAlertHandle, NSString, NSXPCListener;
@protocol SBSRemoteAlertHandleObserver, NSXPCListenerDelegate, WFDialogAlertPresenter, OS_dispatch_source, WFDialogAlertPresenterDelegate;

#import <Foundation/Foundation.h>


@interface WFSpringBoardRemoteAlertPresenter : NSObject <SBSRemoteAlertHandleObserver, NSXPCListenerDelegate, WFDialogAlertPresenter>



@property (retain, nonatomic) NSXPCConnection *activeConnection; // ivar: _activeConnection
@property (retain, nonatomic) SBSRemoteAlertHandle *activeHandle; // ivar: _activeHandle
@property (readonly, nonatomic) BOOL alertIsActive;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *deactivateTimer; // ivar: _deactivateTimer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFDialogAlertPresenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)activateAlertInMainSceneOfApplicationWithBundleIdentifier:(id)arg0 ;
-(void)activateAlertWithPresentationTarget:(id)arg0 ;
-(void)deactivateAlert;
-(void)remoteAlertHandle:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)remoteAlertHandleDidActivate:(id)arg0 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg0 ;


@end


#endif