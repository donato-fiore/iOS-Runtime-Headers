// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMUSERCLOUDSHAREMANAGER_H
#define HMUSERCLOUDSHAREMANAGER_H

@class NSArray, NSString, NSUUID;
@protocol HMFMessageReceiver, HMUserCloudShareManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_HMContext.h"

@interface HMUserCloudShareManager : NSObject <HMFMessageReceiver>



@property (retain, nonatomic) NSArray *containerIDs; // ivar: _containerIDs
@property (readonly, nonatomic) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMUserCloudShareManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (nonatomic, getter=isRegistered) BOOL registered; // ivar: _registered
@property (readonly) Class superclass;


+(id)logCategory;
-(id)init;
-(id)initWithContext:(id)arg0 ;
-(id)messageDestination;
-(void)__registerForMessages;
-(void)_handleDidReceiveRepairRequest:(id)arg0 ;
-(void)_handleDidReceiveShare:(id)arg0 ;
-(void)_registerWithCompletion:(id)arg0 ;
-(void)_unconfigure;
-(void)configure;
-(void)reconnect;
-(void)registerForContainerIDs:(id)arg0 completion:(id)arg1 ;


@end


#endif