// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ANALYTICSLAUNCHPAD_H
#define ANALYTICSLAUNCHPAD_H

@class NSString, NSMutableDictionary;
@protocol AnalyticsWorkspaceHealthDelegate, ConfigurableObjectProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AWDAgent.h"

@interface AnalyticsLaunchpad : NSObject <AnalyticsWorkspaceHealthDelegate, ConfigurableObjectProtocol>

 {
    NSObject<OS_dispatch_queue> *launch_queue;
    NSObject<OS_dispatch_queue> *flows_queue;
    NSObject<OS_dispatch_queue> *nets_queue;
    NSObject<OS_dispatch_queue> *nois_queue;
    NSObject<OS_dispatch_queue> *service_queue;
    AWDAgent *awd;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *launchParams; // ivar: _launchParams
@property (readonly) Class superclass;


+(BOOL)foundBreadcrumb:(id)arg0 ;
+(BOOL)foundDestroyPersistentStoreBreadcrumb;
+(BOOL)foundInitialWorkspaceSaveBreadcrumb;
+(BOOL)foundIntegrityCheckBreadcrumbAboveThreshold:(BOOL)arg0 ;
+(BOOL)launchHealthCheck:(id)arg0 ;
+(NSUInteger)integrityCheckBreadcrumbCount;
+(id)configureClass:(id)arg0 ;
+(id)sharedInstance;
+(id)symptomEvaluatorDatabaseContainerPath;
+(void)appendLaunchTime;
+(void)clearDestroyPersistentStoreBreadcrumb;
+(void)clearInitialWorkspaceSaveBreadcrumb;
+(void)clearIntegrityCheckBreadcrumb;
+(void)leaveBreadcrumbForDestroyPersistentStore;
+(void)leaveBreadcrumbForInitialWorkspaceSave;
+(void)leaveBreadcrumbForIntegrityCheck;
+(void)postLaunchIntervalMetricWithPreviousLaunchTime:(NSUInteger)arg0 ;
-(id)init;
-(int)configureInstance:(id)arg0 ;
-(void)_launchSequence:(id)arg0 ;
-(void)deleteDatabaseCompleted:(BOOL)arg0 error:(id)arg1 ;
-(void)destroyPersistentStoreCompleted:(BOOL)arg0 error:(id)arg1 ;
-(void)destroyPersistentStoreStarted;
-(void)integrityCheckCompleted:(BOOL)arg0 error:(id)arg1 ;
-(void)integrityCheckStarted;
-(void)launchSequence;


@end


#endif