// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCFNOTIFICATIONOPERATORCOMPOSITION_H
#define PLCFNOTIFICATIONOPERATORCOMPOSITION_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLOperator.h"

@interface PLCFNotificationOperatorComposition : NSObject

@property BOOL isStateRequired; // ivar: _isStateRequired
@property BOOL listeningForNotifications; // ivar: _listeningForNotifications
@property (retain) NSString *notificationName; // ivar: _notificationName
@property (weak) PLOperator *operator; // ivar: _operator
@property (copy, nonatomic) id *operatorBlock; // ivar: _operatorBlock
@property int stateToken; // ivar: _stateToken
@property (retain) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(BOOL)listenForNotifications:(BOOL)arg0 ;
-(id)initWithOperator:(id)arg0 forNotification:(id)arg1 requireState:(BOOL)arg2 withBlock:(id)arg3 ;
-(id)initWithWorkQueue:(id)arg0 forNotification:(id)arg1 requireState:(BOOL)arg2 withBlock:(id)arg3 ;
-(void)dealloc;


@end


#endif