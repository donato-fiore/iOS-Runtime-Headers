// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDSOFTWAREUPDATESSTORE_H
#define ASDSOFTWAREUPDATESSTORE_H

@class NSXPCConnection, NSString;
@protocol NSXPCListenerDelegate, OS_dispatch_queue;


#import "ASDBaseClient.h"
#import "ASDPromise.h"

@interface ASDSoftwareUpdatesStore : ASDBaseClient <NSXPCListenerDelegate>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    BOOL _hasUpdatesEntitlement;
    int _storeChangedNotificationToken;
    ASDPromise *_getUpdatesPromise;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)interface;
+(id)registerBadgeCountNotificationBlock:(id)arg0 ;
-(BOOL)autoUpdateEnabled;
-(BOOL)confirmAgentRequestedUpdateAll;
-(BOOL)hasEntitlement;
-(id)init;
// -(void)_call:(id)arg0 run:(id)arg1 error:(unk)arg2  ;
-(void)_setupConnection;
-(void)clearExpiredUpdateHistoryWithCompletionBlock:(id)arg0 ;
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
-(void)removeUpdateBulletins;
-(void)setAutoUpdateEnabled:(BOOL)arg0 ;
-(void)showApplicationBadgeForPendingUpdates;
-(void)showApplicationUpdateBulletin;
-(void)updateAllWithCompletionBlock:(id)arg0 ;
-(void)updateAllWithJobResultsCompletionBlock:(id)arg0 ;
-(void)updateAllWithOrder:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif