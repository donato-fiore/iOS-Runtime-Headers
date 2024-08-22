// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMCSTATISTICS_H
#define HKMCSTATISTICS_H

@class NSNumber, NSString;
@protocol HKRedactedDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HKMCStatistics : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSNumber *cycleLengthLowerPercentile; // ivar: _cycleLengthLowerPercentile
@property (copy, nonatomic) NSNumber *cycleLengthMedian; // ivar: _cycleLengthMedian
@property (readonly, copy, nonatomic) NSNumber *cycleLengthUpperPercentile; // ivar: _cycleLengthUpperPercentile
@property (readonly, copy, nonatomic) NSNumber *firstMenstruationStartDayIndex; // ivar: _firstMenstruationStartDayIndex
@property (readonly, copy) NSString *hk_redactedDescription;
@property (readonly, copy, nonatomic) NSNumber *lastMenstruationStartDayIndex; // ivar: _lastMenstruationStartDayIndex
@property (readonly, copy, nonatomic) NSNumber *menstruationLengthLowerPercentile; // ivar: _menstruationLengthLowerPercentile
@property (copy, nonatomic) NSNumber *menstruationLengthMedian; // ivar: _menstruationLengthMedian
@property (readonly, copy, nonatomic) NSNumber *menstruationLengthUpperPercentile; // ivar: _menstruationLengthUpperPercentile
@property (readonly, nonatomic) NSInteger numberOfCycles; // ivar: _numberOfCycles


+(BOOL)supportsSecureCoding;
+(id)_emptyStatistics;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNumberOfCycles:(NSInteger)arg0 firstMenstruationStartDayIndex:(id)arg1 lastMenstruationStartDayIndex:(id)arg2 cycleLengthMedian:(id)arg3 cycleLengthLowerPercentile:(id)arg4 cycleLengthUpperPercentile:(id)arg5 menstruationLengthMedian:(id)arg6 menstruationLengthLowerPercentile:(id)arg7 menstruationLengthUpperPercentile:(id)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif