// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSCONTEXTUALEVENT_H
#define TPSCONTEXTUALEVENT_H

@class NSDate, NSString, NSMutableDictionary, NSMutableSet, NSDictionary;


#import "TPSSerializableObject.h"
#import "TPSContextualEventBookmark.h"
#import "TPSContextualEvent.h"

@interface TPSContextualEvent : TPSSerializableObject

@property (copy, nonatomic) TPSContextualEventBookmark *bookmark; // ivar: _bookmark
@property (readonly, nonatomic) unsigned int currentObservationCount;
@property (nonatomic) NSInteger daysSinceLastMajorUpdate; // ivar: _daysSinceLastMajorUpdate
@property (copy, nonatomic) NSDate *eventSinceDate; // ivar: _eventSinceDate
@property (readonly, nonatomic) CGFloat eventTimeToLiveInterval;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) NSInteger lookBackDays; // ivar: _lookBackDays
@property (copy, nonatomic) NSDate *matchedDate; // ivar: _matchedDate
@property (nonatomic) unsigned int minObservationCount; // ivar: _minObservationCount
@property (retain, nonatomic) NSMutableDictionary *observationMap; // ivar: _observationMap
@property (retain, nonatomic) NSMutableSet *observerIdentifiers; // ivar: _observerIdentifiers
@property (copy, nonatomic) TPSContextualEvent *state; // ivar: _state
@property (nonatomic) NSInteger status; // ivar: _status
@property (nonatomic) NSInteger type; // ivar: _type
@property (copy, nonatomic) NSDictionary *userInfoPersistent; // ivar: _userInfoPersistent
@property (copy, nonatomic) NSDictionary *userInfoQuery; // ivar: _userInfoQuery


+(BOOL)supportsSecureCoding;
+(NSInteger)typeFromEventDictionary:(id)arg0 ;
+(id)identifierFromEventInfoDictionary:(id)arg0 ;
-(BOOL)canBeRemoved;
-(BOOL)hasDaysSinceLastMajorUpdate;
-(BOOL)hasLookBackDays;
-(BOOL)observedWithResults:(id)arg0 ;
-(CGFloat)lookbackTimeIntervalInSeconds;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)eventSinceLastMajorUpdateDate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)newStateFromStateDictionary:(id)arg0 ;
-(void)addObserverIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeAllObservations;
-(void)removeObserverIdentifiers:(id)arg0 ;
-(void)removeOutdatedObservationDates;


@end


#endif