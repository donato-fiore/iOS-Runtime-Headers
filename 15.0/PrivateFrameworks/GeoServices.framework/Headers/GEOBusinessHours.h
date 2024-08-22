// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOBUSINESSHOURS_H
#define GEOBUSINESSHOURS_H

@class NSDate, NSString, NSArray;

#import <Foundation/Foundation.h>

#import "GEOPDBusinessHours.h"

@interface GEOBusinessHours : NSObject {
    GEOPDBusinessHours *_hours;
}


@property (readonly, nonatomic) unsigned int closingSoonThresdholdInSeconds;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSUInteger hoursType;
@property (readonly, nonatomic) BOOL isBrandTypeHours; // ivar: _isBrandTypeHours
@property (readonly, nonatomic) NSString *localizedMessage;
@property (readonly, nonatomic) unsigned int openingSoonThresholdInSeconds;
@property (readonly, nonatomic) NSArray *pdHours;
@property (readonly, nonatomic) NSArray *placeDailyHours; // ivar: _placeDailyHours
@property (readonly, nonatomic) NSArray *placeDailyNormalizedHours; // ivar: _placeDailyNormalizedHours
@property (readonly, nonatomic) NSDate *startDate;


+(id)prioritizeBusinessHours:(id)arg0 compareDate:(id)arg1 ;
+(void)divideBusinessHoursBasedOnTodaysDate:(id)arg0 compareDate:(id)arg1 completion:(id)arg2 ;
-(id)initWithGEOPDBusinessHours:(id)arg0 timeZone:(id)arg1 ;
-(id)initWithGEOPDHours:(id)arg0 timeZone:(id)arg1 ;


@end


#endif