// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDAVOFFICEHOUR_H
#define CALDAVOFFICEHOUR_H

@class NSDateComponents;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CalDAVOfficeHour : NSObject <NSSecureCoding>



@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (copy, nonatomic) NSDateComponents *endDate; // ivar: _endDate
@property (copy, nonatomic) NSDateComponents *startDate; // ivar: _startDate


+(BOOL)supportsSecureCoding;
+(id)dataFromOfficeHours:(id)arg0 ;
+(id)icsFromOfficeHours:(id)arg0 ;
+(id)officeHoursFromData:(id)arg0 ;
+(id)officeHoursFromICS:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif