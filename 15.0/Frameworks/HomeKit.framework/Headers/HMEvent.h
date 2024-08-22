// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMEVENT_H
#define HMEVENT_H

@class HMFUnfairLock, NSString, NSUUID;
@protocol NSSecureCoding, HMObjectMerge, HMFMessageReceiver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_HMContext.h"
#import "HMEventTrigger.h"

@interface HMEvent : NSObject <NSSecureCoding, HMObjectMerge, HMFMessageReceiver>

 {
    HMFUnfairLock *_lock;
}


@property (retain, nonatomic) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEndEvent) BOOL endEvent; // ivar: _endEvent
@property (weak, nonatomic) HMEventTrigger *eventTrigger; // ivar: _eventTrigger
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *triggerType; // ivar: _triggerType
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)isSupportedForHome:(id)arg0 ;
+(BOOL)sharedTriggerActivationSupportedForHome:(id)arg0 ;
+(BOOL)supportsSecureCoding;
-(BOOL)_mergeWithNewObject:(id)arg0 operations:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_serializeForAdd;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDict:(id)arg0 ;
-(void)__configureWithContext:(id)arg0 eventTrigger:(id)arg1 ;
-(void)_handleEventUpdatedNotification:(id)arg0 ;
-(void)_registerNotificationHandlers;
-(void)_unconfigure;
-(void)_unconfigureContext;
-(void)_updateTriggerType;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif