// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAMENSTRUALALGORITHMSHEARTRATESTATISTICS_H
#define HAMENSTRUALALGORITHMSHEARTRATESTATISTICS_H

@class NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HAMenstrualAlgorithmsHeartRateStatistics : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSNumber *lowerPercentile; // ivar: _lowerPercentile
@property (nonatomic) NSInteger sampleCount; // ivar: _sampleCount


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif