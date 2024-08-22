// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKLOCALIZEDHOURSBUILDER_H
#define _MKLOCALIZEDHOURSBUILDER_H

@class NSArray, NSDate, UIColor, NSString, GEOBusinessHours, NSTimeZone;

#import <Foundation/Foundation.h>


@interface _MKLocalizedHoursBuilder : NSObject {
    BOOL _isClosedTodayAllDay;
    BOOL _isCurrentlyClosed;
    BOOL _isClosingSoon;
    BOOL _isOpeningSoon;
    BOOL _isPermanentlyClosed;
    BOOL _isTemporarilyClosed;
    BOOL _isOpenTodayAllDay;
    BOOL _isCurrentlyOpen;
}


@property (readonly, nonatomic) NSArray *AMPMSymbols;
@property (retain, nonatomic) NSDate *compareDate; // ivar: _compareDate
@property (nonatomic) NSUInteger geoMapItemOpeningHourOptions; // ivar: _geoMapItemOpeningHourOptions
@property (readonly, nonatomic) UIColor *hoursStateLabelColor; // ivar: _hoursStateLabelColor
@property (nonatomic) NSUInteger localizedHoursStringOptions; // ivar: _localizedHoursStringOptions
@property (readonly, nonatomic) NSString *localizedOpenState; // ivar: _localizedOpenState
@property (readonly, nonatomic) NSString *localizedOperatingHours; // ivar: _localizedOperatingHours
@property (retain, nonatomic) GEOBusinessHours *operatingHours; // ivar: _operatingHours
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


+(id)hoursDelimeter;
+(id)localizedHoursDayRangeString:(id)arg0 ;
+(id)localizedHoursStringNormalHours;
+(id)localizedHoursStringSpecialHours;
+(id)testGetDayOfWeekFormatterFull;
+(id)testGetDayOfWeekFormatterShort;
+(id)testGetHoursFormatter;
+(id)testGetMonthAndDayFormatter;
-(id)_formattedStringForHourRangesWithStartAndEndDates:(id)arg0 timeZone:(id)arg1 ;
-(id)_updateLocalizedOperatingHoursString:(NSUInteger)arg0 ;
-(id)concatenateStrings:(id)arg0 joinedByString:(id)arg1 ;
-(id)formatData:(id)arg0 ;
-(id)initWithBusinessHours:(id)arg0 timeZone:(id)arg1 localizedHoursStringOptions:(NSUInteger)arg2 ;
-(id)initWithMapItem:(id)arg0 localizedHoursStringOptions:(NSUInteger)arg1 ;
-(id)initWithMapItemForMessageForBusiness:(id)arg0 localizedHoursStringOptions:(NSUInteger)arg1 ;
-(void)_commonInit;
-(void)_resetLocalizedBuilder:(BOOL)arg0 ;
-(void)_resetLocalizedStrings:(BOOL)arg0 ;
-(void)_updateLocalizedString;
-(void)calculateWidthsForData:(id)arg0 ;
-(void)updateHoursLabelColor;
-(void)updateHoursLabelColorWithDefaultLabelColor:(id)arg0 ;


@end


#endif