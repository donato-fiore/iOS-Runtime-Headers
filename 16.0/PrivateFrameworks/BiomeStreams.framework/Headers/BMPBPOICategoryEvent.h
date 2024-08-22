// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPBPOICATEGORYEVENT_H
#define BMPBPOICATEGORYEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BMPBPOICategoryEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasPoiCategory;
@property (nonatomic) BOOL hasRank;
@property (nonatomic) BOOL hasTimeIntervalSince1970;
@property (retain, nonatomic) NSString *poiCategory; // ivar: _poiCategory
@property (nonatomic) unsigned int rank; // ivar: _rank
@property (nonatomic) CGFloat timeIntervalSince1970; // ivar: _timeIntervalSince1970


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