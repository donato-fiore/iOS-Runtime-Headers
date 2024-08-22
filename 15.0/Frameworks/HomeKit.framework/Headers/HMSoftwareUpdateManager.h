// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMSOFTWAREUPDATEMANAGER_H
#define HMSOFTWAREUPDATEMANAGER_H

@class HMFUnfairLock, NSString, NSUUID;
@protocol HMFMessageReceiver, HMSoftwareUpdateManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMSoftwareUpdate.h"
#import "_HMContext.h"

@interface HMSoftwareUpdateManager : NSObject <HMFMessageReceiver>

 {
    HMFUnfairLock *_lock;
}


@property (readonly) HMSoftwareUpdate *availableUpdate; // ivar: _availableUpdate
@property (readonly, nonatomic) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMSoftwareUpdateManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (nonatomic, getter=isStarted) BOOL started; // ivar: _started
@property (readonly) Class superclass;


+(id)logCategory;
-(id)init;
-(id)initWithContext:(id)arg0 ;
-(id)messageDestination;
-(void)__registerForMessages;
-(void)_handleFetch:(id)arg0 ;
-(void)_handleStartUpdate:(id)arg0 ;
-(void)_handleUpdatedAvailableUpdate:(id)arg0 ;
-(void)_reallyStartWithCompletionHandler:(id)arg0 ;
-(void)_unconfigure;
-(void)_unconfigureContext;
-(void)reconnect;
-(void)startWithCompletionHandler:(id)arg0 ;
-(void)stop;
-(void)updateAvailableUpdate:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif