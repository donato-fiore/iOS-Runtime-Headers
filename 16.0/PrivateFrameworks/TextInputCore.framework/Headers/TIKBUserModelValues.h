// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIKBUSERMODELVALUES_H
#define TIKBUSERMODELVALUES_H

@class TIUserModelValues, NSMutableDictionary;


#import "TIKBAnalyticsMetricsContext.h"

@interface TIKBUserModelValues : TIUserModelValues {
    NSMutableDictionary *_stringValues;
}


@property (readonly, nonatomic) TIKBAnalyticsMetricsContext *kbContext;


-(id)bucketCountsByWordLength:(id)arg0 ;
-(id)calcAutocorrectionEnabled;
-(id)calcFloatingKeyboardUsageFromUserModel:(id)arg0 ;
-(id)calcTypingSpeedFromUserModel:(id)arg0 ;
-(id)computeValueFromCount:(id)arg0 bucketThresholds:(id)arg1 bucketValues:(id)arg2 ;
-(id)computeValueFromExpression:(id)arg0 precondition:(id)arg1 defaultValue:(id)arg2 bindings:(id)arg3 bucketThresholds:(id)arg4 bucketValues:(id)arg5 ;
-(id)computeValueWithDescriptor:(id)arg0 userModel:(id)arg1 forNumberOfDays:(int)arg2 ;
-(id)computeValuesByWordLengthWithDescriptor:(id)arg0 userModel:(id)arg1 forNumberOfDays:(int)arg2 ;
-(id)initWithInputMode:(id)arg0 context:(id)arg1 userModelDataStore:(id)arg2 durableCounters:(id)arg3 settingsDictionary:(id)arg4 ;
-(id)metricValue:(id)arg0 userModel:(id)arg1 forNumberOfDays:(int)arg2 ;
-(id)metricValuesByWordLength:(id)arg0 userModel:(id)arg1 forNumberOfDays:(int)arg2 ;
-(id)settingValueFromName:(id)arg0 ;
-(void)persistForDate:(id)arg0 ;


@end


#endif