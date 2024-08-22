// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCANDIDATERELEVANCEMODELDATASTOREDATASETMETADATATRACKER_H
#define ATXCANDIDATERELEVANCEMODELDATASTOREDATASETMETADATATRACKER_H

@class NSMutableSet, NSDate;

#import <Foundation/Foundation.h>


@interface ATXCandidateRelevanceModelDataStoreDatasetMetadataTracker : NSObject {
    NSUInteger _numberOfPositiveSamples;
    NSMutableSet *_seenDatesWithPositiveSamples;
    NSMutableSet *_seenDatesWithSamples;
    NSUInteger _numberOfSamples;
    NSDate *_startDate;
    NSDate *_endDate;
}




+(id)yearMonthDayComponentsForDate:(id)arg0 ;
-(id)currentMetadata;
-(id)init;
-(void)observeDataPoint:(id)arg0 ;


@end


#endif