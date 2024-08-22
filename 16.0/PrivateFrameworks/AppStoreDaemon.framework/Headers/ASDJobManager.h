// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDJOBMANAGER_H
#define ASDJOBMANAGER_H

@class NSXPCConnection, NSArray, NSHashTable, NSMutableSet, NSString;
@protocol ASDJobManagerClient, LSApplicationWorkspaceObserverProtocol, NSXPCListenerDelegate, OS_dispatch_queue;


#import "ASDBaseClient.h"
#import "ASDJobManagerOptions.h"

@interface ASDJobManager : ASDBaseClient <ASDJobManagerClient, LSApplicationWorkspaceObserverProtocol, NSXPCListenerDelegate>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSXPCConnection *_connection;
    NSArray *_jobs;
    int _launchNotificationToken;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observers;
    ASDJobManagerOptions *_options;
    NSMutableSet *_removedJobs;
    BOOL _useLaunchServicesProgress;
    NSObject<OS_dispatch_queue> *_xpcQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithOptions:(id)arg0 ;
-(void)addJobObserver:(id)arg0 ;
-(void)applicationInstallsDidChange:(id)arg0 ;
-(void)cancelJobsWithIDs:(id)arg0 completionBlock:(id)arg1 ;
-(void)dealloc;
-(void)didChangeJobs:(id)arg0 ;
-(void)didCompleteJobs:(id)arg0 finalPhases:(id)arg1 ;
-(void)didUpdateProgress:(id)arg0 ;
-(void)didUpdateStates:(id)arg0 ;
-(void)finishJobs:(id)arg0 ;
-(void)getJobsUsingBlock:(id)arg0 ;
-(void)getJobsWithIDs:(id)arg0 usingBlock:(id)arg1 ;
-(void)invalidate;
-(void)pauseJobsWithIDs:(id)arg0 completionBlock:(id)arg1 ;
-(void)removeJobObserver:(id)arg0 ;
-(void)resumeJobsWithIDs:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif