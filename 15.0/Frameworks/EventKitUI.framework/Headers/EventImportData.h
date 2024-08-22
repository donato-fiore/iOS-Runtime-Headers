// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EVENTIMPORTDATA_H
#define EVENTIMPORTDATA_H

@class NSURL, NSDate, NSData, NSString, EKStructuredLocation;

#import <Foundation/Foundation.h>


@interface EventImportData : NSObject

@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) NSData *icsData; // ivar: _icsData
@property (retain, nonatomic) NSString *notes; // ivar: _notes
@property (nonatomic) BOOL prefersManagedCalendar; // ivar: _prefersManagedCalendar
@property (nonatomic) int requestedAction; // ivar: _requestedAction
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (retain, nonatomic) EKStructuredLocation *structuredLocation; // ivar: _structuredLocation
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *uniqueId; // ivar: _uniqueId


+(BOOL)isSessionManaged:(id)arg0 ;
+(BOOL)itemContainsCalendarICSData:(id)arg0 ;
+(id)_extractEventDataFromEventICSData:(id)arg0 ;
+(id)_extractEventDataFromMapKitItemData:(id)arg0 ;
+(id)_extractEventDataFromReminderICSData:(id)arg0 ;
+(id)_extractEventDataFromSpotlightIdentifier:(id)arg0 ;
+(id)_extractEventDataFromURL:(id)arg0 ;
+(id)_extractEventDataFromUTF8StringData:(id)arg0 ;
+(id)acceptedTypeIdentifiers;
+(id)eventImportDataFromData:(id)arg0 forType:(id)arg1 ;
+(void)extractEventImportDataFromDropSession:(id)arg0 completionBlock:(id)arg1 ;
-(id)init;


@end


#endif