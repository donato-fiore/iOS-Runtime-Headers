// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NMSNOTIFICATIONDISPATCHER_H
#define NMSNOTIFICATIONDISPATCHER_H

@class NSString;
@protocol OS_dispatch_queue, NMSNotificationDispatcherDelegate;

#import <Foundation/Foundation.h>


@interface NMSNotificationDispatcher : NSObject {
    int _localNotifyToken;
    int _remoteNotifyToken;
    NSString *_localDarwinNotificationName;
    NSString *_remoteDarwinNotificationName;
    NSInteger _waitingCount;
    BOOL _hasPendingUpdates;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) NSString *baseNotificationName; // ivar: _baseNotificationName
@property (weak, nonatomic) NSObject<NMSNotificationDispatcherDelegate> *delegate; // ivar: _delegate


-(id)initWithNotificationName:(id)arg0 ;
-(void)_handleLocalNotificationIgnoringSenderPID:(BOOL)arg0 ;
-(void)_handleRemoteNotification;
-(void)_postLocalDarwinNotification;
-(void)beginWaitingForUpdates;
-(void)dealloc;
-(void)endWaitingForUpdates;
-(void)scheduleLocalDarwinNotification;


@end


#endif