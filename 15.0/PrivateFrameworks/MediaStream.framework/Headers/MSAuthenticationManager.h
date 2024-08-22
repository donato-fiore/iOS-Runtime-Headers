// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSAUTHENTICATIONMANAGER_H
#define MSAUTHENTICATIONMANAGER_H

@class ACAccountStore;

#import <Foundation/Foundation.h>

#import "MSAlertManager.h"

@interface MSAuthenticationManager : NSObject {
    int _state;
    MSAlertManager *_alertManager;
    ACAccountStore *_acAccountStore;
    int _bagRefetchCount;
}


@property (nonatomic) BOOL isListeningToKeybagChanges; // ivar: _isListeningToKeybagChanges
@property (nonatomic) int keybagChangeNotifyToken; // ivar: _keybagChangeNotifyToken
@property (readonly, nonatomic, getter=isWaitingForAuth) BOOL waitingForAuth;


+(id)sharedManager;
-(id)initWithAlertManager:(id)arg0 ;
-(void)_didReceiveAccountConfigChangedNotification;
-(void)_renewCredentialsForAccount:(id)arg0 ;
-(void)dealloc;
-(void)didEncounterAuthenticationFailureForPersonID:(id)arg0 ;
-(void)didEncounterAuthenticationSuccessForPersonID:(id)arg0 ;
-(void)rearmAuthenticationAlert;
-(void)waitForDeviceUnlock;


@end


#endif