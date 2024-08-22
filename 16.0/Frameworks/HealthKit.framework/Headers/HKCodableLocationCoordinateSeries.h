// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCODABLELOCATIONCOORDINATESERIES_H
#define HKCODABLELOCATIONCOORDINATESERIES_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface HKCodableLocationCoordinateSeries : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *coordinates; // ivar: _coordinates
@property (nonatomic) BOOL hasResumeDate;
@property (nonatomic) CGFloat resumeDate; // ivar: _resumeDate


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)coordinatesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addCoordinates:(id)arg0 ;
-(void)clearCoordinates;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif