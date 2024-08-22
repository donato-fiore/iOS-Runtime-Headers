// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _REMOTEUIMANAGER_H
#define _REMOTEUIMANAGER_H

@class MechanismUI<LAUIMechanism><LARemoteUIHost>, NSString;
@protocol RemoteUIManaging, RemoteUIActivatorDelegate, LARemoteUI;

#import <Foundation/Foundation.h>

#import "RemoteUIManagerConfig.h"

@interface _RemoteUIManager : NSObject <RemoteUIManaging, RemoteUIActivatorDelegate>

 {
    MechanismUI<LAUIMechanism><LARemoteUIHost> *_uiMechanism;
    id *_pendingShowUiReply;
    id *_pendingUiActivationBlock;
    MechanismUI<LAUIMechanism><LARemoteUIHost> *_pendingUiMechanism;
    id<LARemoteUI> *_dismissingUi;
    BOOL _uiDismissedBeforeConnection;
    int _showUiCounter;
    int _dismissUiCounter;
    RemoteUIManagerConfig *_config;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithConfig:(id)arg0 ;
-(id)workQueue;
-(void)_activateUi;
-(void)_assignPendingMechanism:(id)arg0 reply:(id)arg1 ;
-(void)_replyOnceToShowUi:(BOOL)arg0 error:(id)arg1 ;
-(void)_setupUiActivationTimeout;
-(void)checkClearForIdleExitWithCompletion:(id)arg0 ;
-(void)connectRemoteUI:(id)arg0 reply:(id)arg1 ;
-(void)connectionToViewServiceInvalidated:(id)arg0 ;
-(void)didReceiveExpectedError:(id)arg0 ;
-(void)didReceiveUnexpectedError:(id)arg0 ;
-(void)disconnectRemoteUI;
-(void)dismissRemoteUI:(id)arg0 uiMechanism:(id)arg1 uiDisappeared:(BOOL)arg2 reply:(id)arg3 ;
-(void)prepareForRemoteViewControllerWithMechanism:(id)arg0 reply:(id)arg1 ;
-(void)showUIWithParams:(id)arg0 reply:(id)arg1 ;


@end


#endif