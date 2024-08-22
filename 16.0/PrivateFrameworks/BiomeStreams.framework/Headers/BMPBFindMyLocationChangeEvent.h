// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPBFINDMYLOCATIONCHANGEEVENT_H
#define BMPBFINDMYLOCATIONCHANGEEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BMPBFindMyLocationChangeEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int activityState; // ivar: _activityState
@property (nonatomic) BOOL hasActivityState;
@property (readonly, nonatomic) BOOL hasIdsHandle;
@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) BOOL hasLocationChangeType;
@property (nonatomic) BOOL hasLongitude;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *idsHandle; // ivar: _idsHandle
@property (nonatomic) CGFloat latitude; // ivar: _latitude
@property (nonatomic) int locationChangeType; // ivar: _locationChangeType
@property (nonatomic) CGFloat longitude; // ivar: _longitude
@property (retain, nonatomic) NSString *name; // ivar: _name


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)activityStateAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)locationChangeTypeAsString:(int)arg0 ;
-(int)StringAsActivityState:(id)arg0 ;
-(int)StringAsLocationChangeType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif