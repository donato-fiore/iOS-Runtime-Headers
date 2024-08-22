// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFDEVICESETUPSERVICEIOS_H
#define SFDEVICESETUPSERVICEIOS_H

@class NSUUID, NSData, NSString, RPFileTransferSession;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFClient.h"
#import "SFService.h"
#import "SFSession.h"

@interface SFDeviceSetupServiceiOS : NSObject {
    BOOL _activateCalled;
    BOOL _advertiseFast;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSUUID *_peer;
    BOOL _pinShowing;
    SFClient *_preventExitForLocaleClient;
    NSData *_resumeAuthTag;
    NSString *_resumePassword;
    int _resumeState;
    SFService *_sfService;
    BOOL _sfServiceActivated;
    SFSession *_sfSession;
    BOOL _suspendPending;
}


@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly, nonatomic) RPFileTransferSession *fileTransferSessionTemplate; // ivar: _fileTransferSessionTemplate
@property (copy, nonatomic) id *hidePINHandler; // ivar: _hidePINHandler
@property (copy, nonatomic) id *progressHandlerEx; // ivar: _progressHandlerEx
@property (copy, nonatomic) id *receivedObjectHandler; // ivar: _receivedObjectHandler
@property (copy, nonatomic) id *showPINHandler; // ivar: _showPINHandler
@property (copy, nonatomic) id *showPINHandlerEx; // ivar: _showPINHandlerEx


-(id)init;
-(int)_runResumeIfNeeded;
-(void)_cleanup;
-(void)_completed:(int)arg0 ;
-(void)_handleAppEventReceived:(id)arg0 ;
-(void)_handleConfigRequestReceived:(id)arg0 ;
-(void)_handleSessionEnded:(id)arg0 ;
-(void)_handleSessionSecured:(id)arg0 ;
-(void)_handleSessionStarted:(id)arg0 ;
-(void)_handleSetupActionRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handleSetupActionResume;
-(void)_handleSetupActionSuspend;
-(void)_invalidated;
-(void)_receivedObject:(id)arg0 flags:(unsigned int)arg1 ;
-(void)_run;
-(void)_sfServiceStart;
-(void)activate;
-(void)dealloc;
-(void)invalidate;
-(void)sendObject:(id)arg0 ;
-(void)sendSetupAction:(unsigned int)arg0 info:(id)arg1 responseHandler:(id)arg2 ;


@end


#endif