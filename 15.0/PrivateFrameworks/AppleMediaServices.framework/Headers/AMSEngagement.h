// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSENGAGEMENT_H
#define AMSENGAGEMENT_H

@class NSMapTable, NSMutableSet;

#import <Foundation/Foundation.h>

#import "AMSEngagementConnection.h"

@interface AMSEngagement : NSObject

@property (retain, nonatomic) AMSEngagementConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSMapTable *observerInfo; // ivar: _observerInfo
@property (retain, nonatomic) NSMutableSet *runningPromises; // ivar: _runningPromises


+(id)_engagementQueue;
+(id)_notifyQueue;
+(id)notificationCenter;
-(id)_createCombinedLogKey;
-(id)_parseActions:(id)arg0 ;
-(id)enqueueData:(id)arg0 ;
-(id)enqueueEvent:(id)arg0 ;
-(id)enqueueMessageEvent:(id)arg0 ;
-(id)init;
-(id)sync;
-(id)syncMetricsIdentifiers;
-(void)_failAllRunningPromisesWithError:(id)arg0 ;
-(void)_handleServiceResponse:(id)arg0 ;
-(void)_manageRunningPromise:(id)arg0 ;
-(void)_observeNotifications;
-(void)_pushEventReceieved:(id)arg0 ;
-(void)_removeRunningPromise:(id)arg0 ;
-(void)_scheduleSyncIfNeeded:(id)arg0 ;
-(void)addObserver:(id)arg0 placement:(id)arg1 serviceType:(id)arg2 ;
-(void)dealloc;
-(void)handleDialogResult:(id)arg0 ;
-(void)handlePushEvent:(id)arg0 ;
-(void)removeObserver:(id)arg0 placement:(id)arg1 serviceType:(id)arg2 ;


@end


#endif