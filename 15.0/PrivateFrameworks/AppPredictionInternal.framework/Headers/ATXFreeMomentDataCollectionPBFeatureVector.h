// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXFREEMOMENTDATACOLLECTIONPBFEATUREVECTOR_H
#define ATXFREEMOMENTDATACOLLECTIONPBFEATUREVECTOR_H

@class PBCodable;
@protocol NSCopying;



@interface ATXFreeMomentDataCollectionPBFeatureVector : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasHasTimeBeforeNextWorkMeeting;
@property (nonatomic) BOOL hasLastWorkMeetingOfDayEnded;
@property (nonatomic) BOOL hasMotionStateChangedFromMovingToStationary;
@property (nonatomic) BOOL hasMotionStateChangedFromStationaryToWalking;
@property (nonatomic) BOOL hasPhoneUnlocksWithinLast90seconds;
@property (nonatomic) BOOL hasPreviousAppLaunched;
@property (nonatomic) BOOL hasPreviousWorkMeetingEndedInLast20Minutes;
@property (nonatomic) BOOL hasPreviousWorkMeetingEndedInLastFiveMinutes;
@property (nonatomic) BOOL hasPrevoiusAppLaunchCategory;
@property (nonatomic) int hasTimeBeforeNextWorkMeeting; // ivar: _hasTimeBeforeNextWorkMeeting
@property (nonatomic) BOOL hasTimeSinceLastUnlock;
@property (nonatomic) int lastWorkMeetingOfDayEnded; // ivar: _lastWorkMeetingOfDayEnded
@property (nonatomic) int motionStateChangedFromMovingToStationary; // ivar: _motionStateChangedFromMovingToStationary
@property (nonatomic) int motionStateChangedFromStationaryToWalking; // ivar: _motionStateChangedFromStationaryToWalking
@property (nonatomic) int phoneUnlocksWithinLast90seconds; // ivar: _phoneUnlocksWithinLast90seconds
@property (nonatomic) int previousAppLaunched; // ivar: _previousAppLaunched
@property (nonatomic) int previousWorkMeetingEndedInLast20Minutes; // ivar: _previousWorkMeetingEndedInLast20Minutes
@property (nonatomic) int previousWorkMeetingEndedInLastFiveMinutes; // ivar: _previousWorkMeetingEndedInLastFiveMinutes
@property (nonatomic) int prevoiusAppLaunchCategory; // ivar: _prevoiusAppLaunchCategory
@property (nonatomic) int timeSinceLastUnlock; // ivar: _timeSinceLastUnlock


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif