// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGMEMORYELECTOR_H
#define PGMEMORYELECTOR_H

@class PHPhotoLibrary, PHUserFeedbackCalculator, CLSCurationContext;
@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "PGCurationManager.h"
#import "PGRemoteConfiguration.h"

@interface PGMemoryElector : NSObject {
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_os_log> *_loggingConnection;
    PGCurationManager *_curationManager;
    PHUserFeedbackCalculator *_userFeedbackCalculator;
    CLSCurationContext *_curationContext;
    PGRemoteConfiguration *_remoteConfiguration;
}




+(NSInteger)compareMemoryCategoryForMemory:(id)arg0 toOtherMemory:(id)arg1 ;
-(BOOL)_shouldCheckForSuggestionCollisionsForTriggeredMemory:(id)arg0 ;
-(CGFloat)_contentScoreWeightForNewMemoryFocusWithCategory:(NSUInteger)arg0 ;
-(NSUInteger)targetNumberOfMemoriesFromConfigurator:(id)arg0 graph:(id)arg1 context:(id)arg2 ;
-(id)_requestedEnrichedMemoriesWithConfiguration:(id)arg0 graph:(id)arg1 ;
-(id)electAndEnrichSortedTriggeredMemories:(id)arg0 alreadyEnrichedMemories:(id)arg1 targetNumberOfMemories:(NSUInteger)arg2 configuration:(id)arg3 graph:(id)arg4 planner:(id)arg5 context:(id)arg6 progressReporter:(id)arg7 ;
-(id)filterAndSortTriggeredMemories:(id)arg0 withPlanner:(id)arg1 context:(id)arg2 configuration:(id)arg3 progressReporter:(id)arg4 ;
-(id)generateEnrichedMemoriesWithConfiguration:(id)arg0 graph:(id)arg1 plannerPastSource:(id)arg2 plannerFutureSource:(id)arg3 progressReporter:(id)arg4 ;
-(id)generateEnrichedMemoriesWithConfiguration:(id)arg0 graph:(id)arg1 progressReporter:(id)arg2 ;
-(id)initWithPhotoLibrary:(id)arg0 curationManager:(id)arg1 loggingConnection:(id)arg2 ;
-(id)initWithPhotoLibrary:(id)arg0 userFeedbackCalculator:(id)arg1 curationManager:(id)arg2 loggingConnection:(id)arg3 ;
-(void)persistEnrichedMemories:(id)arg0 pendingState:(unsigned short)arg1 graph:(id)arg2 progressReporter:(id)arg3 ;


@end


#endif