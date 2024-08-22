// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUAUTOINSTALLFORECAST_H
#define SUAUTOINSTALLFORECAST_H

@class NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "_SUAutoInstallForecastDateCache.h"

@interface SUAutoInstallForecast : NSObject <NSSecureCoding, NSCopying>

 {
    _SUAutoInstallForecastDateCache *_lazy_forecastDateCache;
}


@property (retain, nonatomic) NSDate *firstUnlock; // ivar: _firstUnlock
@property (readonly, nonatomic) NSInteger scheduleType;
@property (retain, nonatomic) NSDate *suEndDate; // ivar: _suEndDate
@property (retain, nonatomic) NSDate *suStartDate; // ivar: _suStartDate
@property (retain, nonatomic) NSDate *unlockEndDate; // ivar: _unlockEndDate
@property (retain, nonatomic) NSDate *unlockStartDate; // ivar: _unlockStartDate


+(BOOL)supportsSecureCoding;
-(BOOL)_isDateExpired:(id)arg0 ;
-(BOOL)_isForecastLogicallyExpired;
-(BOOL)isEqual:(id)arg0 ;
-(id)_calendar;
-(id)_forecastDateCache;
-(id)_roundedEndTime;
-(id)_roundedStartTime;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif