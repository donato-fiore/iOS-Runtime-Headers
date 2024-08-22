// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHRAFIBBURDENTIMEOFDAYHISTOGRAM_H
#define HKHRAFIBBURDENTIMEOFDAYHISTOGRAM_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKHRAFibBurdenAnalysisResult.h"

@interface HKHRAFibBurdenTimeOfDayHistogram : NSObject <NSSecureCoding>



@property (readonly, nonatomic) HKHRAFibBurdenAnalysisResult *eightAMToNoonBurden; // ivar: _eightAMToNoonBurden
@property (readonly, nonatomic) HKHRAFibBurdenAnalysisResult *eightPMToMidnightBurden; // ivar: _eightPMToMidnightBurden
@property (readonly, nonatomic) HKHRAFibBurdenAnalysisResult *fourAMtoEightAMBurden; // ivar: _fourAMtoEightAMBurden
@property (readonly, nonatomic) HKHRAFibBurdenAnalysisResult *fourPMToEightPMBurden; // ivar: _fourPMToEightPMBurden
@property (readonly, nonatomic) HKHRAFibBurdenAnalysisResult *midnightToFourAMBurden; // ivar: _midnightToFourAMBurden
@property (readonly, nonatomic) HKHRAFibBurdenAnalysisResult *noonToFourPMBurden; // ivar: _noonToFourPMBurden


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMidnightToFourAMBurden:(id)arg0 fourAMtoEightAMBurden:(id)arg1 eightAMToNoonBurden:(id)arg2 noonToFourPMBurden:(id)arg3 fourPMToEightPMBurden:(id)arg4 eightPMToMidnightBurden:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif