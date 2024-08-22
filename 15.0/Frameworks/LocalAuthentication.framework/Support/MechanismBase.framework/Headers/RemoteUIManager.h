// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMOTEUIMANAGER_H
#define REMOTEUIMANAGER_H

@class MechanismBase<LAUIMechanism><LARemoteUIHost>, SBSRemoteAlertHandle, NSString;
@protocol SBSRemoteAlertHandleObserver, LARemoteUIHost;

#import <Foundation/Foundation.h>


@interface RemoteUIManager : NSObject <SBSRemoteAlertHandleObserver, LARemoteUIHost>

 {
    MechanismBase<LAUIMechanism><LARemoteUIHost> *_uiMechanism;
    id *_pendingShowUiReply;
    id *_pendingUiActivationBlock;
    id *_pendingUiMechanism;
    id *_dismissingUi;
    BOOL _uiDismissedBeforeConnection;
    int _showUiCounter;
    int _dismissUiCounter;
}


@property (weak, nonatomic) SBSRemoteAlertHandle *activatingHandle; // ivar: _activatingHandle
@property (weak, nonatomic) SBSRemoteAlertHandle *activeHandle; // ivar: _activeHandle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL remoteAlertWasInvalidated; // ivar: _remoteAlertWasInvalidated
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_activatePlatformUIWithParams:(id)arg0 ;
-(void)_activateUi;
-(void)_assignPendingMechanism:(id)arg0 reply:(id)arg1 ;
-(void)_replyOnceToShowUi:(BOOL)arg0 error:(id)arg1 ;
-(void)_setupUiActivationTimeout;
-(void)connectRemoteUI:(id)arg0 reply:(id)arg1 ;
-(void)connectionToViewServiceInvalidated;
-(void)disconnectRemoteUI;
-(void)dismissRemoteUI:(id)arg0 uiMechanism:(id)arg1 uiDisappeared:(BOOL)arg2 reply:(id)arg3 ;
-(void)prepareForRemoteViewControllerWithMechanism:(id)arg0 reply:(id)arg1 ;
-(void)remoteAlertHandle:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)remoteAlertHandleDidActivate:(id)arg0 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg0 ;
-(void)showUIWithParams:(id)arg0 reply:(id)arg1 ;


@end


#endif