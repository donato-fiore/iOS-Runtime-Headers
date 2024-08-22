// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGCLIPTRENDSCONFIGURATION_H
#define PGCLIPTRENDSCONFIGURATION_H

@class NSDictionary, NSString, NSArray, NSNumber;
@protocol PGTrendsConfigurationProtocol;


#import "PGConfiguration.h"

@interface PGCLIPTrendsConfiguration : PGConfiguration <PGTrendsConfigurationProtocol>



@property (readonly, nonatomic) NSDictionary *cosineSimilarityThresholdByVersion; // ivar: _cosineSimilarityThresholdByVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *featureLabel; // ivar: _featureLabel
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *negativeScenes; // ivar: _negativeScenes
@property (readonly, nonatomic) NSArray *positiveQueries; // ivar: _positiveQueries
@property (readonly, nonatomic) NSArray *positivesScenes; // ivar: _positivesScenes
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSNumber *useAveragedEmbeddingAsNumber; // ivar: _useAveragedEmbeddingAsNumber
@property (readonly, nonatomic) NSArray *validTrendTypes; // ivar: _validTrendTypes




@end


#endif