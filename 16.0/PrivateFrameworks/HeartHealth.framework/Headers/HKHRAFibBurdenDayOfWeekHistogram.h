// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHRAFIBBURDENDAYOFWEEKHISTOGRAM_H
#define HKHRAFIBBURDENDAYOFWEEKHISTOGRAM_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKHRAFibBurdenAnalysisResult.h"

@interface HKHRAFibBurdenDayOfWeekHistogram : NSObject <NSSecureCoding>



@property (readonly, nonatomic) HKHRAFibBurdenAnalysisResult *fridayBurden; // ivar: _fridayBurden
@property (readonly, nonatomic) HKHRAFibBurdenAnalysisResult *mondayBurden; // ivar: _mondayBurden
@property (readonly, nonatomic) HKHRAFibBurdenAnalysisResult *saturdayBurden; // ivar: _saturdayBurden
@property (readonly, nonatomic) HKHRAFibBurdenAnalysisResult *sundayBurden; // ivar: _sundayBurden
@property (readonly, nonatomic) HKHRAFibBurdenAnalysisResult *thursdayBurden; // ivar: _thursdayBurden
@property (readonly, nonatomic) HKHRAFibBurdenAnalysisResult *tuesdayBurden; // ivar: _tuesdayBurden
@property (readonly, nonatomic) HKHRAFibBurdenAnalysisResult *wednesdayBurden; // ivar: _wednesdayBurden


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSundayBurden:(id)arg0 mondayBurden:(id)arg1 tuesdayBurden:(id)arg2 wednesdayBurden:(id)arg3 thursdayBurden:(id)arg4 fridayBurden:(id)arg5 saturdayBurden:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif