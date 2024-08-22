// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPOIEVENTHOURS_H
#define GEOPOIEVENTHOURS_H

@class NSDateInterval, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEOPOIEventHours : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (retain, nonatomic) NSArray *hours; // ivar: _hours


+(BOOL)supportsSecureCoding;
+(id)eventHoursForDateTimeRanges:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDateInterval:(id)arg0 ;
-(id)initWithDateTimeRange:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif