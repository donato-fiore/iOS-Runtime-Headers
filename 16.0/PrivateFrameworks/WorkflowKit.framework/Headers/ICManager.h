// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICMANAGER_H
#define ICMANAGER_H

@class NSDistributedNotificationCenter, NSLock, NSMutableArray;
@protocol WFApplicationStateObserver;

#import <Foundation/Foundation.h>

#import "ICScheme.h"

@interface ICManager : NSObject <WFApplicationStateObserver>



@property (nonatomic) BOOL allowsOpeningFromBackground; // ivar: _allowsOpeningFromBackground
@property (retain, nonatomic) ICScheme *callbackScheme; // ivar: _callbackScheme
@property (nonatomic) BOOL enteringForeground; // ivar: _enteringForeground
@property (retain, nonatomic) NSDistributedNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (retain, nonatomic) NSLock *queueLock; // ivar: _queueLock
@property (retain, nonatomic) NSMutableArray *queuedRequests; // ivar: _queuedRequests
@property (nonatomic) BOOL resignedActiveWhileOpeningURL; // ivar: _resignedActiveWhileOpeningURL


+(id)sharedManager;
-(BOOL)handleIncomingRequest:(id)arg0 ;
-(BOOL)handleOpenURL:(id)arg0 fromSourceApplication:(id)arg1 errorHandler:(id)arg2 ;
// -(BOOL)handleOpenURL:(id)arg0 fromSourceApplication:(id)arg1 errorHandler:(id)arg2 postNotification:(unk)arg3  ;
-(id)init;
-(id)popQueuedRequest;
-(void)_performRequest:(id)arg0 ;
-(void)applicationContext:(id)arg0 applicationStateDidChange:(NSInteger)arg1 ;
-(void)dealloc;
-(void)handleOpenURLRequestNotification:(id)arg0 ;
-(void)performQueuedRequestIfApplicable;
-(void)performRequest:(id)arg0 ;
-(void)queueRequest:(id)arg0 ;
// -(void)registerHandler:(id)arg0 forIncomingRequestsWithAction:(unk)arg1 legacyAction:(id)arg2 scheme:(id)arg3  ;
// -(void)registerHandler:(id)arg0 forIncomingRequestsWithAction:(unk)arg1 scheme:(id)arg2  ;
-(void)removeHandlerForIncomingRequestsWithAction:(id)arg0 scheme:(id)arg1 ;


@end


#endif