// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHRAFIBBURDENSEVENDAYANALYSISRESULTS_H
#define HKHRAFIBBURDENSEVENDAYANALYSISRESULTS_H

@class HKQuantitySample;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKHRAFibBurdenSevenDayAnalysisResults : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL onboardedWithinAnalysisInterval; // ivar: _onboardedWithinAnalysisInterval
@property (readonly, nonatomic) NSInteger result; // ivar: _result
@property (readonly, nonatomic) HKQuantitySample *sampleCreated; // ivar: _sampleCreated


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResult:(NSInteger)arg0 sample:(id)arg1 onboardedWithinAnalysisInterval:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif