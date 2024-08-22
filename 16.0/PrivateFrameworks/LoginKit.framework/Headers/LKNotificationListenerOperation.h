// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LKNOTIFICATIONLISTENEROPERATION_H
#define LKNOTIFICATIONLISTENEROPERATION_H

@class NSOperation;



@interface LKNotificationListenerOperation : NSOperation

@property (copy, nonatomic) id *listenerStartedBlock; // ivar: _listenerStartedBlock
@property (copy, nonatomic) id *notificationListenerCompletionBlock; // ivar: _notificationListenerCompletionBlock
@property (nonatomic) NSUInteger notificationType; // ivar: _notificationType
@property (nonatomic) int notifyToken; // ivar: _notifyToken
@property (nonatomic) BOOL operationCancelled; // ivar: _operationCancelled
@property (nonatomic) BOOL operationExecuting; // ivar: _operationExecuting
@property (nonatomic) BOOL operationFinished; // ivar: _operationFinished
@property (nonatomic) BOOL operationReady; // ivar: _operationReady
@property (nonatomic) CGFloat timeOutPeriod; // ivar: _timeOutPeriod


-(BOOL)isCancelled;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)_errorForNotificationType:(NSUInteger)arg0 ;
-(id)_notificationForNotificationType:(NSUInteger)arg0 ;
-(id)initWithNotificationType:(NSUInteger)arg0 timeOutPeriod:(CGFloat)arg1 completionBlock:(id)arg2 ;
-(void)_endOperation;
-(void)cancel;
-(void)start;


@end


#endif