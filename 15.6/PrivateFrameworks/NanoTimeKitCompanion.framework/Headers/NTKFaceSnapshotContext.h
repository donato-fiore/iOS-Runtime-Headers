// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKFACESNAPSHOTCONTEXT_H
#define NTKFACESNAPSHOTCONTEXT_H

@class NSString, NSCalendar, NSDate, NSNumber, CLLocation;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NTKFaceSnapshotContext : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (retain, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) NSNumber *enhanceTextLegibilityEnabled; // ivar: _enhanceTextLegibilityEnabled
@property (copy, nonatomic) NSString *locale; // ivar: _locale
@property (retain, nonatomic) CLLocation *location; // ivar: _location
@property (copy, nonatomic) NSString *lunarCalendarLocaleID; // ivar: _lunarCalendarLocaleID
@property (copy, nonatomic) NSString *monogram; // ivar: _monogram
@property (copy, nonatomic) NSString *tzVersion; // ivar: _tzVersion
@property (retain, nonatomic) NSNumber *uses24hTime; // ivar: _uses24hTime


+(BOOL)supportsSecureCoding;
+(id)currentContext;
-(BOOL)buildVersionMatchesContext:(id)arg0 ;
-(BOOL)calendarDateMatchesContext:(id)arg0 ;
-(BOOL)enhanceTextLegibilityEnabledMatchesContext:(id)arg0 ;
-(BOOL)localeMatchesContext:(id)arg0 ;
-(BOOL)locationSignificantlyDiffersFromContext:(id)arg0 ;
-(BOOL)lunarCalendarLocaleIDMatchesContext:(id)arg0 ;
-(BOOL)timeZoneMatchesContext:(id)arg0 ;
-(CGFloat)distanceInKilometersFromContext:(id)arg0 ;
-(id)_yearMonthDay;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif