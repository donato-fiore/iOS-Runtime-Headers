// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALDARWINNOTIFICATIONLISTENER_H
#define CALDARWINNOTIFICATIONLISTENER_H

@class NSString;
@protocol CalActivatable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CalDarwinNotificationListener : NSObject <CalActivatable>



@property (readonly, nonatomic) id *callback; // ivar: _callback
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (nonatomic) BOOL listening; // ivar: _listening
@property (readonly, nonatomic) NSString *notificationName; // ivar: _notificationName
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(BOOL)_addObserver;
-(BOOL)_removeObserver;
-(id)description;
-(id)initWithNotificationName:(id)arg0 callback:(id)arg1 ;
// -(id)initWithNotificationName:(id)arg0 callback:(id)arg1 queue:(unk)arg2  ;
-(void)_notificationWithNameReceived:(id)arg0 ;
-(void)activate;
-(void)deactivate;
-(void)dealloc;


@end


#endif