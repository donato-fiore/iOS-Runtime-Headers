// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRBTRANGINGSESSION_H
#define PRBTRANGINGSESSION_H

@class NSXPCConnection, NSString;
@protocol PRBTRangingClientProtocol, OS_dispatch_queue, OS_os_log, PRBTRangingSessionDelegate;


#import "PRRangingDevice.h"

@interface PRBTRangingSession : PRRangingDevice <PRBTRangingClientProtocol>

 {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<OS_os_log> *_logger;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PRBTRangingSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(id)remoteObject;
-(id)synchronousRemoteObject;
-(void)connectToDaemon;
-(void)didConnectDevice:(id)arg0 error:(id)arg1 ;
-(void)didFailWithError:(id)arg0 ;
-(void)didFetchTxPower:(id)arg0 fromDevice:(id)arg1 withError:(id)arg2 ;
-(void)didReceiveNewBTRSSI:(id)arg0 ;
-(void)didStartRangingOnDevice:(id)arg0 withError:(id)arg1 ;
-(void)didStopOwnerRangingOnDevice:(id)arg0 withError:(id)arg1 ;
-(void)fetchTxPower:(id)arg0 isUT:(id)arg1 ;
-(void)handleInterruption;
-(void)handleInvalidation;
-(void)invalidate;
-(void)startOwnerRanging:(id)arg0 ;
-(void)startUTRanging:(id)arg0 ;
-(void)stopOwnerRanging:(id)arg0 ;
-(void)stopUTRanging:(id)arg0 ;


@end


#endif