// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATIDSSERVICETRANSPORT_H
#define CATIDSSERVICETRANSPORT_H

@class NSMutableArray;
@protocol CATIDSServiceConnectionDelegate;


#import "CATTransport.h"
#import "CATIDSServiceConnection.h"

@interface CATIDSServiceTransport : CATTransport <CATIDSServiceConnectionDelegate>

 {
    CATIDSServiceConnection *mConnection;
    NSMutableArray *mReceiveQueue;
    BOOL mIsActive;
    BOOL mDidDelegateInvalidation;
}




-(id)initWithConnection:(id)arg0 ;
-(id)name;
-(id)operationToSendMessage:(id)arg0 ;
-(void)connection:(id)arg0 receivedData:(id)arg1 ;
-(void)connectionClosed:(id)arg0 ;
-(void)invalidateConnection;
-(void)resumeConnection;
-(void)serviceReceiveQueue;
-(void)suspendConnection;
-(void)tryReportingInvalidation;


@end


#endif