// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNGUIDANCEEVENTFEEDBACK_H
#define MNGUIDANCEEVENTFEEDBACK_H

@class PBCodable, NSString, NSMutableArray, NSData, NSUUID;
@protocol NSCopying;



@interface MNGuidanceEventFeedback : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat endDistance; // ivar: _endDistance
@property (nonatomic) CGFloat endTime; // ivar: _endTime
@property (retain, nonatomic) NSString *enrouteNoticeIdentifier; // ivar: _enrouteNoticeIdentifier
@property (nonatomic) unsigned int enrouteNoticeIndex; // ivar: _enrouteNoticeIndex
@property (retain, nonatomic) NSString *eventDescription; // ivar: _eventDescription
@property (nonatomic) unsigned int eventIndex; // ivar: _eventIndex
@property (nonatomic) BOOL hasEndDistance;
@property (nonatomic) BOOL hasEndTime;
@property (readonly, nonatomic) BOOL hasEnrouteNoticeIdentifier;
@property (nonatomic) BOOL hasEnrouteNoticeIndex;
@property (readonly, nonatomic) BOOL hasEventDescription;
@property (nonatomic) BOOL hasEventIndex;
@property (nonatomic) BOOL hasManeuverTime;
@property (readonly, nonatomic) BOOL hasRouteID;
@property (nonatomic) BOOL hasSelectedPrimaryStringIndex;
@property (nonatomic) BOOL hasSelectedSecondaryStringIndex;
@property (nonatomic) BOOL hasShortPrompt;
@property (nonatomic) BOOL hasStartDistance;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) BOOL hasStepID;
@property (nonatomic) BOOL hasTrafficCameraType;
@property (nonatomic) BOOL hasTrafficColor;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasUniqueIDstring;
@property (nonatomic) BOOL hasVehicleSpeed;
@property (retain, nonatomic) NSMutableArray *junctionViewImageIDs; // ivar: _junctionViewImageIDs
@property (nonatomic) CGFloat maneuverTime; // ivar: _maneuverTime
@property (retain, nonatomic) NSData *routeID; // ivar: _routeID
@property (nonatomic) unsigned int selectedPrimaryStringIndex; // ivar: _selectedPrimaryStringIndex
@property (nonatomic) unsigned int selectedSecondaryStringIndex; // ivar: _selectedSecondaryStringIndex
@property (nonatomic) BOOL shortPrompt; // ivar: _shortPrompt
@property (nonatomic) CGFloat startDistance; // ivar: _startDistance
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (nonatomic) unsigned int stepID; // ivar: _stepID
@property (nonatomic) unsigned int trafficCameraType; // ivar: _trafficCameraType
@property (nonatomic) unsigned int trafficColor; // ivar: _trafficColor
@property (nonatomic) int type; // ivar: _type
@property (readonly, nonatomic) NSUUID *uniqueID;
@property (retain, nonatomic) NSString *uniqueIDstring; // ivar: _uniqueIDstring
@property (nonatomic) CGFloat vehicleSpeed; // ivar: _vehicleSpeed


+(Class)junctionViewImageIDType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithEvent:(id)arg0 ;
-(id)junctionViewImageIDAtIndex:(NSUInteger)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)addJunctionViewImageID:(id)arg0 ;
-(void)clearJunctionViewImageIDs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif