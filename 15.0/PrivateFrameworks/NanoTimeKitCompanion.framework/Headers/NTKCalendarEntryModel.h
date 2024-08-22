// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKCALENDARENTRYMODEL_H
#define NTKCALENDARENTRYMODEL_H

@class NSArray, NSDate, NSString, NSURL;


#import "NTKTimelineEntryModel.h"

@interface NTKCalendarEntryModel : NTKTimelineEntryModel

@property (nonatomic) BOOL displayAsConflicting; // ivar: _displayAsConflicting
@property (nonatomic) BOOL displayAsFirstInDay; // ivar: _displayAsFirstInDay
@property (nonatomic) BOOL displayAsTomorrow; // ivar: _displayAsTomorrow
@property (nonatomic) BOOL displayEntryDateInGraphicCircularView; // ivar: _displayEntryDateInGraphicCircularView
@property (copy, nonatomic) NSArray *eventColors; // ivar: _eventColors
@property (retain, nonatomic) NSDate *eventEndDate; // ivar: _eventEndDate
@property (retain, nonatomic) NSDate *eventStartDate; // ivar: _eventStartDate
@property (nonatomic) NSUInteger eventsInDayCount; // ivar: _eventsInDayCount
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSURL *launchURL; // ivar: _launchURL
@property (nonatomic) BOOL overlappingDates; // ivar: _overlappingDates
@property (nonatomic) NSUInteger overlappingEventCount; // ivar: _overlappingEventCount
@property (copy, nonatomic) NSString *primaryEventLocation; // ivar: _primaryEventLocation
@property (copy, nonatomic) NSString *primaryEventOrganizerName; // ivar: _primaryEventOrganizerName
@property (copy, nonatomic) NSString *primaryEventTitle; // ivar: _primaryEventTitle
@property (copy, nonatomic) NSString *secondaryEventTitle; // ivar: _secondaryEventTitle


+(id)_entryForTemplateDescription:(id)arg0 family:(NSInteger)arg1 ;
+(id)_extraLargeCalendarImageProvider;
+(id)_extraLargeConflictImageProvider;
+(id)_modularSmallCalendarImageProvider;
+(id)_modularSmallConflictImageProvider;
+(id)_signatureCornerImageProvider;
+(id)_swapPlaceholderString:(id)arg0 withTimeStringForDate:(id)arg1 inString:(id)arg2 usingBaseFont:(id)arg3 smallCapsBaseFont:(id)arg4 timeZone:(id)arg5 options:(NSUInteger)arg6 ;
+(id)_utilityCalendarImageProvider;
+(id)circular:(id)arg0 isMedium:(BOOL)arg1 ;
+(id)contentForLargeModular:(id)arg0 ;
+(id)contentForSignatureRectangular:(id)arg0 ;
+(id)extraLarge:(id)arg0 ;
+(id)largeModular:(id)arg0 ;
+(id)largeUtility:(id)arg0 ;
+(id)loadingEntryForFamily:(NSInteger)arg0 ;
+(id)lockedEntryForFamily:(NSInteger)arg0 ;
+(id)sampleEventTemplateForFamily:(NSInteger)arg0 ;
+(id)signatureBezel:(id)arg0 ;
+(id)signatureCircular:(id)arg0 ;
+(id)signatureCorner:(id)arg0 ;
+(id)signatureRectangular:(id)arg0 ;
+(id)smallModular:(id)arg0 ;
+(id)smallUtility:(id)arg0 ;
+(id)wrappedUserStringFrom:(id)arg0 ;
-(id)_wrappedPrimaryEventLocation;
-(id)_wrappedPrimaryEventOrganizerName;
-(id)_wrappedPrimaryEventTitle;
-(id)_wrappedSecondaryEventTitle;
-(id)description;
-(id)templateForComplicationFamily:(NSInteger)arg0 ;


@end


#endif