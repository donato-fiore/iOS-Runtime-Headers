// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHAWORKER_H
#define PHAWORKER_H

@class NSString, NSURL, PHPhotoLibrary;
@protocol PHAWorkerConfiguration, PHAServiceOperationHandling, PHAJobTimeHandlerProtocol, OS_dispatch_queue, OS_os_log;

#import <Foundation/Foundation.h>

#import "PHAManager.h"
#import "PHAServiceCancelableOperation.h"

@interface PHAWorker : NSObject <PHAWorkerConfiguration, PHAServiceOperationHandling, PHAJobTimeHandlerProtocol>

 {
    PHAManager *_photoAnalysisManager;
    NSObject<OS_dispatch_queue> *_userInitiatedRequestQueue;
    BOOL _shutdownHasBeenCalled;
}


@property (retain) PHAServiceCancelableOperation *currentOperation; // ivar: _currentOperation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isEnabled;
@property (readonly) NSObject<OS_os_log> *loggingConnection; // ivar: _loggingConnection
@property (readonly) NSURL *persistentStorageDirectoryURL;
@property (readonly) PHAManager *photoAnalysisManager;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (readonly, getter=isQuiescent) BOOL quiescent;
@property (readonly) Class superclass;
@property (nonatomic, getter=isWarmedUp) BOOL warmedUp; // ivar: _warmedUp


+(BOOL)persistsState;
+(BOOL)runsExclusively;
+(NSInteger)applicationDataFolderIdentifier;
+(id)persistentStorageDirectoryURLForPhotoLibrary:(id)arg0 ;
+(short)workerType;
+(void)configureXPCConnection:(id)arg0 ;
-(BOOL)canRunWhenGraphIsLoaded;
-(BOOL)completedJobTodayForKey:(id)arg0 ;
-(BOOL)didExceedTimeInterval:(CGFloat)arg0 forKey:(id)arg1 ;
-(BOOL)hasAdditionalJobsForScenario:(NSUInteger)arg0 requestReason:(NSUInteger)arg1 ;
-(BOOL)startAnalysisJob:(id)arg0 error:(*id)arg1 ;
-(BOOL)stopAnalysisJob:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateOperation:(id)arg0 forConnection:(id)arg1 ;
-(NSUInteger)versionForTaskName:(id)arg0 ;
-(id)init;
-(id)initWithPhotoAnalysisManager:(id)arg0 ;
-(id)libraryScopedWorkerPreferences;
-(id)libraryScopedWorkerPreferencesURL;
-(id)nextAdditionalJobWithScenario:(NSUInteger)arg0 requestReason:(NSUInteger)arg1 ;
-(id)statusAsDictionary;
-(void)assertUserInitiatedRequestQueue;
-(void)cooldown;
-(void)dispatchAsyncToUserInitiatedRequestQueue:(id)arg0 ;
-(void)dispatchSyncToUserInitiatedRequestQueue:(id)arg0 ;
-(void)handleOperation:(id)arg0 ;
-(void)pingWorkerWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)setLastCompletedDate:(id)arg0 andVersion:(NSUInteger)arg1 forTaskName:(id)arg2 ;
-(void)setLibraryScopedWorkerPreferencesValue:(id)arg0 forKey:(id)arg1 ;
-(void)shutdown;
-(void)startup;
-(void)updateLibraryScopedWorkerPreferencesWithEntriesFromDictionary:(id)arg0 keysToRemove:(id)arg1 ;
-(void)warmupWithProgressBlock:(id)arg0 ;


@end


#endif