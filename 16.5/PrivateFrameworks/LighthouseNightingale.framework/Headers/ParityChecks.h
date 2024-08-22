// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PARITYCHECKS_H
#define PARITYCHECKS_H


#import <Foundation/Foundation.h>


@interface ParityChecks : NSObject



+(BOOL)checkDaySummaryParityWithHKStore:(id)arg0 asOfJulianDay:(NSInteger)arg1 error:(*id)arg2 ;
+(BOOL)checkPredictionParityWithHKHealthStore:(id)arg0 withDayInputs:(id)arg1 asOfJulianDay:(NSInteger)arg2 error:(*id)arg3 ;


@end


#endif