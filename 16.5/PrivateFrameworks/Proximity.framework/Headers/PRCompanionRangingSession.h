// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRCOMPANIONRANGINGSESSION_H
#define PRCOMPANIONRANGINGSESSION_H

@class NSXPCConnection, NSString;
@protocol PRRangingClientProtocol, OS_dispatch_queue, OS_os_log, PRGenericRangingSessionDelegate;


#import "PRRangingDevice.h"

@interface PRCompanionRangingSession : PRRangingDevice <PRRangingClientProtocol>

 {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<OS_os_log> *_logger;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PRGenericRangingSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)startCompanionRanging:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(BOOL)stopCompanionRanging:(id)arg0 error:(*id)arg1 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(id)remoteObject;
-(id)synchronousRemoteObject;
-(void)configureForCompanionRanging:(id)arg0 options:(id)arg1 ;
-(void)connectToDaemon;
-(void)didFailWithError:(id)arg0 ;
-(void)didReceiveNewSolutions:(id)arg0 ;
-(void)handleInterruption;
-(void)handleInvalidation;
-(void)invalidate;
-(void)rangingRequestDidUpdateStatus:(NSUInteger)arg0 ;
-(void)rangingServiceDidUpdateState:(NSUInteger)arg0 cause:(NSInteger)arg1 ;
-(void)remoteDevice:(id)arg0 didChangeState:(NSInteger)arg1 ;


@end


#endif