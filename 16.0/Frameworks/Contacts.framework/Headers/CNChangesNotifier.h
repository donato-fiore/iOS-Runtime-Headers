// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCHANGESNOTIFIER_H
#define CNCHANGESNOTIFIER_H


#import <Foundation/Foundation.h>

#import "CNChangesNotifierProxy.h"

@interface CNChangesNotifier : NSObject

@property (retain, nonatomic) CNChangesNotifierProxy *notifierProxy; // ivar: _notifierProxy


+(id)sharedNotifier;
+(id)sharedNotifierWithNotificationWrapper:(id)arg0 schedulerProvider:(id)arg1 loggerProvider:(id)arg2 ;
+(void)flushSharedNotifier;
-(BOOL)forwardsSelfGeneratedDistributedSaveNotifications;
-(id)initWithNotificationWrapper:(id)arg0 schedulerProvider:(id)arg1 loggerProvider:(id)arg2 ;
-(void)dealloc;
-(void)didChangeMeContactSuccessfully:(BOOL)arg0 fromContactStore:(id)arg1 requestIdentifier:(id)arg2 ;
-(void)didSaveChangesSuccessfully:(BOOL)arg0 fromContactStore:(id)arg1 requestIdentifier:(id)arg2 ;
-(void)setExternalNotificationCoalescingDelay:(CGFloat)arg0 ;
-(void)setForwardsSelfGeneratedDistributedSaveNotifications:(BOOL)arg0 ;
-(void)waitForCurrentTasksToFinish;
-(void)willSaveChanges;


@end


#endif