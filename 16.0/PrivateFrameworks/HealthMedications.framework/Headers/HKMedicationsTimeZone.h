// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMEDICATIONSTIMEZONE_H
#define HKMEDICATIONSTIMEZONE_H


#import <Foundation/Foundation.h>


@interface HKMedicationsTimeZone : NSObject



+(BOOL)_timeZoneDidChangeWithLocalTimeZone:(id)arg0 ;
+(BOOL)didChange;
+(NSInteger)secondsAheadOfPreviousTimeZoneForTimeZone:(id)arg0 ;
+(id)_medicationDefaults;
+(id)lastChangeEndOfDay;
+(void)updateLastChangeInfoWithDate:(id)arg0 fromTimeZoneName:(id)arg1 ;
+(void)updateSystemTimeZoneName;


@end


#endif