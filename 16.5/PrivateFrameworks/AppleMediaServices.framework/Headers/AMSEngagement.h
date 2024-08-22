// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSENGAGEMENT_H
#define AMSENGAGEMENT_H

@class NSString, NSMapTable, NSMutableSet;
@protocol AMSBagConsumer, OS_dispatch_queue, AMSBagProtocol;

#import <Foundation/Foundation.h>

#import "AMSEngagementConnection.h"

@interface AMSEngagement : NSObject <AMSBagConsumer>

 {
    NSObject<OS_dispatch_queue> *_callbackQueue;
}


@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, nonatomic) AMSEngagementConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMapTable *observerInfo; // ivar: _observerInfo
@property (retain, nonatomic) NSMutableSet *runningPromises; // ivar: _runningPromises
@property (readonly) Class superclass;


+(id)_engagementQueue;
+(id)_notifyQueue;
+(id)createBagForSubProfile;
+(id)notificationCenter;
-(id)_createCombinedLogKey;
-(id)_parseActions:(id)arg0 ;
-(id)contentInfoForApp:(id)arg0 cacheKey:(id)arg1 version:(id)arg2 ;
-(id)enqueueData:(id)arg0 ;
-(id)enqueueEvent:(id)arg0 ;
-(id)enqueueMessageEvent:(id)arg0 ;
-(id)init;
-(id)initWithBag:(id)arg0 ;
-(id)sync;
-(id)syncDestinations:(id)arg0 ;
-(id)syncMetricsIdentifiers;
-(id)treatmentStoreService;
-(void)_failAllRunningPromisesWithError:(id)arg0 ;
-(void)_handleServiceResponse:(id)arg0 ;
-(void)_manageRunningPromise:(id)arg0 ;
-(void)_observeNotifications;
-(void)_pushEventReceieved:(id)arg0 ;
-(void)_removeRunningPromise:(id)arg0 ;
-(void)_scheduleSyncIfNeeded:(id)arg0 ;
-(void)addObserver:(id)arg0 placement:(id)arg1 serviceType:(id)arg2 ;
-(void)addObserver:(id)arg0 placement:(id)arg1 serviceType:(id)arg2 queue:(id)arg3 ;
-(void)dealloc;
-(void)handleDialogResult:(id)arg0 ;
-(void)handlePushEvent:(id)arg0 ;
-(void)removeObserver:(id)arg0 placement:(id)arg1 serviceType:(id)arg2 ;


@end


#endif