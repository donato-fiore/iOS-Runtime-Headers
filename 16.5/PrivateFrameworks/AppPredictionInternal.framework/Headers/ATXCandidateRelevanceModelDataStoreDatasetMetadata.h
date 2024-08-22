// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCANDIDATERELEVANCEMODELDATASTOREDATASETMETADATA_H
#define ATXCANDIDATERELEVANCEMODELDATASTOREDATASETMETADATA_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface ATXCandidateRelevanceModelDataStoreDatasetMetadata : NSObject

@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSUInteger numberOfDaysWithPositiveSamples; // ivar: _numberOfDaysWithPositiveSamples
@property (readonly, nonatomic) NSUInteger numberOfDaysWithSamples; // ivar: _numberOfDaysWithSamples
@property (readonly, nonatomic) NSUInteger numberOfPositiveSamples; // ivar: _numberOfPositiveSamples
@property (readonly, nonatomic) NSUInteger numberOfSamples; // ivar: _numberOfSamples
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


+(id)datasetMetadataForDataPoints:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXCandidateRelevanceModelDataStoreDatasetMetadata:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)description;
-(id)initWithNumberOfPositiveSamples:(NSUInteger)arg0 numberOfSamples:(NSUInteger)arg1 numberOfDaysWithPositiveSamples:(NSUInteger)arg2 numberOfDaysWithSamples:(NSUInteger)arg3 startDate:(id)arg4 endDate:(id)arg5 ;


@end


#endif