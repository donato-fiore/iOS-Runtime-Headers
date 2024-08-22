// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRRANGINGSESSION_H
#define PRRANGINGSESSION_H

@class NSXPCConnection, NSString, NSMutableSet;
@protocol PRAidedRangingClientProtocol, OS_os_log, PRRangingSessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PRRangingDevice.h"
#import "PRPeer.h"

@interface PRRangingSession : NSObject <PRAidedRangingClientProtocol>

 {
    NSObject<OS_os_log> *_logger;
    NSXPCConnection *_connection;
    PRRangingDevice *_rangingDevice;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<PRRangingSessionDelegate> *delegate; // ivar: _delegate
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isReady; // ivar: _isReady
@property (readonly, copy) PRPeer *localPeer; // ivar: _localPeer
@property (retain) PRPeer *rangedPeer; // ivar: _rangedPeer
@property (retain) NSMutableSet *sessionParticipants; // ivar: _sessionParticipants
@property (readonly) Class superclass;
@property (getter=isValid) BOOL valid; // ivar: _valid


+(NSUInteger)computeLocalDeviceIndex:(id)arg0 sessionParticipants:(id)arg1 ;
-(id)init;
-(id)rangingConfigurationWithDeviceIndex:(NSUInteger)arg0 ;
-(id)remoteObject;
-(void)connectToDaemon;
-(void)didFailWithError:(id)arg0 ;
-(void)didReceiveNewSolutions:(id)arg0 ;
-(void)handleInterruption;
-(void)handleInvalidation;
-(void)invalidate;
-(void)invokeDelegateBlock:(id)arg0 ;
-(void)pushCollaborationData:(id)arg0 ;
-(void)rangingRequestDidUpdateStatus:(NSUInteger)arg0 ;
-(void)rangingServiceDidUpdateState:(NSUInteger)arg0 cause:(NSInteger)arg1 ;
-(void)requestInitialCollaborationDataWithCompletionHandler:(id)arg0 ;
-(void)sendDataToPeers:(id)arg0 ;
-(void)startRangingWithPeer:(id)arg0 ;
-(void)stopRangingWithPeer:(id)arg0 ;


@end


#endif