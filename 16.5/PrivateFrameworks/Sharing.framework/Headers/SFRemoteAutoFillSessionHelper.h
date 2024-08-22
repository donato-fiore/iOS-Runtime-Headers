// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFREMOTEAUTOFILLSESSIONHELPER_H
#define SFREMOTEAUTOFILLSESSIONHELPER_H

@class NSXPCConnection, SDAutoFillAgent;
@protocol NSSecureCoding, SFXPCInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFRemoteAutoFillSessionHelper : NSObject <NSSecureCoding, SFXPCInterface>

 {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}


@property (retain, nonatomic) SDAutoFillAgent *agent; // ivar: _agent
@property (copy, nonatomic) id *dismissUserNotificationHandler; // ivar: _dismissUserNotificationHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) id *pairingResponseHandler; // ivar: _pairingResponseHandler
@property (copy, nonatomic) id *promptForPINHandler; // ivar: _promptForPINHandler


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_ensureXPCStarted;
-(void)_interrupted;
-(void)_invalidate;
-(void)_invalidated;
-(void)activateWithCompletion:(id)arg0 ;
-(void)autoFillDismissUserNotification;
-(void)autoFillPairingSucceeded:(BOOL)arg0 completion:(id)arg1 ;
-(void)autoFillPromptForPIN:(unsigned int)arg0 throttleSeconds:(int)arg1 ;
-(void)clientDismissUserNotification;
-(void)clientPairingSucceeded:(BOOL)arg0 completion:(id)arg1 ;
-(void)clientPromptForPIN:(unsigned int)arg0 throttleSeconds:(int)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)serverDidPickUsername:(id)arg0 password:(id)arg1 error:(id)arg2 ;
-(void)serverTryPIN:(id)arg0 ;
-(void)serverUserNotificationDidActivate:(id)arg0 ;
-(void)serverUserNotificationDidDismiss:(id)arg0 ;


@end


#endif