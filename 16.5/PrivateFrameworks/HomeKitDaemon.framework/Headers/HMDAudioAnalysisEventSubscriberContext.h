// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAUDIOANALYSISEVENTSUBSCRIBERCONTEXT_H
#define HMDAUDIOANALYSISEVENTSUBSCRIBERCONTEXT_H

@class NSString, HMFMessageDispatcher, NSUUID;
@protocol HMDAudioAnalysisEventSubscriberContext, HMEEventForwarder, HMELastEventStoreReadHandle, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDAppleMediaAccessory.h"
#import "HMDBulletinBoardNotification.h"
#import "HMDBulletinBoard.h"
#import "HMDDevice.h"
#import "HMDHome.h"

@interface HMDAudioAnalysisEventSubscriberContext : NSObject <HMDAudioAnalysisEventSubscriberContext>



@property (readonly, weak) HMDAppleMediaAccessory *accessory; // ivar: _accessory
@property (readonly) HMDBulletinBoardNotification *audioAnalysisEventNotification;
@property (readonly) HMDBulletinBoard *bulletinBoard;
@property (readonly, getter=isCurrentAccessory) BOOL currentAccessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDDevice *device;
@property (readonly) HMFMessageDispatcher *dispatcher;
@property (readonly) BOOL dropInEnabled;
@property (readonly, weak) NSObject<HMEEventForwarder> *eventForwarder;
@property (readonly, weak) NSObject<HMELastEventStoreReadHandle> *eventStoreReadHandle;
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHome *home;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *roomName;
@property (readonly, copy) NSUUID *spiClientIdentifier;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uuid;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithAccessory:(id)arg0 queue:(id)arg1 ;
-(id)logIdentifier;
-(void)forwardEvent:(id)arg0 topic:(id)arg1 completion:(id)arg2 ;
-(void)submitLogEvent:(id)arg0 ;
-(void)submitLogEvent:(id)arg0 error:(id)arg1 ;


@end


#endif