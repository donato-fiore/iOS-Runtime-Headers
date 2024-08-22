// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDREMOTEMESSAGETRANSPORT_H
#define HMDREMOTEMESSAGETRANSPORT_H

@class HMFMessageTransport, NSString, HMFFuture, HMFPromise;
@protocol HMFLogging, HMFDumpState, HMDRemoteMessageTransportReachabilityDelegate;


#import "HMDAccountRegistry.h"

@interface HMDRemoteMessageTransport : HMFMessageTransport <HMFLogging, HMFDumpState>



@property (readonly, nonatomic) HMDAccountRegistry *accountRegistry; // ivar: _accountRegistry
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService
@property (weak, nonatomic) NSObject<HMDRemoteMessageTransportReachabilityDelegate> *reachabilityDelegate; // ivar: _reachabilityDelegate
@property (readonly, nonatomic, getter=isSecure) BOOL secure;
@property (readonly, nonatomic) HMFFuture *startFuture; // ivar: _startFuture
@property (readonly, nonatomic) HMFPromise *startPromise; // ivar: _startPromise
@property (readonly) Class superclass;
@property (readonly, nonatomic) int transportType; // ivar: _transportType


+(NSUInteger)restriction;
+(id)logCategory;
+(id)remoteMessageFromMessage:(id)arg0 secure:(BOOL)arg1 accountRegistry:(id)arg2 ;
+(id)remoteMessageTransportsForProductInfo:(id)arg0 ;
-(BOOL)canSendMessage:(id)arg0 ;
-(BOOL)doesResponse:(id)arg0 matchAllCapabilities:(id)arg1 ;
-(BOOL)isValidMessage:(id)arg0 ;
-(NSInteger)compareCapability:(id)arg0 key:(id)arg1 withCapability:(id)arg2 ;
-(id)dumpState;
-(id)init;
-(id)initWithAccountRegistry:(id)arg0 ;
-(id)matchResponse:(id)arg0 requestedCapabilities:(id)arg1 ;
-(id)remoteMessageFromMessage:(id)arg0 ;
-(id)start;
-(void)postDidReceiveRemoteMessageWithNoListenerFromDevice:(id)arg0 ;


@end


#endif