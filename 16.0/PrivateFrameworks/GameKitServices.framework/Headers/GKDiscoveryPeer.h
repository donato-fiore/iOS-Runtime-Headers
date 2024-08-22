// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKDISCOVERYPEER_H
#define GKDISCOVERYPEER_H

@class NSMutableArray, NSNumber, NSString, NSMutableSet;
@protocol GKSimpleTimerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GKDiscoveryPeerConnection.h"
#import "GKSimpleTimer.h"

@interface GKDiscoveryPeer : NSObject <GKSimpleTimerDelegate>



@property (retain, nonatomic) NSMutableArray *attemptedInterfaces; // ivar: _attemptedInterfaces
@property (retain, nonatomic) NSNumber *chosenInterface; // ivar: _chosenInterface
@property (retain, nonatomic) GKDiscoveryPeerConnection *connection; // ivar: _connection
@property (copy, nonatomic) NSString *deviceID; // ivar: _deviceID
@property (nonatomic) CGFloat discoveryTimeStamp; // ivar: _discoveryTimeStamp
@property (retain, nonatomic) NSMutableSet *interfaces; // ivar: _interfaces
@property (retain, nonatomic) NSMutableArray *orderedInterfaces; // ivar: _orderedInterfaces
@property (copy, nonatomic) NSString *playerID; // ivar: _playerID
@property (copy, nonatomic) id *resolveTimeoutHandler; // ivar: _resolveTimeoutHandler
@property (retain, nonatomic) GKSimpleTimer *resolveTimer; // ivar: _resolveTimer
@property (retain, nonatomic) NSMutableArray *sendDataBuffer; // ivar: _sendDataBuffer
@property (copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (nonatomic) BOOL shouldSignalDiscovery; // ivar: _shouldSignalDiscovery
@property (nonatomic) int state; // ivar: _state
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue
@property (retain, nonatomic) GKDiscoveryPeerConnection *trialConnection; // ivar: _trialConnection


-(BOOL)parseServiceNameForInit:(id)arg0 ;
-(id)description;
-(id)initWithServiceName:(id)arg0 ;
-(id)nextInterfaceIndex;
-(id)stringForState:(int)arg0 ;
-(void)cleanUpForBrowse;
-(void)dealloc;
-(void)didLoseInterface:(id)arg0 ;
-(void)flushDataBuffer;
-(void)invalidate;
-(void)sendData:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)startResolveTimerWithHandler:(id)arg0 ;
-(void)stopResolveTimer;
-(void)timeout:(id)arg0 ;


@end


#endif