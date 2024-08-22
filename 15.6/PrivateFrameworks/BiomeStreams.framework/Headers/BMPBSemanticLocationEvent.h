// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMPBSEMANTICLOCATIONEVENT_H
#define BMPBSEMANTICLOCATIONEVENT_H

@class PBCodable;
@protocol NSCopying;



@interface BMPBSemanticLocationEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasPlaceType;
@property (nonatomic) BOOL hasStarting;
@property (nonatomic) BOOL hasUserSpecificPlaceType;
@property (nonatomic) int placeType; // ivar: _placeType
@property (nonatomic) BOOL starting; // ivar: _starting
@property (nonatomic) int userSpecificPlaceType; // ivar: _userSpecificPlaceType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)placeTypeAsString:(int)arg0 ;
-(id)userSpecificPlaceTypeAsString:(int)arg0 ;
-(int)StringAsPlaceType:(id)arg0 ;
-(int)StringAsUserSpecificPlaceType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif