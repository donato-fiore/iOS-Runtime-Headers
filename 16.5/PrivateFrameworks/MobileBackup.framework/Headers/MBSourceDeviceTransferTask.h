// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MBSOURCEDEVICETRANSFERTASK_H
#define MBSOURCEDEVICETRANSFERTASK_H

@protocol MBManagerDelegate;


#import "MBDeviceTransferTask.h"

@interface MBSourceDeviceTransferTask : MBDeviceTransferTask <MBManagerDelegate>





-(BOOL)_startWithError:(*id)arg0 ;
-(NSInteger)taskType;
-(id)initWithFileTransferSession:(id)arg0 ;
-(void)_cancel;
-(void)_finishWithError:(id)arg0 ;
-(void)_shortenPrebuddyExpirationIfNeeded;
-(void)cancel;
-(void)manager:(id)arg0 didFinishDeviceTransferKeychainTransfer:(id)arg1 ;
-(void)manager:(id)arg0 didFinishDeviceTransferPreflight:(id)arg1 error:(id)arg2 ;
-(void)manager:(id)arg0 didFinishDeviceTransferWithError:(id)arg1 ;
-(void)manager:(id)arg0 didUpdateDeviceTransferProgress:(id)arg1 ;
-(void)resume;
-(void)start;


@end


#endif