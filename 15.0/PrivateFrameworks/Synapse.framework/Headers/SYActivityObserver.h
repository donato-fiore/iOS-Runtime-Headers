// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SYACTIVITYOBSERVER_H
#define SYACTIVITYOBSERVER_H

@class NSDate, NSString;
@protocol NSUserActivityObserver, SYNSUserActivityObserver_Extensions, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SYBacklinkMonitorClient.h"
#import "SYUserActivityIdentifierInfo.h"

@interface SYActivityObserver : NSObject <NSUserActivityObserver, SYNSUserActivityObserver_Extensions>



@property (retain, nonatomic) SYBacklinkMonitorClient *_client; // ivar: __client
@property (copy, nonatomic) id *_delayedEvaluationBlock; // ivar: __delayedEvaluationBlock
@property (retain, nonatomic) NSDate *_lastReportedActivityTime; // ivar: __lastReportedActivityTime
@property BOOL _lastReportedActivityWasLinkable; // ivar: __lastReportedActivityWasLinkable
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_observerQueue; // ivar: __observerQueue
@property (retain, nonatomic) SYUserActivityIdentifierInfo *_pendingActivityInfo; // ivar: __pendingActivityInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_appIsActive;
+(id)sharedInstance;
+(void)loadSynapseObserver;
-(id)_defaultActivityObserverContext;
-(id)init;
-(void)_discoverAndProcessActiveUserActivityWithContext:(id)arg0 ;
-(void)_handleAppBecomeActive:(id)arg0 ;
-(void)_handleAppResignActive:(id)arg0 ;
-(void)_reportActiveUserActivityChangeIfNeeded:(id)arg0 context:(id)arg1 ;
-(void)dealloc;
-(void)q_processActiveUserActivity:(id)arg0 identifier:(id)arg1 linkable:(BOOL)arg2 context:(id)arg3 ;
-(void)registerForAppStateNotifications;
-(void)userActivityCanonicalURLWasChanged:(id)arg0 ;
-(void)userActivityDidBecomeCurrent:(id)arg0 current:(BOOL)arg1 ;
-(void)userActivityPersistentIdentifierWasChanged:(id)arg0 persistentIdentifier:(id)arg1 previousValue:(id)arg2 ;
-(void)userActivityTargetContentIdentifierWasChanged:(id)arg0 targetContentIdentifier:(id)arg1 previousValue:(id)arg2 ;
-(void)userActivityWebpageURLWasChanged:(id)arg0 webpageURL:(id)arg1 previousValue:(id)arg2 ;


@end


#endif