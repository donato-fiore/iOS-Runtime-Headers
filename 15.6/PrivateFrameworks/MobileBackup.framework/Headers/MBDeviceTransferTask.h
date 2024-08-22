// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MBDEVICETRANSFERTASK_H
#define MBDEVICETRANSFERTASK_H

@class NSError, RPFileTransferSession;
@protocol MBManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MBManager.h"

@interface MBDeviceTransferTask : NSObject <MBManagerDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    uint8_t _started;
    uint8_t _canceled;
    uint8_t _finished;
    uint8_t _suspended;
}


@property (retain, nonatomic) NSError *completionError; // ivar: _completionError
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) id *connectionInfoHandler; // ivar: _connectionInfoHandler
@property (copy, nonatomic) id *connectionStateHandler; // ivar: _connectionStateHandler
@property (retain, nonatomic) RPFileTransferSession *fileTransferSession; // ivar: _fileTransferSession
@property (retain, nonatomic) MBManager *manager; // ivar: _manager
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;


-(BOOL)_handleCompletionWithError:(*id)arg0 ;
-(BOOL)canceled;
-(BOOL)finished;
-(BOOL)started;
-(NSInteger)taskType;
-(id)initWithFileTransferSession:(id)arg0 ;
-(void)_cancel;
-(void)_finishWithError:(id)arg0 ;
-(void)_resume;
-(void)_start;
-(void)_suspend;
-(void)cancel;
-(void)dealloc;
-(void)manager:(id)arg0 didUpdateDeviceTransferConnectionInfo:(id)arg1 ;
-(void)managerDidLoseConnectionToService:(id)arg0 ;
-(void)start;


@end


#endif