// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSOFTWAREUPDATEMANAGER_H
#define HMDSOFTWAREUPDATEMANAGER_H

@class HMFObject, NSHashTable, NSString, NSUUID;
@protocol HMFMessageReceiver, OS_dispatch_queue;


#import "HMDAppleMediaAccessory.h"

@interface HMDSoftwareUpdateManager : HMFObject <HMFMessageReceiver>



@property (weak) HMDAppleMediaAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) NSHashTable *activeClients; // ivar: _activeClients
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;


+(BOOL)isSupported;
-(id)init;
-(id)messageDestination;
-(id)messageDispatcher;
-(void)_handleStart:(id)arg0 ;
-(void)_handleStop:(id)arg0 ;
-(void)_handleUpdateAvailableUpdate:(id)arg0 ;
-(void)fetchAvailableUpdateWithCompletionHandler:(id)arg0 ;
-(void)registerForMessages;
-(void)startUpdate:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateAvailableUpdate:(id)arg0 ;


@end


#endif