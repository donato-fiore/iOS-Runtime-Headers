// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRDEVICESETUPPERIPHERAL_H
#define TRDEVICESETUPPERIPHERAL_H

@class NSString;
@protocol OS_dispatch_queue, TRDeviceSetupPeripheralDelegate;

#import <Foundation/Foundation.h>


@interface TRDeviceSetupPeripheral : NSObject {
    BOOL _performingSetup;
    BOOL _preparingForSetup;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (copy, nonatomic) NSString *authenticatediTunesStoreID; // ivar: _authenticatediTunesStoreID
@property (weak, nonatomic) NSObject<TRDeviceSetupPeripheralDelegate> *delegate; // ivar: _delegate
@property (copy) id *pendingSendDataHandler; // ivar: _pendingSendDataHandler


// -(BOOL)_sendAction:(id)arg0 sendDataHandler:(id)arg1 error:(unk)arg2  ;
-(BOOL)performSetupAndReturnError:(*id)arg0 ;
-(id)init;
-(void)_authenticateWithAction:(id)arg0 replyHandler:(id)arg1 ;
-(void)_cancelAuthenticationWithReceivedAction:(id)arg0 replyHandler:(id)arg1 ;
-(void)_cancelSetupWithAction:(id)arg0 replyHandler:(id)arg1 ;
-(void)_didDisconnect;
-(void)_didReceiveData:(id)arg0 replyHandler:(id)arg1 ;
-(void)_didTapWithSendDataHandler:(id)arg0 ;
-(void)_finishSetupWithAction:(id)arg0 replyHandler:(id)arg1 ;
-(void)_legacyAuthenticateWithAction:(id)arg0 attemptCount:(NSUInteger)arg1 replyHandler:(id)arg2 ;
-(void)_legacyAuthenticateWithUserAgent:(id)arg0 deviceGUID:(id)arg1 accountID:(id)arg2 password:(id)arg3 attemptCount:(NSUInteger)arg4 completion:(id)arg5 ;
-(void)_setUpWithAction:(id)arg0 replyHandler:(id)arg1 ;
-(void)_setupDidFailWithError:(id)arg0 replyHandler:(id)arg1 ;
-(void)_startAuthenticationWithReceivedAction:(id)arg0 replyHandler:(id)arg1 ;
-(void)cancelPreparingForSetup;
-(void)cancelSetupForStateChange;
-(void)cancelSetupForTimeout;


@end


#endif