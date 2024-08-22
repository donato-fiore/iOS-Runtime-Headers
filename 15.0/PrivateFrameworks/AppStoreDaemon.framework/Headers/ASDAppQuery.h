// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
@property (readonly) Class superclass;


+(id)_defaultExecutor;
+(id)_newProgressForApp:(id)arg0 fromRemoteProgress:(id)arg1 usingServiceBroker:(id)arg2 ;
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
+(id)queryWithPredicate:(id)arg0 ;
+(id)queryWithPredicate:(id)arg0 onPairedDevice:(id)arg1 ;
+(void)anyWithPredicate:(id)arg0 withResultHandler:(id)arg1 ;
-(id)_removeCachedResultsForBundleIDs:(id)arg0 ;
-(id)_replaceCachedResultsWithResults:(id)arg0 ;
-(id)init;
-(id)initWithPredicate:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 onPairedDevice:(id)arg1 ;
-(id)initWithPredicate:(id)arg0 queryExecutor:(id)arg1 onPairedDevice:(id)arg2 serviceBroker:(id)arg3 notificationCenter:(id)arg4 ;
-(id)initWithPredicate:(id)arg0 queryExecutor:(id)arg1 serviceBroker:(id)arg2 notificationCenter:(id)arg3 ;
-(void)_debugReceivedApps:(id)arg0 ;
-(void)_handleAppsRemovedWithBundleIDs:(id)arg0 ;
-(void)_handleAppsReplacedWithResults:(id)arg0 ;
-(void)_handleAppsUpdatedWithResults:(id)arg0 ;
-(void)_handleBrokerConnectionNotification:(id)arg0 ;
-(void)_handleNotificationErrorWithUserInfo:(id)arg0 ;
-(void)_handleNotificationRefreshWithUserInfo:(id)arg0 ;
-(void)_handleNotificationRegisteredWithUserInfo:(id)arg0 ;
-(void)_handleNotificationUnregisteredWithUserInfo:(id)arg0 ;
-(void)_sendResultsChangedWithResults:(id)arg0 ;
-(void)_unitTest_setHasRunOnce:(BOOL)arg0 ;
-(void)_updateCachedResultsWithResults:(id)arg0 ;
-(void)dealloc;
-(void)executeQueryWithResultHandler:(id)arg0 ;
-(void)notificationCenter:(id)arg0 receivedNotifications:(id)arg1 ;
-(void)notificationCenter:(id)arg0 receivedProgress:(id)arg1 ;


@end


#endif