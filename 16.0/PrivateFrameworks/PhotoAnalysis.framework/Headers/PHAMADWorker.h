// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHAMADWORKER_H
#define PHAMADWORKER_H



#import "PHAWorker.h"

@interface PHAMADWorker : PHAWorker {
    os_unfair_lock_s _lock;
    BOOL _turboProcessingEnabled;
}




+(BOOL)mediaanalysisdProcessingEnabled;
+(NSInteger)applicationDataFolderIdentifier;
+(short)workerType;
-(BOOL)hasAdditionalJobsForScenario:(NSUInteger)arg0 requestReason:(NSUInteger)arg1 ;
-(BOOL)startAnalysisJob:(id)arg0 error:(*id)arg1 ;
-(BOOL)stopAnalysisJob:(id)arg0 error:(*id)arg1 ;
-(id)initWithPhotoAnalysisManager:(id)arg0 ;
-(id)nextAdditionalJobWithScenario:(NSUInteger)arg0 requestReason:(NSUInteger)arg1 ;
-(id)statusAsDictionary;


@end


#endif