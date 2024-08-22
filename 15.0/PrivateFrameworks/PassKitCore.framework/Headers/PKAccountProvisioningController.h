// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKACCOUNTPROVISIONINGCONTROLLER_H
#define PKACCOUNTPROVISIONINGCONTROLLER_H

@class NPKCompanionAgentConnection, NSString;
@protocol OS_dispatch_source, PKAccountProvisioningControllerDelegate;

#import <Foundation/Foundation.h>

#import "PKAccountCredential.h"
#import "PKPaymentProvisioningController.h"

@interface PKAccountProvisioningController : NSObject {
    NPKCompanionAgentConnection *_watchConnection;
    PKAccountCredential *_accountCredential;
    PKPaymentProvisioningController *_provisioningController;
    BOOL _makeDefaultInAMP;
    NSObject<OS_dispatch_source> *_activationTimer;
    BOOL _usingRemoteLibrary;
    BOOL _passIsActivated;
}


@property (readonly, nonatomic) NSUInteger addToAMPState; // ivar: _addToAMPState
@property (readonly, nonatomic) NSUInteger addToIDMSState; // ivar: _addToIDMSState
@property (weak, nonatomic) NSObject<PKAccountProvisioningControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL didAddToAMP; // ivar: _didAddToAMP
@property (readonly, nonatomic) NSUInteger localPassActivationState; // ivar: _localPassActivationState
@property (readonly, nonatomic) NSUInteger makeAccountPassDefaultOnLocalDeviceState; // ivar: _makeAccountPassDefaultOnLocalDeviceState
@property (nonatomic) CGFloat passActivationTimeout; // ivar: _passActivationTimeout
@property (readonly, nonatomic) NSUInteger provisionLocalPassState; // ivar: _provisionLocalPassState
@property (readonly, nonatomic) NSUInteger provisionWatchPassState; // ivar: _provisionWatchPassState
@property (copy, nonatomic) NSString *provisionedPassUniqueID; // ivar: _provisionedPassUniqueID


+(BOOL)_isPaymentPassActivated:(id)arg0 forAccountCredential:(id)arg1 ;
-(id)_notificationDidChangeNames;
-(id)initWithAccountCredential:(id)arg0 provisioningController:(id)arg1 accountService:(id)arg2 ;
-(id)initWithAccountCredential:(id)arg0 provisioningController:(id)arg1 usingRemoteLibrary:(BOOL)arg2 ;
-(void)_handlePassActiviated;
-(void)_informDelegateOfError:(id)arg0 ;
-(void)_informDelegateOfStateUpdate;
-(void)_passLibraryDidChange:(id)arg0 ;
-(void)_processRemainingTasks;
-(void)_provisionAccountCredenital:(id)arg0 provisioningController:(id)arg1 completion:(id)arg2 ;
-(void)_startPassActivationObserver;
-(void)_stopPassActivationObserver;
-(void)addToAMPAsDefault:(BOOL)arg0 ;
-(void)addToIDMS;
-(void)dealloc;
-(void)makeAccountPassDefaultOnLocalDevice;
-(void)provisionAccountPassToLocalDevice;
-(void)provisionAccountPassToWatchAsDefault:(BOOL)arg0 ;


@end


#endif