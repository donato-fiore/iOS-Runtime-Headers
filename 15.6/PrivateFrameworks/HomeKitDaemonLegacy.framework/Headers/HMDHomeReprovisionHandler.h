// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHOMEREPROVISIONHANDLER_H
#define HMDHOMEREPROVISIONHANDLER_H

@class HMFObject, HMFMessageDispatcher, HMFTimer, NSMutableDictionary, NSString, NSSet, NSUUID;
@protocol HMFTimerDelegate, HMFLogging, HMDHomeMessageReceiver, OS_dispatch_queue, HMDAccessoryBrowserProtocol;


#import "HMDHome.h"

@interface HMDHomeReprovisionHandler : HMFObject <HMFTimerDelegate, HMFLogging, HMDHomeMessageReceiver>

 {
    BOOL _reprovisionBrowsingAllowed;
    BOOL _reprovisionBrowsingPending;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    HMDHome *_home;
    id<HMDAccessoryBrowserProtocol> *_accessoryBrowser;
    HMFTimer *_disableReprovisionBrowsingTimer;
    NSMutableDictionary *_pendingReprovisionRequests;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;


+(BOOL)hasMessageReceiverChildren;
+(id)logCategory;
-(id)init;
-(id)logIdentifier;
-(void)_handleReprovisionAccessory:(id)arg0 ;
-(void)_handleRequestSearchForAccessoriesNeedingReprovisioning:(id)arg0 ;
-(void)configure:(id)arg0 queue:(id)arg1 messageDispatcher:(id)arg2 ;
-(void)dealloc;
-(void)handleFoundAccessoryNeedingReprovisioning:(id)arg0 error:(id)arg1 ;
-(void)handleReprovionedAccessory:(id)arg0 identifier:(id)arg1 error:(id)arg2 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif