// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DAEHOLIDAYCALENDARFETCHRESULT_H
#define DAEHOLIDAYCALENDARFETCHRESULT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DAEHolidayCalendarFetchResult : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *URLString; // ivar: _URLString
@property (retain, nonatomic) NSString *calendarDescription; // ivar: _calendarDescription
@property (retain, nonatomic) NSString *language; // ivar: _language
@property (retain, nonatomic) NSString *region; // ivar: _region


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif