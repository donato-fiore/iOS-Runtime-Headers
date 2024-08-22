// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXCANDIDATERELEVANCEMODELFEATURIZATIONMANAGER_H
#define ATXCANDIDATERELEVANCEMODELFEATURIZATIONMANAGER_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXCandidateRelevanceModelFeaturizationManager : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *featurizers; // ivar: _featurizers


+(BOOL)supportsSecureCoding;
+(id)denseLabelVectorFromDataPoints:(id)arg0 ;
+(id)labelsFromDataPoints:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXCandidateRelevanceModelFeaturizationManager:(id)arg0 ;
-(NSUInteger)numberOfInputDimensions;
-(id)featureNames;
-(id)featuresForContext:(id)arg0 candidate:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFeaturizers:(id)arg0 ;
-(id)initWithImmutableFeaturizers:(id)arg0 ;
-(id)sparseFeatureMatrixFromDataPoints:(id)arg0 ;
-(id)sparseFeatureVectorForContext:(id)arg0 candidate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif