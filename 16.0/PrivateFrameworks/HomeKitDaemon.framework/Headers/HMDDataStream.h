// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDDATASTREAM_H
#define HMDDATASTREAM_H

@class HMFTimer, NSString, NSMutableArray, NSMutableSet, NSMapTable, HAPSecuritySessionEncryption;
@protocol HMFLogging, HMFTimerDelegate, HMDDataStreamDelegate, HMDDataStreamTransport, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDDataStreamControlProtocol.h"

@interface HMDDataStream : NSObject <HMFLogging, HMFTimerDelegate>



@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (retain, nonatomic) HMFTimer *connectionTimer; // ivar: _connectionTimer
@property (retain, nonatomic) HMDDataStreamControlProtocol *controlProtocol; // ivar: _controlProtocol
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMDDataStreamDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL firstMessageReceived; // ivar: _firstMessageReceived
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMFTimer *helloMessageResponseTimer; // ivar: _helloMessageResponseTimer
@property (readonly, copy) NSString *logIdentifier; // ivar: _logIdentifier
@property (nonatomic) NSUInteger nextRequestIdentifier; // ivar: _nextRequestIdentifier
@property (readonly, nonatomic) NSMutableArray *pendingEvents; // ivar: _pendingEvents
@property (readonly, nonatomic) NSMutableSet *pendingRequests; // ivar: _pendingRequests
@property (retain, nonatomic) NSMapTable *protocols; // ivar: _protocols
@property (retain, nonatomic) HAPSecuritySessionEncryption *sessionEncryption; // ivar: _sessionEncryption
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<HMDDataStreamTransport> *transport; // ivar: _transport
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithTransport:(id)arg0 sessionEncryption:(id)arg1 workQueue:(id)arg2 logIdentifier:(id)arg3 ;
-(id)initWithTransport:(id)arg0 sessionEncryption:(id)arg1 workQueue:(id)arg2 logIdentifier:(id)arg3 connectionTimer:(id)arg4 helloMessageResponseTimer:(id)arg5 ;
-(id)protocolDelegateHandle;
-(id)protocolWithName:(id)arg0 ;
-(void)addProtocol:(id)arg0 name:(id)arg1 ;
-(void)close;
-(void)connect;
-(void)protocolDidUpdateActiveStatus:(id)arg0 ;
-(void)sendEventForProtocol:(id)arg0 topic:(id)arg1 payload:(id)arg2 completion:(id)arg3 ;
-(void)sendRequestForProtocol:(id)arg0 topic:(id)arg1 identifier:(NSUInteger)arg2 payload:(id)arg3 completion:(id)arg4 ;
-(void)sendRequestForProtocol:(id)arg0 topic:(id)arg1 payload:(id)arg2 completion:(id)arg3 ;
-(void)sendResponseForRequestHeader:(id)arg0 payload:(id)arg1 status:(unsigned short)arg2 completion:(id)arg3 ;
-(void)setTrafficClass:(NSUInteger)arg0 ;
-(void)timerDidFire:(id)arg0 ;
-(void)transport:(id)arg0 didFailWithError:(id)arg1 ;
-(void)transport:(id)arg0 didReceiveRawFrame:(id)arg1 ;
-(void)transportDidClose:(id)arg0 ;
-(void)transportDidOpen:(id)arg0 ;


@end


#endif