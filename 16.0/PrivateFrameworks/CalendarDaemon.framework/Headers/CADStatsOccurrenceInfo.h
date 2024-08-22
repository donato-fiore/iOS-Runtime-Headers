// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADSTATSOCCURRENCEINFO_H
#define CADSTATSOCCURRENCEINFO_H


#import <Foundation/Foundation.h>


@interface CADStatsOccurrenceInfo : NSObject {
    BOOL _isInLast1Day;
    BOOL _isInNext1Day;
    BOOL _isInNext7Days;
    BOOL _isInNext30Days;
    BOOL _isInNext365Days;
    BOOL _isAllDay;
    BOOL _isBirthday;
    BOOL _isHoliday;
    BOOL _isCandidateForTravelAdvisories;
    BOOL _isImmediatelyEligibleForTravelAdvisories;
    BOOL _hasResponseComment;
    BOOL _organizerIsSelf;
    BOOL _hasNonDefaultAlarm;
    BOOL _hasLocation;
    BOOL _hasClientLocation;
    BOOL _hasLocationWithKnownSpatialData;
    BOOL _hasConferenceRoomLocation;
    BOOL _hasPredictedLocation;
    BOOL _isOnCalendarThatSuppressesAlerts;
    BOOL _isOnSharedCalendar;
    BOOL _hasURL;
    BOOL _hasNotes;
    NSUInteger _numAttendees;
    NSInteger _travelAdvisoryBehavior;
    NSInteger _status;
    NSInteger _participationStatus;
    CGFloat _durationInMinutes;
}






@end


#endif