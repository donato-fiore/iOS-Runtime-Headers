// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLKUIALMANACTRANSITINFO_H
#define CLKUIALMANACTRANSITINFO_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLKUIAlmanacTransitInfo : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger constantSun; // ivar: _constantSun
@property (retain, nonatomic) NSDate *day; // ivar: _day
@property (nonatomic) ? location; // ivar: _location
@property (retain, nonatomic) NSDate *rise; // ivar: _rise
@property (retain, nonatomic) NSDate *set; // ivar: _set
@property (retain, nonatomic) NSDate *solarMidnight; // ivar: _solarMidnight
@property (retain, nonatomic) NSDate *solarNoon; // ivar: _solarNoon
@property (retain, nonatomic) NSDate *tomorrow; // ivar: _tomorrow


+(BOOL)supportsSecureCoding;
+(id)transitInfoForDate:(id)arg0 ;
+(id)transitInfoForDate:(id)arg0 city:(id)arg1 ;
+(id)transitInfoForDate:(id)arg0 city:(id)arg1 sunAltitude:(CGFloat)arg2 ;
+(id)transitInfoForDate:(id)arg0 location:(struct ? )arg1 ;
+(id)transitInfoForDate:(id)arg0 location:(struct ? )arg1 sunAltitude:(CGFloat)arg2 ;
-(BOOL)isDateWithinTransitInfo:(id)arg0 ;
-(id)_dateOrNil:(CGFloat)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 ;
-(id)initWithDate:(id)arg0 city:(id)arg1 ;
-(id)initWithDate:(id)arg0 city:(id)arg1 sunAltitude:(CGFloat)arg2 ;
-(id)initWithDate:(id)arg0 location:(struct ? )arg1 ;
-(id)initWithDate:(id)arg0 location:(struct ? )arg1 sunAltitude:(CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif