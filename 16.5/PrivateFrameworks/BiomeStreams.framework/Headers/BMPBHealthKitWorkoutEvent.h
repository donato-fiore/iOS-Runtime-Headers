// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMPBHEALTHKITWORKOUTEVENT_H
#define BMPBHEALTHKITWORKOUTEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BMPBHealthKitWorkoutEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *activityType; // ivar: _activityType
@property (retain, nonatomic) NSString *activityUUID; // ivar: _activityUUID
@property (nonatomic) int eventType; // ivar: _eventType
@property (readonly, nonatomic) BOOL hasActivityType;
@property (readonly, nonatomic) BOOL hasActivityUUID;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) BOOL hasIsFirstPartyDonation;
@property (nonatomic) BOOL hasIsIndoor;
@property (nonatomic) BOOL hasIsUpdate;
@property (nonatomic) BOOL isFirstPartyDonation; // ivar: _isFirstPartyDonation
@property (nonatomic) BOOL isIndoor; // ivar: _isIndoor
@property (nonatomic) BOOL isUpdate; // ivar: _isUpdate


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eventTypeAsString:(int)arg0 ;
-(int)StringAsEventType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif