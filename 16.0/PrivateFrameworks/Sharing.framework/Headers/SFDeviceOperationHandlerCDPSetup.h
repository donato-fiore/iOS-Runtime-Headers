// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFDEVICEOPERATIONHANDLERCDPSETUP_H
#define SFDEVICEOPERATIONHANDLERCDPSETUP_H

@class CDPContext, CDPStateController, NSString;
@protocol CDPStateUIProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFSession.h"

@interface SFDeviceOperationHandlerCDPSetup : NSObject <CDPStateUIProvider>

 {
    CDPContext *_cdpContext;
    CDPStateController *_cdpController;
    BOOL _invalidateCalled;
    id *_responseHandler;
}


@property (copy, nonatomic) NSString *altDSIDNeedingRepair; // ivar: _altDSIDNeedingRepair
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) BOOL failIfCDPNotEnabled; // ivar: _failIfCDPNotEnabled
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SFSession *sfSession; // ivar: _sfSession
@property (readonly) Class superclass;


-(id)init;
-(void)_activate;
-(void)_handleCDPSetupRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)activate;
-(void)cdpContext:(id)arg0 promptForAdoptionOfMultipleICSC:(id)arg1 ;
-(void)cdpContext:(id)arg0 promptForBeneficiaryAccessKeyWithCompletion:(id)arg1 ;
-(void)cdpContext:(id)arg0 promptForICSCWithIsNumeric:(BOOL)arg1 numericLength:(id)arg2 isRandom:(BOOL)arg3 validator:(id)arg4 ;
-(void)cdpContext:(id)arg0 promptForInteractiveAuthenticationWithCompletion:(id)arg1 ;
-(void)cdpContext:(id)arg0 promptForLocalSecretWithCompletion:(id)arg1 ;
-(void)cdpContext:(id)arg0 promptForRemoteSecretWithDevices:(id)arg1 offeringRemoteApproval:(BOOL)arg2 validator:(id)arg3 ;
-(void)cdpRecoveryFlowContext:(id)arg0 promptForRemoteSecretWithDevices:(id)arg1 validator:(id)arg2 ;
-(void)invalidate;


@end


#endif