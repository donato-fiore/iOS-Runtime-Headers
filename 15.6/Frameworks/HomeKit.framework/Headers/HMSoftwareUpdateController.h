// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMSOFTWAREUPDATECONTROLLER_H
#define HMSOFTWAREUPDATECONTROLLER_H

@class HMFUnfairLock, NSString, NSUUID;
@protocol HMFMessageReceiver, HMObjectMerge, HMSoftwareUpdateControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMAccessory.h"
#import "HMSoftwareUpdate.h"
#import "_HMContext.h"

@interface HMSoftwareUpdateController : NSObject <HMFMessageReceiver, HMObjectMerge>

 {
    HMFUnfairLock *_lock;
}


@property (weak) HMAccessory *accessory; // ivar: _accessory
@property (retain) HMSoftwareUpdate *availableUpdate; // ivar: _availableUpdate
@property (retain, nonatomic) _HMContext *context; // ivar: _context
@property (readonly, getter=isControllable) BOOL controllable;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMSoftwareUpdateControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier


+(id)logCategory;
+(id)namespace;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithAccessory:(id)arg0 ;
-(id)logIdentifier;
-(id)messageDestination;
-(void)changeUpdateSource:(NSInteger)arg0 path:(id)arg1 documentationPath:(id)arg2 userInitiatedStaging:(BOOL)arg3 completion:(id)arg4 ;
-(void)configureWithContext:(id)arg0 accessory:(id)arg1 ;
-(void)fetchAvailableUpdateWithCompletionHandler:(id)arg0 ;
-(void)removeStagedSoftwareUpdate:(id)arg0 ;
-(void)startUpdate:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif