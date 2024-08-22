// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWEATHERCONDITIONS_H
#define WFWEATHERCONDITIONS_H

@class NSMutableDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WFLocation.h"

@interface WFWeatherConditions : NSObject <NSCopying, NSSecureCoding>

 {
    WFLocation *_location;
}


@property (retain, nonatomic) NSMutableDictionary *components; // ivar: _components
@property (nonatomic) os_unfair_lock_s componentsLock; // ivar: _componentsLock
@property (copy) WFLocation *location;
@property (getter=isNightForecast) BOOL nightForecast; // ivar: _nightForecast


+(BOOL)supportsSecureCoding;
+(NSUInteger)dateComponentCalendarUnits;
+(id)calendar;
-(BOOL)wf_isDay;
-(BOOL)wf_isDayIfSunrise:(id)arg0 sunset:(id)arg1 ;
-(id)allComponents;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)valueForComponent:(id)arg0 ;
-(id)valueForComponentSync:(id)arg0 ;
-(void)_commonInit;
-(void)editLinksWithLocale:(id)arg0 trackingParameter:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)setValue:(id)arg0 forComponent:(id)arg1 ;
-(void)setValueSync:(id)arg0 forComponent:(id)arg1 ;


@end


#endif