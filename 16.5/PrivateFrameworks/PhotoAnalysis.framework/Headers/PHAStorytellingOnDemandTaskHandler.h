// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASTORYTELLINGONDEMANDTASKHANDLER_H
#define PHASTORYTELLINGONDEMANDTASKHANDLER_H

@class PGManager, PHPhotoLibrary, NSMutableArray, PGProgressCallChecker, NSString, MARootProgressReporter;
@protocol PHAServiceOperationHandling, OS_dispatch_queue, OS_os_log, PHAStorytellingOnDemandTaskHandlerDelegate, PHAJobTimeHandlerProtocol;

#import <Foundation/Foundation.h>


@interface PHAStorytellingOnDemandTaskHandler : NSObject <PHAServiceOperationHandling>

 {
    PGManager *_graphManager;
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_queue> *_executionQueue;
    NSMutableArray *_operationsToRun;
    PGProgressCallChecker *_progressCallChecker;
    BOOL _isShutdown;
    os_unfair_lock_s _lock;
    NSObject<OS_os_log> *_loggingConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PHAStorytellingOnDemandTaskHandlerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isQuiescent;
@property (readonly, weak, nonatomic) NSObject<PHAJobTimeHandlerProtocol> *jobTimeHandler; // ivar: _jobTimeHandler
@property (readonly, nonatomic) MARootProgressReporter *onDemandTaskProgressReporter; // ivar: _onDemandTaskProgressReporter
@property (readonly) Class superclass;


-(BOOL)hasRemainingOperations;
-(BOOL)validateOperation:(id)arg0 forConnection:(id)arg1 ;
-(id)initWithGraphManager:(id)arg0 jobTimeHandler:(id)arg1 ;
-(id)nextOperation;
-(id)stringForQoS:(unsigned int)arg0 ;
-(void)cacheCPAnalyticsPropertiesWithContext:(id)arg0 reply:(id)arg1 ;
-(void)dequeueOperationsIfNeeded;
-(void)forceCancellationIfShutdown;
-(void)generateMemoriesWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)generateSuggestionsWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)handleOperation:(id)arg0 ;
-(void)rebuildGraphWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)reportMetricsWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestAssetRevGeocodingForAssetLocalIdentifiers:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestAssetRevGeocodingWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestContactClassificationWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestEnrichmentWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestGenerateQuestionsWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestHighlightCollectionEnrichmentWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestHighlightEnrichmentWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestOnDemandTasksWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)requestRevGeocodingSyndicationLibraryWithContext:(id)arg0 reply:(id)arg1 ;
-(void)requestSyndicationProcessingWithOptions:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)shutdown;


@end


#endif