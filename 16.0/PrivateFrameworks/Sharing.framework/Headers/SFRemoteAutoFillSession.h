// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFREMOTEAUTOFILLSESSION_H
#define SFREMOTEAUTOFILLSESSION_H

@class NSString, NSArray, NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFSession.h"
#import "SFDevice.h"

@interface SFRemoteAutoFillSession : NSObject {
    BOOL _activateCalled;
    NSString *_contextBundleID;
    NSString *_contextLocalizedAppName;
    int _contextRequestState;
    NSString *_contextUnlocalizedAppName;
    NSArray *_contextAssociatedDomains;
    NSString *_contextURL;
    BOOL _invalidateCalled;
    BOOL _pairingFinishedNotified;
    NSDate *_pairClock;
    int _pairState;
    PairingSubstate _pairSubstate;
    int _passwordPickerState;
    NSString *_pickedPassword;
    NSString *_pickedUsername;
    int _sendCredentialsState;
    SFSession *_session;
    int _sessionState;
    BOOL _prefPairContactsDisabled;
    BOOL _prefPairHomeKitDisabled;
    BOOL _prefPairVerifyDisabled;
    BOOL _prefPairVisualDisabled;
}


@property (copy, nonatomic) id *completedHandler; // ivar: _completedHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *pairingFinishedHandler; // ivar: _pairingFinishedHandler
@property (retain, nonatomic) SFDevice *peerDevice; // ivar: _peerDevice
@property (copy, nonatomic) id *promptForPINHandler; // ivar: _promptForPINHandler
@property (copy, nonatomic) id *promptForPickerHandler; // ivar: _promptForPickerHandler


-(id)init;
-(int)_runContextRequest;
-(int)_runPair;
-(int)_runPairContacts;
-(int)_runPairHomeKit;
-(int)_runPairPIN;
-(int)_runPairVerify;
-(int)_runPairVisual;
-(int)_runPasswordPicker;
-(int)_runSendCredentials;
-(int)_runSessionStart;
-(void)_cleanup;
-(void)_completedWithError:(id)arg0 ;
-(void)_handleContextRequestResponse:(id)arg0 error:(id)arg1 ;
-(void)_handlePasswordPickerResponse:(id)arg0 password:(id)arg1 error:(id)arg2 ;
-(void)_handleSendCredentialsResponse:(id)arg0 error:(id)arg1 ;
-(void)_receivedObject:(id)arg0 flags:(unsigned int)arg1 ;
-(void)_run;
-(void)activate;
-(void)dealloc;
-(void)invalidate;
-(void)tryPIN:(id)arg0 ;


@end


#endif