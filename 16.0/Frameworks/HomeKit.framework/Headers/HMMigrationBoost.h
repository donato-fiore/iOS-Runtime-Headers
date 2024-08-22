// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMMIGRATIONBOOST_H
#define HMMIGRATIONBOOST_H

@class HMFObject, HMFMessageDispatcher, NSUUID, NSNotificationCenter;
@protocol OS_dispatch_queue;



@interface HMMigrationBoost : HMFObject

@property (readonly, nonatomic) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSUUID *messageTarget; // ivar: _messageTarget
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)initWithMessageTarget:(id)arg0 notificationCenter:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3 ;
-(void)_handleDaemonDisconnect:(id)arg0 ;
-(void)startBoost;
-(void)stopBoost;


@end


#endif