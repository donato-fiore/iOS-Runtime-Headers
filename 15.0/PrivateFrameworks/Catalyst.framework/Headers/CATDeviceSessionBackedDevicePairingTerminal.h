// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CATDEVICESESSIONBACKEDDEVICEPAIRINGTERMINAL_H
#define CATDEVICESESSIONBACKEDDEVICEPAIRINGTERMINAL_H

@class NSString;
@protocol CATSharingDevicePairingTerminal, CATSharingDeviceSession;

#import <Foundation/Foundation.h>

#import "CATSharingDevice.h"

@interface CATDeviceSessionBackedDevicePairingTerminal : NSObject <CATSharingDevicePairingTerminal>

 {
    id<CATSharingDeviceSession> *mDeviceSession;
    id *mVerifyPairingCompletion;
    id *mBeginPairingCompletion;
    id *mPINPromptHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CATSharingDevice *device;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (readonly) Class superclass;


-(id)initWithDeviceSession:(id)arg0 ;
// -(void)_beginPairing:(id)arg0 withCompletion:(unk)arg1  ;
-(void)_invalidate;
-(void)_tryPIN:(id)arg0 ;
-(void)_verifyPairingAndFetchStableIdentifierWithCompletion:(id)arg0 ;
-(void)addSessionHandlers;
// -(void)beginPairing:(id)arg0 withCompletion:(unk)arg1  ;
-(void)deviceSessionEncounteredError:(id)arg0 ;
-(void)deviceSessionInvalidated:(id)arg0 ;
-(void)fetchStableIdentifier;
-(void)fetchStableIdentifierFinished:(id)arg0 ;
-(void)invalidate;
-(void)invalidateWithError:(id)arg0 ;
-(void)pairingCompleteWithError:(id)arg0 ;
-(void)removeSessionHandlers;
-(void)sessionHasPromptedForPINWithWaitTime:(NSUInteger)arg0 ;
-(void)tryPIN:(id)arg0 ;
-(void)vendConnectionForCompletion:(id)arg0 ;
-(void)verifyPairing;
-(void)verifyPairingAndFetchStableIdentifierWithCompletion:(id)arg0 ;
-(void)verifyPairingFinished:(BOOL)arg0 ;


@end


#endif