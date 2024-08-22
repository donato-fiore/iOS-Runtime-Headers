// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDUPDATESSERVICE_H
#define ASDUPDATESSERVICE_H

@class NSString;
@protocol ASDServiceProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ASDServiceBroker.h"

@interface ASDUpdatesService : NSObject <ASDServiceProvider>

 {
    ASDServiceBroker *_serviceBroker;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    BOOL _hasUpdatesEntitlement;
    int _storeChangedNotificationToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultService;
+(id)interface;
+(id)registerBadgeCountNotificationBlock:(id)arg0 ;
-(BOOL)autoUpdateEnabled;
-(BOOL)confirmAgentRequestedUpdateAll;
-(BOOL)hasEntitlement;
-(id)init;
-(id)reloadFromServer;
-(void)dealloc;
-(void)getManagedUpdatesWithCompletionBlock:(id)arg0 ;
-(void)getMetricsWithCompletionBlock:(id)arg0 ;
-(void)getUpdatesIncludingMetricsWithCompletionBlock:(id)arg0 ;
-(void)getUpdatesWithCompletionBlock:(id)arg0 ;
-(void)hideApplicationBadgeForPendingUpdates;
-(void)refreshUpdateCountWithCompletionBlock:(id)arg0 ;
-(void)refreshUpdatesWithCompletionBlock:(id)arg0 completionBlock:(id)arg1 ;
-(void)reloadForSettingsFromServerWithCompletionBlock:(id)arg0 ;
-(void)reloadFromServerInBackgroundWithCompletionBlock:(id)arg0 ;
-(void)reloadFromServerWithCompletionBlock:(id)arg0 ;
-(void)reloadManagedUpdatesWithCompletionBlock:(id)arg0 ;
-(void)setAutoUpdateEnabled:(BOOL)arg0 ;
-(void)shouldUseModernUpdatesWithCompletionBlock:(id)arg0 ;
-(void)showApplicationBadgeForPendingUpdates;
-(void)updateAllWithCompletionBlock:(id)arg0 ;
-(void)updateAllWithJobResultsCompletionBlock:(id)arg0 ;
-(void)updateAllWithOrder:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif