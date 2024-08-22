// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _RWIRELAYCLIENTTCPCONNECTION_H
#define _RWIRELAYCLIENTTCPCONNECTION_H

@class RWIRelayClientConnection, NSString;
@protocol _RWITCPConnectionDelegate;


#import "_RWITCPConnection.h"

@interface _RWIRelayClientTCPConnection : RWIRelayClientConnection <_RWITCPConnectionDelegate>



@property (retain, nonatomic) _RWITCPConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)connectionFromLockdownCheckinWithInfo:(*void)arg0 delegate:(id)arg1 ;
+(id)connectionFromTCPConnection:(id)arg0 delegate:(id)arg1 ;
-(id)initWithTCPConnection:(id)arg0 delegate:(id)arg1 ;
-(void)closeInternal;
-(void)sendMessage:(id)arg0 ;
-(void)tcpConnection:(id)arg0 didReceiveMessage:(id)arg1 ;
-(void)tcpConnectionDidClose:(id)arg0 ;


@end


#endif