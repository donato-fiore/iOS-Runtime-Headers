// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MBTARGETDEVICETRANSFERTASK_H
#define MBTARGETDEVICETRANSFERTASK_H

@protocol MBManagerDelegate;


#import "MBDeviceTransferTask.h"

@interface MBTargetDeviceTransferTask : MBDeviceTransferTask <MBManagerDelegate>

 {
    uint8_t _startedPreflight;
    uint8_t _startedKeychainTransfer;
    uint8_t _startedKeychainDataTransfer;
    uint8_t _startedKeychainDataImport;
    uint8_t _startedDataTransfer;
}


@property (copy, nonatomic) id *keychainTransferCompletionHandler; // ivar: _keychainTransferCompletionHandler
@property (copy, nonatomic) id *preflightCompletionHandler; // ivar: _preflightCompletionHandler


-(BOOL)_startWithError:(*id)arg0 ;
-(NSInteger)taskType;
-(id)initWithFileTransferSession:(id)arg0 ;
-(void)_cancel;
-(void)_finishKeychainTransferWithError:(id)arg0 completionHandler:(id)arg1 ;
-(void)_finishWithError:(id)arg0 ;
-(void)cancel;
-(void)manager:(id)arg0 didFinishDeviceTransferKeychainTransferWithError:(id)arg1 ;
-(void)manager:(id)arg0 didFinishDeviceTransferPreflight:(id)arg1 error:(id)arg2 ;
-(void)manager:(id)arg0 didFinishDeviceTransferWithError:(id)arg1 ;
-(void)manager:(id)arg0 didUpdateDeviceTransferProgress:(id)arg1 ;
-(void)resume;
-(void)start;
-(void)startDataTransferWithPreflightInfo:(id)arg0 completionHandler:(id)arg1 ;
-(void)startKeychainDataImportWithKeychainInfo:(id)arg0 completionHandler:(id)arg1 ;
-(void)startKeychainDataTransferWithCompletionHandler:(id)arg0 ;
-(void)startKeychainTransferWithCompletionHandler:(id)arg0 ;
-(void)startPreflightWithCompletionHandler:(id)arg0 ;


@end


#endif