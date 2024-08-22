// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADSTATSEVENTINFO_H
#define CADSTATSEVENTINFO_H


#import <Foundation/Foundation.h>


@interface CADStatsEventInfo : NSObject {
    BOOL _isDetached;
    BOOL _hasRecurrenceRules;
    BOOL _isAllDay;
    BOOL _isBirthday;
    BOOL _isHoliday;
    BOOL _hasLocation;
    BOOL _locationHasKnownSpatialData;
    BOOL _hasClientLocation;
    BOOL _preferredLocationIsAConferenceRoom;
    BOOL _isCandidateForTravelAdvisories;
    BOOL _isImmediatelyEligibleForTravelAdvisories;
    BOOL _hasPredictedLocation;
    BOOL _isOnCalendarIgnoringEventAlerts;
    BOOL _isOnSharedCalendar;
    NSInteger _travelAdvisoryBehavior;
    NSInteger _participationStatus;
}






@end


#endif