// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRATTESTATIONSTATUS_H
#define HMMTRATTESTATIONSTATUS_H

@class NSString, NSNumber;
@protocol MTRDeviceAttestationDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMMTRAccessoryServer.h"
#import "HMMTRUIDialogPresenter.h"

@interface HMMTRAttestationStatus : NSObject <MTRDeviceAttestationDelegate>



@property (retain, nonatomic) HMMTRAccessoryServer *accessoryServer; // ivar: _accessoryServer
@property (retain) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSNumber *failSafeExpiryTimeoutSecs; // ivar: _failSafeExpiryTimeoutSecs
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) HMMTRUIDialogPresenter *uiDialogPresenter; // ivar: _uiDialogPresenter


-(id)initWithQueue:(id)arg0 uiDialogPresenter:(id)arg1 failSafeExpiryTimeoutSecs:(id)arg2 ;
-(void)deviceAttestation:(id)arg0 completedForDevice:(*void)arg1 attestationDeviceInfo:(id)arg2 error:(id)arg3 ;
-(void)populateDelegate:(id)arg0 ;


@end


#endif