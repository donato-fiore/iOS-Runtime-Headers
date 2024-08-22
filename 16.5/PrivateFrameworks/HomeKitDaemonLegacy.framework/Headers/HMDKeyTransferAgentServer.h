// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDKEYTRANSFERAGENTSERVER_H
#define HMDKEYTRANSFERAGENTSERVER_H

@class NSMutableSet, HMFExponentialBackoffTimer, NSUUID, NSString;
@protocol HMFTimerDelegate, OS_dispatch_group;


#import "HMDKeyTransferAgent.h"

@interface HMDKeyTransferAgentServer : HMDKeyTransferAgent <HMFTimerDelegate>



@property (nonatomic) BOOL broadcastFailure; // ivar: _broadcastFailure
@property (retain, nonatomic) NSObject<OS_dispatch_group> *broadcastGroup; // ivar: _broadcastGroup
@property (retain, nonatomic) NSMutableSet *broadcastNotifiedDevices; // ivar: _broadcastNotifiedDevices
@property (retain, nonatomic) HMFExponentialBackoffTimer *broadcastUUIDTimer; // ivar: _broadcastUUIDTimer
@property (retain, nonatomic) NSUUID *currentKeyUUID; // ivar: _currentKeyUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *finalCompletionHandler; // ivar: _finalCompletionHandler
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isPeerAvailable;
+(id)logCategory;
-(BOOL)_endAdvertiseUUIDWithError:(*id)arg0 ;
-(BOOL)_startAdvertiseUUIDWithError:(*id)arg0 ;
-(id)_httpMessageTransport;
-(id)initWithHomeManager:(id)arg0 ;
-(void)__deviceAddedToAccount:(id)arg0 ;
-(void)__deviceRemovedFromAccount:(id)arg0 ;
-(void)__deviceUpdated:(id)arg0 ;
-(void)__resetTimer:(id)arg0 ;
-(void)_device:(id)arg0 addedToAccount:(id)arg1 ;
-(void)_device:(id)arg0 removedFromAccount:(id)arg1 ;
-(void)_endPairingWithError:(id)arg0 ;
-(void)_handleKeyTransferAgentMessage:(id)arg0 ;
-(void)beginPairingWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)resetConfig;
-(void)timerDidFire:(id)arg0 ;


@end


#endif