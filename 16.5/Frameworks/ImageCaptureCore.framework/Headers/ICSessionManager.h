// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSESSIONMANAGER_H
#define ICSESSIONMANAGER_H

@class NSMutableArray, NSArray;
@protocol ICSessionManagerProtocol;

#import <Foundation/Foundation.h>


@interface ICSessionManager : NSObject {
    BOOL _sessionConnectionAdded;
    NSMutableArray *_sessions;
    os_unfair_lock_s _sessionsLock;
}


@property (readonly, nonatomic) NSArray *connections;
@property (nonatomic) NSObject<ICSessionManagerProtocol> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSUInteger sessionCount; // ivar: _sessionCount
@property (readonly, nonatomic) NSArray *sessions;


-(BOOL)createSessionWithConnection:(id)arg0 ;
-(NSUInteger)currentSessionCount;
-(NSUInteger)removeSessionWithConnection:(id)arg0 ;
-(NSUInteger)removeSessionsWithProcessIdentifier:(id)arg0 ;
-(id)connectionsMonitoringNotification:(id)arg0 ;
-(id)connectionsMonitoringObjectID:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)sessionWithConnection:(id)arg0 ;
-(void)addNotifications:(id)arg0 toSessionWithConnection:(id)arg1 ;
-(void)dealloc;
-(void)remNotifications:(id)arg0 fromSessionWithConnection:(id)arg1 ;
-(void)removeAllSessions;


@end


#endif