// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDAPPQUERY_H
#define ASDAPPQUERY_H

@class NSMutableDictionary, NRDevice, NSString, NSPredicate;
@protocol ASDNotificationCenterNotificationObserver, ASDNotificationCenterProgressObserver, OS_dispatch_queue, ASDAppQueryResultsObserver;

#import <Foundation/Foundation.h>

#import "ASDNotificationCenter.h"
#import "ASDAppQueryExecutor.h"
#import "ASDServiceBroker.h"

@interface ASDAppQuery : NSObject <ASDNotificationCenterNotificationObserver, ASDNotificationCenterProgressObserver>

 {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _hasRunOnce;
    ASDNotificationCenter *_notificationCenter;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id<ASDAppQueryResultsObserver> *_observer;
    ASDAppQueryExecutor *_queryExecutor;
    NSMutableDictionary *_resultCache;
    ASDServiceBroker *_serviceBroker;
    NRDevice *_device;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) NSObject<ASDAppQueryResultsObserver> *observer;
@property (readonly) NSPredicate *predicate; // ivar: _predicate
@property (nonatomic) NSInteger queryOptions; // ivar: _queryOptions
@property (readonly) Class superclass;


+(id)queryDefaultPairedWatchForBetaApps;
+(id)queryForAlmondApps;
+(id)queryForAppClipWithStoreItemID:(NSInteger)arg0 ;
+(id)queryForBeagleApps;
+(id)queryForBetaApps;
+(id)queryForBetaAppsOnPairedDevice:(id)arg0 ;
+(id)queryForBetaAppsWithStoreItemIDs:(id)arg0 ;
+(id)queryForBundleAtPath:(id)arg0 ;
+(id)queryForBundleIDs:(id)arg0 ;
+(id)queryForStoreApps;
+(id)queryForStoreItemIDs:(id)arg0 ;
+(id)queryForSystemAppsOnPairedDevice:(id)arg0 ;
+(id)queryForUpdates;
+(id)queryWithPredicate:(id)arg0 ;
+(id)queryWithPredicate:(id)arg0 onPairedDevice:(id)arg1 ;
+(void)anyWithPredicate:(id)arg0 withResultHandler:(id)arg1 ;
-(id)init;
-(id)initWithPredicate:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 onPairedDevice:(id)arg1 ;
-(id)initWithPredicate:(id)arg0 queryExecutor:(id)arg1 serviceBroker:(id)arg2 notificationCenter:(id)arg3 ;
-(void)_handleBrokerConnectionNotification:(id)arg0 ;
-(void)_unitTest_setHasRunOnce:(BOOL)arg0 ;
-(void)dealloc;
-(void)executeQueryWithResultHandler:(id)arg0 ;
-(void)notificationCenter:(id)arg0 receivedNotifications:(id)arg1 ;
-(void)notificationCenter:(id)arg0 receivedProgress:(id)arg1 ;


@end


#endif