// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRTRANSFERSERVER_H
#define TRTRANSFERSERVER_H

@class WPTransfer, NSString;
@protocol WPTransferDelegate, OS_dispatch_queue, OS_dispatch_semaphore, TRTransferServerDelegate;

#import <Foundation/Foundation.h>


@interface TRTransferServer : NSObject <WPTransferDelegate>

 {
    *? _aesContext;
    BOOL _didSendData;
    *AirPlayPairingSessionPrivate _pairingSession;
    NSInteger _pairingState;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_responseSemaphore;
    BOOL _started;
    BOOL _waitingOnSemaphore;
    NSInteger _advertiserState;
    WPTransfer *_transferSession;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TRTransferServerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_onQueue_didReceiveEncryptedData:(id)arg0 ;
-(id)init;
-(id)transferDidReceiveData:(id)arg0 ;
-(int)_runSetupStepWithInput:(*void)arg0 inputLength:(NSUInteger)arg1 outputData:(*id)arg2 ;
-(int)_runVerifyStepWithInput:(*void)arg0 inputLength:(NSUInteger)arg1 outputData:(*id)arg2 ;
-(void)_beginAdvertisingIfPowered;
-(void)_onQueue_didFinishPairing;
-(void)dealloc;
-(void)start;
-(void)stop;
-(void)transferComplete;
-(void)transferDidFailToStartAdvertising:(id)arg0 ;
-(void)transferDidFailToStartScanning:(id)arg0 ;
-(void)transferDidFailWithError:(id)arg0 ;
-(void)transferDidUpdateAdvertiserState:(id)arg0 ;
-(void)transferDidUpdateScannerState:(id)arg0 ;


@end


#endif