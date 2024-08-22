// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKSESSION_H
#define CRKSESSION_H

@class NSDictionary, CATStateMachine, CATTransport;
@protocol CRKGrowthFunction, CRKSessionDelegate;

#import <Foundation/Foundation.h>

#import "CRKRemoteEndpoint.h"
#import "CRKTransportPreflightOperation.h"

@interface CRKSession : NSObject {
    CGFloat mCurrentBackoffInterval;
}


@property (readonly, nonatomic) NSObject<CRKGrowthFunction> *backoffGrowthFunction; // ivar: _backoffGrowthFunction
@property (weak, nonatomic) NSObject<CRKSessionDelegate> *delegate; // ivar: _delegate
@property (readonly) CRKRemoteEndpoint *endpoint; // ivar: _endpoint
@property (nonatomic) CGFloat lostBeaconTimeout; // ivar: _lostBeaconTimeout
@property (nonatomic) BOOL requiresBeacon; // ivar: _requiresBeacon
@property (readonly, copy, nonatomic) NSDictionary *stateDictionary;
@property (retain, nonatomic) CATStateMachine *stateMachine; // ivar: mFSM
@property (retain, nonatomic) CATTransport *transport; // ivar: _transport
@property (retain, nonatomic) CRKTransportPreflightOperation *transportPreflightOperation; // ivar: _transportPreflightOperation
@property (nonatomic) CGFloat willLoseBeaconWarningTimeout; // ivar: _willLoseBeaconWarningTimeout


-(id)initWithEndpoint:(id)arg0 ;
-(id)studentSocketOptions;
-(void)backoffDidFinish;
-(void)cancelConnectionAttempt;
-(void)connect;
-(void)didConnect;
-(void)enterBackoffCanConnect;
-(void)enterNoNetwork;
-(void)enterOutOfRange;
-(void)exitBackoffCanConnect;
-(void)failedToConnect;
-(void)foundBeacon;
-(void)invalidate;
-(void)localWiFiBecameAvailable;
-(void)localWiFiBecameUnavailable;
-(void)lostBeacon;
-(void)lostConnection;
-(void)processFinishedTransportPreflightOperation:(id)arg0 ;
-(void)registerDefaults;
-(void)rejected;
-(void)resetBackoff;
-(void)startPreflightingTransport:(id)arg0 ;
-(void)stopPreflightingTransport;
-(void)transportPreflightOperationDidFinish:(id)arg0 ;
-(void)tryConnecting;


@end


#endif