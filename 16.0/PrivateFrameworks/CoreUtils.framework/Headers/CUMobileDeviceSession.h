// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUMOBILEDEVICESESSION_H
#define CUMOBILEDEVICESESSION_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CURunLoopThread.h"
#import "CUMobileDevice.h"

@interface CUMobileDeviceSession : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    CURunLoopThread *_mdRunLoopThread;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (retain, nonatomic) CUMobileDevice *peerDevice; // ivar: _peerDevice
@property (copy, nonatomic) id *promptForPINHandler; // ivar: _promptForPINHandler


-(id)init;
-(void)_invalidated;
-(void)_pairSetupTryPIN:(id)arg0 ;
-(void)_pairSetupWithFlags:(unsigned int)arg0 completion:(id)arg1 ;
-(void)_pairVerifyWithFlags:(unsigned int)arg0 completion:(id)arg1 ;
-(void)_unpairWithCompletion:(id)arg0 ;
-(void)activate;
-(void)invalidate;
-(void)pairSetupTryPIN:(id)arg0 ;
-(void)pairSetupWithFlags:(unsigned int)arg0 completion:(id)arg1 ;
-(void)pairVerifyWithFlags:(unsigned int)arg0 completion:(id)arg1 ;
-(void)unpairWithCompletion:(id)arg0 ;


@end


#endif