// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSCALENDAR_H
#define ICSCALENDAR_H

@class NSMutableSet, NSMutableDictionary, NSMutableArray, NSString;


#import "ICSComponent.h"
#import "ICSDuration.h"
#import "ICSColor.h"

@interface ICSCalendar : ICSComponent {
    NSMutableSet *_keys;
    NSMutableDictionary *_masters;
    NSMutableDictionary *_occurrences;
    NSMutableDictionary *_timezones;
    NSMutableArray *_parsingErrors;
}


@property (retain, nonatomic) NSString *calscale;
@property (nonatomic) int method;
@property (retain, nonatomic) NSString *prodid;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) ICSDuration *x_apple_auto_refresh;
@property (retain, nonatomic) ICSColor *x_apple_calendar_color;
@property BOOL x_apple_ignore_on_restore;
@property (retain, nonatomic) NSString *x_apple_language;
@property (retain, nonatomic) NSString *x_apple_region;
@property int x_calendarserver_access;
@property (retain, nonatomic) NSString *x_wr_caldesc;
@property (retain, nonatomic) NSString *x_wr_calname;
@property (retain, nonatomic) NSString *x_wr_relcalid;
@property (retain, nonatomic) NSString *x_wr_timezone;


+(NSInteger)compareCalendarServerAccess:(int)arg0 withAccess:(int)arg1 ;
+(id)ICSStringFromCalendarServerAccess:(int)arg0 ;
+(id)ICSStringFromMethod:(int)arg0 ;
+(id)calendarWithKnownTimeZones;
+(id)defaultProdid;
+(id)name;
+(int)calendarServerAccessFromICSString:(id)arg0 ;
+(int)methodFromICSString:(id)arg0 ;
+(void)setDefaultProdid:(id)arg0 ;
-(id)_init;
-(id)_initWithVersionAndProdID:(BOOL)arg0 ;
-(id)_timeZonesForComponents:(id)arg0 options:(int)arg1 ;
-(id)componentForKey:(id)arg0 ;
-(id)componentKeys;
-(id)componentOccurrencesForKey:(id)arg0 ;
-(id)init;
-(id)parsingErrors;
-(id)propertiesToIncludeForChecksumVersion:(int)arg0 ;
-(id)systemCalendarForDate:(id)arg0 options:(int)arg1 ;
-(id)systemDateForDate:(id)arg0 options:(int)arg1 ;
-(id)systemTimeZoneForDate:(id)arg0 ;
-(id)timeZoneForKey:(id)arg0 ;
-(void)_addComponent:(id)arg0 withUIDGenerator:(id)arg1 ;
-(void)_addTimeZonesInComponent:(id)arg0 toDictionary:(id)arg1 ;
-(void)_addTimeZonesInComponent:(id)arg0 toSet:(id)arg1 ;
-(void)addComponent:(id)arg0 withUIDGenerator:(id)arg1 ;
-(void)addParsingError:(id)arg0 ;
-(void)fixComponent;
-(void)fixEntities;
-(void)fixPropertiesInheritance;
-(void)setComponents:(id)arg0 ;
-(void)setComponents:(id)arg0 options:(int)arg1 ;
-(void)setComponents:(id)arg0 timeZones:(BOOL)arg1 ;


@end


#endif