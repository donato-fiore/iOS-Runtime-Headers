// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASRECURRENCE_H
#define ASRECURRENCE_H

@class NSNumber, NSDate;
@protocol NSSecureCoding;


#import "ASItem.h"
#import "ASEvent.h"

@interface ASRecurrence : ASItem <NSSecureCoding>



@property (retain, nonatomic) NSNumber *calendarType; // ivar: _calendarType
@property (retain, nonatomic) NSNumber *dayOfMonth; // ivar: _dayOfMonth
@property (retain, nonatomic) NSNumber *dayOfWeek; // ivar: _dayOfWeek
@property (retain, nonatomic) NSNumber *firstDayOfWeek; // ivar: _firstDayOfWeek
@property (retain, nonatomic) NSNumber *interval; // ivar: _interval
@property (retain, nonatomic) NSNumber *monthOfYear; // ivar: _monthOfYear
@property (retain, nonatomic) NSNumber *occurrences; // ivar: _occurrences
@property (weak, nonatomic) ASEvent *parentEvent; // ivar: _parentEvent
@property (retain, nonatomic) NSNumber *type; // ivar: _type
@property (retain, nonatomic) NSDate *until; // ivar: _until
@property (retain, nonatomic) NSNumber *weekOfMonth; // ivar: _weekOfMonth


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)supportsSecureCoding;
+(id)asParseRules;
-(*void)_newRecurrenceWithParentStartDate:(id)arg0 useFloatingTimeForAllDayEvents:(BOOL)arg1 account:(id)arg2 ;
-(BOOL)_loadAttributesFromCalRecurrence:(*void)arg0 parentStartDate:(id)arg1 parentItem:(id)arg2 useFloatingTimeForAllDayEvents:(BOOL)arg3 ;
-(BOOL)_requiresParentEvent;
-(id)_transformedUntilDateForActiveSync:(id)arg0 ;
-(id)_untilDateForCalFrameworkWithParentStartDate:(id)arg0 ;
-(id)initWithCalRecurrence:(*void)arg0 parentEvent:(id)arg1 useFloatingTimeForAllDayEvents:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)appendActiveSyncDataForTask:(id)arg0 toWBXMLData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)parseASParseContext:(id)arg0 root:(id)arg1 parent:(id)arg2 callbackDict:(id)arg3 streamCallbackDict:(id)arg4 account:(id)arg5 ;
-(void)saveToCalendarWithParentASEvent:(id)arg0 existingRecord:(*void)arg1 shouldMergeProperties:(BOOL)arg2 outMergeDidChooseLocalProperties:(*BOOL)arg3 useFloatingTimeForAllDayEvents:(BOOL)arg4 account:(id)arg5 ;


@end


#endif