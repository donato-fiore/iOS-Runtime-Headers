// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMTCATALYSTSHARINGBACKEDDEVICESESSION_H
#define DMTCATALYSTSHARINGBACKEDDEVICESESSION_H

@class NSString, CATSharingDevice, SFSession;
@protocol CATSharingDeviceSession, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DMTSharingDevice.h"

@interface DMTCatalystSharingBackedDeviceSession : NSObject <CATSharingDeviceSession>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) DMTSharingDevice *device;
@property (copy) id *deviceSessionErrorHandler; // ivar: _deviceSessionErrorHandler
@property (copy) id *deviceSessionInvalidatedHandler; // ivar: _deviceSessionInvalidatedHandler
@property (copy) id *deviceSessionReadyHandler; // ivar: _deviceSessionReadyHandler
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (copy) id *messageReceivedHandler; // ivar: _messageReceivedHandler
@property (nonatomic, getter=isPaired) BOOL paired; // ivar: _paired
@property (copy) id *pinPromptHandler; // ivar: _pinPromptHandler
@property (nonatomic, getter=isReady) BOOL ready; // ivar: _ready
@property (readonly, nonatomic) CATSharingDevice *remoteDevice; // ivar: _remoteDevice
@property (readonly, nonatomic) SFSession *session; // ivar: _session
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionQueue; // ivar: _sessionQueue
@property (readonly) Class superclass;


+(id)failureTypeForPairingError:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(void)activate;
-(void)addPrimitiveHandlers;
-(void)beginPairWithCompletion:(id)arg0 ;
-(void)deactivate;
-(void)invalidateWithError:(id)arg0 ;
-(void)removePrimitiveHandlers;
-(void)sendMessage:(id)arg0 ;
-(void)tryPairingPIN:(id)arg0 ;
-(void)verifyPairing:(id)arg0 ;


@end


#endif