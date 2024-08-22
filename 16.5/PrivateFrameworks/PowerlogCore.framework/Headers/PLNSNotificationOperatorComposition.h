// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLNSNOTIFICATIONOPERATORCOMPOSITION_H
#define PLNSNOTIFICATIONOPERATORCOMPOSITION_H

@class NSMutableArray, NSString, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLOperator.h"

@interface PLNSNotificationOperatorComposition : NSObject {
    os_unfair_lock_s _lock;
    NSMutableArray *_notificationObservers;
}


@property (readonly, copy) NSString *notificationName;
@property (readonly, copy) NSArray *notificationNames; // ivar: _notificationNames
@property (weak) PLOperator *operator; // ivar: _operator
@property (copy) id *operatorBlock; // ivar: _operatorBlock
@property (retain) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)initWithOperator:(id)arg0 forNotification:(id)arg1 withBlock:(id)arg2 ;
-(id)initWithOperator:(id)arg0 forNotifications:(id)arg1 withBlock:(id)arg2 ;
-(id)initWithWorkQueue:(id)arg0 forNotification:(id)arg1 withBlock:(id)arg2 ;
-(id)initWithWorkQueue:(id)arg0 forNotifications:(id)arg1 withBlock:(id)arg2 ;
-(void)dealloc;
-(void)listenForNotifications:(BOOL)arg0 ;
-(void)notification:(id)arg0 ;


@end


#endif