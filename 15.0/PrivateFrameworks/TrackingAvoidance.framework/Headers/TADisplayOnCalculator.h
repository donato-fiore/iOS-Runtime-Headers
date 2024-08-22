// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TADISPLAYONCALCULATOR_H
#define TADISPLAYONCALCULATOR_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TADisplayOnCalculator : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat budgetRemaining; // ivar: _budgetRemaining
@property (readonly, nonatomic) NSDate *evaluatedUntil; // ivar: _evaluatedUntil
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime
@property (nonatomic) BOOL useBudget; // ivar: _useBudget


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)calculateDisplayOnWithEvents:(id)arg0 advertisements:(id)arg1 endDate:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartTime:(id)arg0 ;
-(id)initWithStartTime:(id)arg0 budget:(CGFloat)arg1 ;
-(void)completeDisplayOnWithEndDate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif