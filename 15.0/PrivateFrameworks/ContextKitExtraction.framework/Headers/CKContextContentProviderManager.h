// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCONTEXTCONTENTPROVIDERMANAGER_H
#define CKCONTEXTCONTENTPROVIDERMANAGER_H

@class NSHashTable, NSMutableArray, NSString;
@protocol NSUserActivityObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CKContextContentProviderManager : NSObject <NSUserActivityObserver>

 {
    NSHashTable *_providers;
    NSHashTable *_providersStrong;
    NSObject<OS_dispatch_queue> *_activityReportingQueue;
    NSMutableArray *_userActivitiesQueuedForReporting;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isSafariContentProvider;
+(BOOL)isSpringBoard;
+(NSUInteger)optionsForControlCode:(unsigned char)arg0 ;
+(id)sharedManager;
+(unsigned char)controlCodeForNonce:(NSUInteger)arg0 ;
+(void)_observeApplicationStateNotifications;
-(BOOL)_hasForegroundActiveContent;
-(BOOL)_hasQueuedForReportingActivity:(id)arg0 ;
-(BOOL)_isActivityReportingAllowedForCurrentBundleIdentifier:(id)arg0 ;
-(BOOL)_isDonationAllowedWithControlCode:(unsigned char)arg0 ;
-(NSUInteger)providerCount;
-(id)_formContextUserActivityFromUserActivity:(id)arg0 ;
-(id)init;
-(void)_dequeueActivityForReporting:(id)arg0 ;
-(void)_loadContextKitIfNecessaryWithExecutor:(id)arg0 ;
-(void)_prepareAndDonateUserActivity:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)_prepareDonationWithNonce:(NSUInteger)arg0 options:(NSUInteger)arg1 andReply:(id)arg2 ;
-(void)_queueActivityForReporting:(id)arg0 ;
-(void)addProvider:(id)arg0 ;
-(void)addProviderUnretained:(id)arg0 ;
-(void)removeProvider:(id)arg0 ;
-(void)scheduleUserActivityRecordingWithUserActivity:(id)arg0 ;
-(void)userActivityDidBecomeCurrent:(id)arg0 current:(BOOL)arg1 ;
-(void)userActivityWasCreated:(id)arg0 ;
-(void)userActivityWasInvalidated:(id)arg0 ;


@end


#endif