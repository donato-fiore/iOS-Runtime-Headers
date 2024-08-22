// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKBIRTHDATECHANGEMANAGER_H
#define HKBIRTHDATECHANGEMANAGER_H

@class HKHealthStore;

#import <Foundation/Foundation.h>


@interface HKBirthdateChangeManager : NSObject

@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore


+(id)_birthdayCalendar;
+(void)showDisabledWarningWithAge:(NSInteger)arg0 presentingViewController:(id)arg1 ;
+(void)showDisabledWarningWithAge:(NSInteger)arg0 presentingViewController:(id)arg1 withAlertActions:(id)arg2 ;
+(void)showDisabledWarningWithHealthChecklistWithAge:(NSInteger)arg0 presentingViewController:(id)arg1 openHealthChecklistInContext:(BOOL)arg2 ;
-(NSInteger)_ageFromBirthDate:(id)arg0 ;
-(NSInteger)_ageFromBirthDateComponents:(id)arg0 ;
-(id)_nowDate;
-(id)initWithHealthStore:(id)arg0 ;
-(id)setBirthdate:(id)arg0 withError:(*id)arg1 ;


@end


#endif