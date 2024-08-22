// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDSENDLATERUPDATECONTROLLER_H
#define EDSENDLATERUPDATECONTROLLER_H

@class NSString, NSDate, EFXPCAlarm;
@protocol EFLoggable, EDMessageChangeHookResponder, OS_dispatch_queue, EDSendLaterUpdateControllerAlarmDateProvider;

#import <Foundation/Foundation.h>

#import "EDMessagePersistence.h"
#import "EDOutgoingMessageRepository.h"
#import "EDQueryCreator.h"

@interface EDSendLaterUpdateController : NSObject <EFLoggable, EDMessageChangeHookResponder>

 {
    NSObject<OS_dispatch_queue> *_alarmQueue;
}


@property (readonly, nonatomic) NSObject<EDSendLaterUpdateControllerAlarmDateProvider> *alarmDateProvider; // ivar: _alarmDateProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<EDMessageChangeHookResponder> *hookResponder; // ivar: _hookResponder
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence; // ivar: _messagePersistence
@property (retain, nonatomic) NSDate *nextAlarmDate;
@property (readonly, nonatomic) EDOutgoingMessageRepository *outgoingRepository; // ivar: _outgoingRepository
@property (retain, nonatomic) EDQueryCreator *sendLaterQueryCreator; // ivar: _sendLaterQueryCreator
@property (readonly) Class superclass;
@property (retain, nonatomic) EFXPCAlarm *xpcAlarm; // ivar: _xpcAlarm


+(id)log;
-(id)initWithHookRegistry:(id)arg0 messagePersistence:(id)arg1 outgoingRepository:(id)arg2 alarmScheduler:(id)arg3 ;
-(void)_alarmFired;
-(void)_updateAlarmUpdatedMessages:(id)arg0 sendLaterDate:(id)arg1 ;
-(void)persistenceDidUpdateSendLaterDate:(id)arg0 messages:(id)arg1 generationWindow:(id)arg2 ;
-(void)resetSendLaterAlarmIfNeeded;


@end


#endif