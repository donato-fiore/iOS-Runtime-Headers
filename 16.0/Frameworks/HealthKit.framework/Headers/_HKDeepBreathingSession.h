// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKDEEPBREATHINGSESSION_H
#define _HKDEEPBREATHINGSESSION_H

@class NSString;
@protocol _HKXPCExportable, _HKDeepBreathingSessionClient, OS_dispatch_queue, _HKDeepBreathingSessionDelegate;

#import <Foundation/Foundation.h>

#import "HKTaskServerProxyProvider.h"
#import "_HKDeepBreathingSessionConfiguration.h"

@interface _HKDeepBreathingSession : NSObject <_HKXPCExportable, _HKDeepBreathingSessionClient>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSInteger _serverState;
    HKTaskServerProxyProvider *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<_HKDeepBreathingSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSInteger serverState;
@property (readonly, copy) _HKDeepBreathingSessionConfiguration *sessionConfiguration;
@property (readonly) Class superclass;


+(id)taskIdentifier;
-(BOOL)_isServerAttached;
-(BOOL)_queue_isServerAttached;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 configuration:(id)arg1 ;
-(id)remoteInterface;
-(void)_connectionDidEncounterError:(id)arg0 ;
-(void)_queue_alertDelegateDidEncounterError:(id)arg0 ;
-(void)_queue_alertDelegateDidReceiveHeartRate:(CGFloat)arg0 ;
-(void)_queue_deactivate;
-(void)_queue_transitionToServerState:(NSInteger)arg0 ;
-(void)clientRemote_sessionDidReceiveError:(id)arg0 ;
-(void)clientRemote_sessionDidReceiveHeartRate:(CGFloat)arg0 ;
-(void)connectionInvalidated;
-(void)endSessionWithEndReason:(NSInteger)arg0 ;
// -(void)fetchProxyWithHandler:(id)arg0 errorHandler:(unk)arg1  ;
-(void)startGuiding;
-(void)startSessionWithStartDate:(id)arg0 completion:(id)arg1 ;


@end


#endif