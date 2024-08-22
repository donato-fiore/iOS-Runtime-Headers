// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHRAFIBBURDENANALYSISRESULT_H
#define HKHRAFIBBURDENANALYSISRESULT_H

@class NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKHRAFibBurdenAnalysisResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSNumber *burdenPercentage; // ivar: _burdenPercentage
@property (nonatomic) BOOL burdenPercentageWasClampedToLowerBound; // ivar: _burdenPercentageWasClampedToLowerBound
@property (readonly, nonatomic) NSInteger unavailabilityReason; // ivar: _unavailabilityReason


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithBurdenPercentage:(id)arg0 burdenPercentageWasClampedToLowerBound:(BOOL)arg1 unavailabilityReason:(NSInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif