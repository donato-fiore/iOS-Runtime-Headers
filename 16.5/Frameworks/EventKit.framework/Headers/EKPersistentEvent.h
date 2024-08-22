// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKPERSISTENTEVENT_H
#define EKPERSISTENTEVENT_H



#import "EKPersistentCalendarItem.h"

@interface EKPersistentEvent : EKPersistentCalendarItem



+(Class)meltedClass;
+(id)defaultPropertiesToLoad;
+(id)eventWithRandomUUID;
+(id)relations;
-(BOOL)canForward;
-(BOOL)disallowProposeNewTime;
-(BOOL)firedTTL;
-(NSInteger)availability;
-(NSInteger)locationPredictionState;
-(NSInteger)privacyLevel;
-(NSInteger)status;
-(NSInteger)travelAdvisoryBehavior;
-(NSUInteger)invitationStatus;
-(NSUInteger)junkStatus;
-(id)actions;
-(id)birthdayContactIdentifier;
-(id)birthdayContactName;
-(id)birthdayID;
-(id)conferenceURLDetectedString;
-(id)conferenceURLString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)endDate;
-(id)endDateRaw;
-(id)organizer;
-(id)originalStartDate;
-(id)participationStatusModifiedDate;
-(id)proposedStartDate;
-(id)recurrenceSet;
-(id)responseComment;
-(id)specialDayString;
-(id)suggestionInfo;
-(id)travelTime;
-(int)entityType;
-(int)externalTrackingStatus;
-(unsigned int)invitationChangedProperties;
-(void)setActions:(id)arg0 ;
-(void)setAvailability:(NSInteger)arg0 ;
-(void)setBirthdayContactIdentifier:(id)arg0 ;
-(void)setBirthdayContactName:(id)arg0 ;
-(void)setBirthdayID:(id)arg0 ;
-(void)setCanForward:(BOOL)arg0 ;
-(void)setConferenceURLDetectedString:(id)arg0 ;
-(void)setConferenceURLString:(id)arg0 ;
-(void)setDisallowProposeNewTime:(BOOL)arg0 ;
-(void)setEndDate:(id)arg0 ;
-(void)setEndDateRaw:(id)arg0 ;
-(void)setExternalTrackingStatus:(int)arg0 ;
-(void)setFiredTTL:(BOOL)arg0 ;
-(void)setInvitationChangedProperties:(unsigned int)arg0 ;
-(void)setInvitationStatus:(NSUInteger)arg0 ;
-(void)setJunkStatus:(NSUInteger)arg0 ;
-(void)setLocationPredictionState:(NSInteger)arg0 ;
-(void)setOriginalStartDate:(id)arg0 ;
-(void)setParticipationStatusModifiedDate:(id)arg0 ;
-(void)setPrivacyLevel:(NSInteger)arg0 ;
-(void)setProposedStartDate:(id)arg0 ;
-(void)setRecurrenceSet:(id)arg0 ;
-(void)setResponseComment:(id)arg0 ;
-(void)setSpecialDayString:(id)arg0 ;
-(void)setStatus:(NSInteger)arg0 ;
-(void)setSuggestionInfo:(id)arg0 ;
-(void)setTravelAdvisoryBehavior:(NSInteger)arg0 ;
-(void)setTravelTime:(id)arg0 ;


@end


#endif