// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCODABLEWORKOUTCONFIGURATION_H
#define HDCODABLEWORKOUTCONFIGURATION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HDCodableWorkoutConfiguration : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger activityType; // ivar: _activityType
@property (nonatomic) BOOL hasActivityType;
@property (nonatomic) BOOL hasLocationType;
@property (readonly, nonatomic) BOOL hasWLengthUnitString;
@property (nonatomic) BOOL hasWLengthValue;
@property (nonatomic) BOOL hasWLocationType;
@property (nonatomic) NSInteger locationType; // ivar: _locationType
@property (retain, nonatomic) NSString *wLengthUnitString; // ivar: _wLengthUnitString
@property (nonatomic) CGFloat wLengthValue; // ivar: _wLengthValue
@property (nonatomic) NSInteger wLocationType; // ivar: _wLocationType


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