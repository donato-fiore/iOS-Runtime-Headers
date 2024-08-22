// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMESSAGEHANDLERQUEUEDMESSAGE_H
#define HMDMESSAGEHANDLERQUEUEDMESSAGE_H

@class HMFObject, NSString, NSUUID, HMFMessage, HMFTimer;
@protocol HMFTimerDelegate, HMDMessageHandlerQueuedMessageDelegate;



@interface HMDMessageHandlerQueuedMessage : HMFObject <HMFTimerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDMessageHandlerQueuedMessageDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) HMFMessage *message; // ivar: _message
@property (readonly, copy) NSString *name;
@property (readonly) Class superclass;
@property (readonly) HMFTimer *timer; // ivar: _timer


+(id)logCategory;
-(id)attributeDescriptions;
-(id)initWithMessage:(id)arg0 ;
-(id)initWithMessage:(id)arg0 timeInterval:(CGFloat)arg1 ;
-(id)logIdentifier;
-(id)privateDescription;
-(void)resumeTimer;
-(void)suspendTimer;
-(void)timerDidFire:(id)arg0 ;


@end


#endif