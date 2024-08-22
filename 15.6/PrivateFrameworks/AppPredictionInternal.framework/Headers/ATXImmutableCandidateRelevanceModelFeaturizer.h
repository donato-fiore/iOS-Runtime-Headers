// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXIMMUTABLECANDIDATERELEVANCEMODELFEATURIZER_H
#define ATXIMMUTABLECANDIDATERELEVANCEMODELFEATURIZER_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXImmutableCandidateRelevanceModelFeaturizer : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *featureValueNames; // ivar: _featureValueNames


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXImmutableCandidateRelevanceModelFeaturizer:(id)arg0 ;
-(NSUInteger)dimensions;
-(id)featureVectorForContext:(id)arg0 candidate:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFeatureValueNames:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif