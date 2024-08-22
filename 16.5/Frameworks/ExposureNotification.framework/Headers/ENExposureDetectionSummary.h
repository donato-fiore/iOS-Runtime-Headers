// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENEXPOSUREDETECTIONSUMMARY_H
#define ENEXPOSUREDETECTIONSUMMARY_H

@class NSArray, NSDictionary;
@protocol CUXPCCodable;

#import <Foundation/Foundation.h>


@interface ENExposureDetectionSummary : NSObject <CUXPCCodable>



@property (copy, nonatomic) NSArray *attenuationDurations; // ivar: _attenuationDurations
@property (copy, nonatomic) NSArray *daySummaries; // ivar: _daySummaries
@property (nonatomic) NSInteger daysSinceLastExposure; // ivar: _daysSinceLastExposure
@property (nonatomic) NSUInteger matchedKeyCount; // ivar: _matchedKeyCount
@property (nonatomic) unsigned char maximumRiskScore; // ivar: _maximumRiskScore
@property (nonatomic) CGFloat maximumRiskScoreFullRange; // ivar: _maximumRiskScoreFullRange
@property (readonly, copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (nonatomic) CGFloat riskScoreSumFullRange; // ivar: _riskScoreSumFullRange


-(id)description;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithXPCObject:(id)arg0 ;


@end


#endif