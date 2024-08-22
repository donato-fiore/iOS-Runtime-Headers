// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSACTIVATIONEVENTNOTIFICATIONHANDLER_H
#define CSACTIVATIONEVENTNOTIFICATIONHANDLER_H

@class NSMapTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CSActivationEvent.h"

@interface CSActivationEventNotificationHandler : NSObject

@property (retain, nonatomic) NSMapTable *delegates; // ivar: _delegates
@property (retain, nonatomic) CSActivationEvent *pendingActivationEvent; // ivar: _pendingActivationEvent
@property (copy, nonatomic) id *pendingCompletion; // ivar: _pendingCompletion
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)sharedInstance;
-(BOOL)_hasPendingActivationForType:(NSUInteger)arg0 ;
-(BOOL)_isVoiceTriggerEvent:(id)arg0 ;
-(id)init;
-(void)_notifyActivationEvent:(id)arg0 completion:(id)arg1 ;
-(void)_startMonitoring;
-(void)_stopMonitoring;
-(void)dealloc;
-(void)notifyActivationEvent:(id)arg0 completion:(id)arg1 ;
-(void)setDelegate:(id)arg0 forType:(NSUInteger)arg1 ;
-(void)start;
-(void)stop;


@end


#endif