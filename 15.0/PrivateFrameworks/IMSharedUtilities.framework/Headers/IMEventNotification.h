// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMEVENTNOTIFICATION_H
#define IMEVENTNOTIFICATION_H

@class IMDoubleLinkedListNode;



@interface IMEventNotification : IMDoubleLinkedListNode

@property (copy) id *eventNotificationBlock; // ivar: _eventNotificationBlock
@property (copy) id *eventNotificationWithSenderBlock; // ivar: _eventNotificationWithSenderBlock
@property (weak) id *sender; // ivar: _sender
@property (weak) id *target; // ivar: _target


+(id)eventNotification:(id)arg0 ;
+(id)eventNotification:(id)arg0 eventNotificationBlock:(id)arg1 ;
+(id)eventNotification:(id)arg0 sender:(id)arg1 eventNotificationBlock:(id)arg2 ;
-(BOOL)invoke;
-(BOOL)wasCancelled;
-(void)cache;
-(void)cancel;


@end


#endif