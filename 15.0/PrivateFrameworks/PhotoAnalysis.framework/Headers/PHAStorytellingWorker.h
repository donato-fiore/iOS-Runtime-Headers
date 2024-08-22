// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASTORYTELLINGWORKER_H
#define PHASTORYTELLINGWORKER_H

@class PGManager, NSMutableSet, NSString;
@protocol PHAStorytellingOnDemandTaskHandlerDelegate, PHAClientDispatcher, PHATask, OS_os_log;


#import "PHAWorker.h"
#import "PHAStorytellingClientRequestHandler.h"
#import "PHAStorytellingOnDemandTaskHandler.h"

@interface PHAStorytellingWorker : PHAWorker <PHAStorytellingOnDemandTaskHandlerDelegate, PHAClientDispatcher>

 {
    PHAStorytellingClientRequestHandler *_graphClientHandler;
    PHAStorytellingOnDemandTaskHandler *_storytellingOnDemandTaskHandler;
    PGManager *_graphManager;
    id<PHATask> *_taskToRun;
    NSMutableSet *_taskTracker;
    NSObject<OS_os_log> *_loggingConnection;
    NSUInteger _state;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)clientQueryHandlerClass;
+(Class)onDemandTaskHandlerClass;
+(NSInteger)applicationDataFolderIdentifier;
+(short)workerType;
-(BOOL)_shouldRunTaskWithName:(id)arg0 period:(CGFloat)arg1 ;
-(BOOL)allowsForegroundTasks;
-(BOOL)hasAdditionalJobsForScenario:(NSUInteger)arg0 requestReason:(NSUInteger)arg1 ;
-(BOOL)isQuiescent;
-(BOOL)shouldAllowBackgroundActivity;
-(NSUInteger)workerStateForScenario:(NSUInteger)arg0 ;
-(id)initWithPhotoAnalysisManager:(id)arg0 dataLoader:(id)arg1 ;
-(id)loggingConnection;
-(id)nextAdditionalJobWithScenario:(NSUInteger)arg0 requestReason:(NSUInteger)arg1 ;
-(id)statusAsDictionary;
-(id)targetForInvocation:(id)arg0 shouldBackgroundActivities:(*BOOL)arg1 ;
-(id)tasksForScenario:(NSUInteger)arg0 ;
-(void)cooldown;
-(void)onDemandTaskHandlerDidFinishOperation:(id)arg0 ;
-(void)onDemandTaskHandlerStartingOperation:(id)arg0 ;
-(void)photoLibraryDidChange:(id)arg0 ;
-(void)shutdown;
-(void)startListeningToLibraryChanges;
-(void)stopListeningToLibraryChanges;
-(void)updateState:(NSUInteger)arg0 ;
-(void)warmupWithProgressBlock:(id)arg0 ;


@end


#endif