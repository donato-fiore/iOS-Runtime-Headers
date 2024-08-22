// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLPBAROCALIBRATIONINDICATION_H
#define CLPBAROCALIBRATIONINDICATION_H

@class PBCodable;
@protocol NSCopying;



@interface CLPBaroCalibrationIndication : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIsCalibratedBarometricAlt;
@property (nonatomic) BOOL hasIsMapMatched;
@property (nonatomic) BOOL hasIsOutdoorContext;
@property (nonatomic) BOOL hasMapMatchRoadType;
@property (nonatomic) BOOL hasOutdoorConfidence;
@property (nonatomic) BOOL isCalibratedBarometricAlt; // ivar: _isCalibratedBarometricAlt
@property (nonatomic) BOOL isMapMatched; // ivar: _isMapMatched
@property (nonatomic) BOOL isOutdoorContext; // ivar: _isOutdoorContext
@property (nonatomic) int mapMatchRoadType; // ivar: _mapMatchRoadType
@property (nonatomic) CGFloat outdoorConfidence; // ivar: _outdoorConfidence


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)mapMatchRoadTypeAsString:(int)arg0 ;
-(int)StringAsMapMatchRoadType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif