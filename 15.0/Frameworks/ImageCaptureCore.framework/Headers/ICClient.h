// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICCLIENT_H
#define ICCLIENT_H

@class NSXPCConnection, NSMutableArray;

#import <Foundation/Foundation.h>


@interface ICClient : NSObject {
    os_unfair_lock_s _resourceLock;
}


@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property BOOL forwardPTPEvents; // ivar: _forwardPTPEvents
@property (readonly) NSMutableArray *notifications; // ivar: _notifications
@property NSUInteger objectHandle; // ivar: _objectHandle
@property BOOL openSession; // ivar: _openSession
@property (readonly) int pid;


-(BOOL)interestedInNotification:(id)arg0 ;
-(id)initWithConnection:(id)arg0 ;
-(void)addNotifications:(id)arg0 ;
-(void)dealloc;
-(void)lock;
-(void)remNotifications:(id)arg0 ;
-(void)unlock;


@end


#endif