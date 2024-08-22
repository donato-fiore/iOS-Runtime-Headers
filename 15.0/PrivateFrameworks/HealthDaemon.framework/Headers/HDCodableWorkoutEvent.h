// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCODABLEWORKOUTEVENT_H
#define HDCODABLEWORKOUTEVENT_H

@class PBCodable;
@protocol NSCopying;


#import "HDCodableMetadataDictionary.h"

@interface HDCodableWorkoutEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat date; // ivar: _date
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) BOOL hasDate;
@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) BOOL hasMetadataDictionary;
@property (nonatomic) BOOL hasSwimmingStrokeStyle;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) HDCodableMetadataDictionary *metadataDictionary; // ivar: _metadataDictionary
@property (nonatomic) NSInteger swimmingStrokeStyle; // ivar: _swimmingStrokeStyle
@property (nonatomic) NSInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decodedDateIntervalStartDate;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif