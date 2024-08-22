// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKCALENDARITEMALERTINFO_H
#define EKCALENDARITEMALERTINFO_H

@class NSURL, NSString, NSUserActivity, NSDate, NSTimeZone, EKTravelEngineHypothesis, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface EKCalendarItemAlertInfo : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL acknowledged; // ivar: _acknowledged
@property (readonly, nonatomic) NSURL *action; // ivar: _action
@property (readonly, nonatomic) NSString *alarmID; // ivar: _alarmID
@property (readonly, nonatomic) BOOL allDay; // ivar: _allDay
@property (readonly, nonatomic) NSUserActivity *appLink; // ivar: _appLink
@property (nonatomic) NSUInteger currentRouteHypothesizerNotificationType; // ivar: _currentRouteHypothesizerNotificationType
@property (readonly, nonatomic) NSString *dismissalID; // ivar: _dismissalID
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSURL *entityID; // ivar: _entityID
@property (readonly, nonatomic) NSDate *eventDate; // ivar: _eventDate
@property (readonly, nonatomic) NSTimeZone *eventTimeZone; // ivar: _eventTimeZone
@property (readonly, nonatomic) NSString *externalID; // ivar: _externalID
@property (retain, nonatomic) NSDate *fireDate; // ivar: _fireDate
@property (nonatomic) CLLocationCoordinate2D geoLocationCoordinates; // ivar: _geoLocationCoordinates
@property (nonatomic) BOOL hasDisplayedLeaveByMessage; // ivar: _hasDisplayedLeaveByMessage
@property (nonatomic) BOOL hasDisplayedLeaveNowMessage; // ivar: _hasDisplayedLeaveNowMessage
@property (nonatomic) BOOL hasDisplayedRunningLateMessage; // ivar: _hasDisplayedRunningLateMessage
@property (nonatomic) BOOL hasGeoLocationCoordinates; // ivar: _hasGeoLocationCoordinates
@property (nonatomic) BOOL hasOrganizerThatIsNotCurrentUser; // ivar: _hasOrganizerThatIsNotCurrentUser
@property (readonly, nonatomic) BOOL isOffsetFromTravelTimeStart; // ivar: _isOffsetFromTravelTimeStart
@property (nonatomic) BOOL isOnSharedCalendar; // ivar: _isOnSharedCalendar
@property (readonly, nonatomic) BOOL isPseudoEvent; // ivar: _isPseudoEvent
@property (readonly, nonatomic) BOOL isPurelyATimeToLeaveAlert;
@property (nonatomic) BOOL isSuggestedLocation; // ivar: _isSuggestedLocation
@property (retain, nonatomic) NSDate *lastFireTimeOfAlertOffsetFromTravelTime; // ivar: _lastFireTimeOfAlertOffsetFromTravelTime
@property (retain, nonatomic) NSDate *lastTimeBulletinAdded; // ivar: _lastTimeBulletinAdded
@property (retain, nonatomic) EKTravelEngineHypothesis *latestHypothesis; // ivar: _latestHypothesis
@property (readonly, nonatomic) NSString *location; // ivar: _location
@property (retain, nonatomic) NSString *locationAddress; // ivar: _locationAddress
@property (retain, nonatomic) NSData *mapKitHandle; // ivar: _mapKitHandle
@property (retain, nonatomic) NSString *organizerEmailAddress; // ivar: _organizerEmailAddress
@property (readonly, nonatomic) NSInteger proximity; // ivar: _proximity
@property (readonly, nonatomic) NSString *publisherBulletinID; // ivar: _publisherBulletinID
@property (readonly, nonatomic) NSString *recordID;
@property (readonly, nonatomic) BOOL refiring; // ivar: _refiring
@property (retain, nonatomic) NSString *startLocationRouting; // ivar: _startLocationRouting
@property (readonly, nonatomic) BOOL tentative; // ivar: _tentative
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger triggerType; // ivar: _triggerType


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithTitle:(id)arg0 location:(id)arg1 date:(id)arg2 endDate:(id)arg3 timeZone:(id)arg4 allDay:(BOOL)arg5 tentative:(BOOL)arg6 publisherBulletinID:(id)arg7 entityID:(id)arg8 appLink:(id)arg9 action:(id)arg10 proximity:(NSInteger)arg11 externalID:(id)arg12 acknowledged:(BOOL)arg13 dismissalID:(id)arg14 alarmID:(id)arg15 isOffsetFromTravelTimeStart:(BOOL)arg16 refiring:(BOOL)arg17 pseudoEvent:(BOOL)arg18 ;
-(void)resetTimeToLeaveDisplayState;


@end


#endif