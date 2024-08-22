// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAUDIOANALYSISEVENTSUBSCRIBER_H
#define HMDAUDIOANALYSISEVENTSUBSCRIBER_H

@class NSString, NSUUID;
@protocol HMFLogging, HMFMessageReceiver, HMDAudioAnalysisEventSubscriberContext, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HMDAudioAnalysisEventSubscriber : NSObject <HMFLogging, HMFMessageReceiver>



@property (readonly) NSObject<HMDAudioAnalysisEventSubscriberContext> *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)shouldPublishEvent:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)logIdentifier;
-(id)mediaSystemLastKnownEventKeyForAccessoryUUID:(id)arg0 pairedAccessoryUUID:(id)arg1 reason:(NSUInteger)arg2 ;
-(id)stereoPairedCounterpartAccessory;
-(id)transformHMDBulletinToHMBulletin:(id)arg0 ;
-(void)_handleAudioAnalysisEventMessage:(id)arg0 ;
-(void)_postBulletinNotificationWithBulletin:(id)arg0 ;
-(void)_postOrUpdateNotificationWithBulletin:(id)arg0 ;
-(void)_postOrUpdateNotificationWithBulletin:(id)arg0 stereoPairedAccessory:(id)arg1 ;
-(void)_postUpdateEventRouterEventIfDifferent:(id)arg0 ;
-(void)configureWithContext:(id)arg0 ;
-(void)deregisterForMessages;
-(void)postNotificationForEvent:(id)arg0 ;
-(void)postOrUpdateNotificationWithBulletinIfneeded:(id)arg0 ;
-(void)registerForMessages;


@end


#endif