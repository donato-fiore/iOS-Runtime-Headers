// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPPLUGINATTESTATIONSTATUS_H
#define CHIPPLUGINATTESTATIONSTATUS_H

@class NSString, NSNumber;
@protocol CHIPDeviceAttestationDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CHIPAccessoryServer.h"
#import "CHIPPluginUIDialogPresenter.h"

@interface CHIPPluginAttestationStatus : NSObject <CHIPDeviceAttestationDelegate>



@property (retain, nonatomic) CHIPAccessoryServer *accessoryServer; // ivar: _accessoryServer
@property (retain) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSNumber *failSafeExpiryTimeoutSecs; // ivar: _failSafeExpiryTimeoutSecs
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) CHIPPluginUIDialogPresenter *uiDialogPresenter; // ivar: _uiDialogPresenter


-(id)initWithQueue:(id)arg0 uiDialogPresenter:(id)arg1 failSafeExpiryTimeoutSecs:(id)arg2 ;
-(void)deviceAttestation:(id)arg0 failedForDevice:(*void)arg1 error:(id)arg2 ;
-(void)populateDelegate:(id)arg0 ;


@end


#endif