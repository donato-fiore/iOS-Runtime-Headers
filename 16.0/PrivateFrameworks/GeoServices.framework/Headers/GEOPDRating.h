// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPDRATING_H
#define GEOPDRATING_H

@class PBCodable, PBUnknownFields, NSMutableArray;
@protocol NSCopying;



@interface GEOPDRating : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_appleRatingCategorys;
    CGFloat _maxScore;
    CGFloat _score;
    int _numRatingsUsedForScore;
    int _ratingType;
    ? _flags;
}




+(id)ratingForPlaceData:(id)arg0 type:(int)arg1 ;
+(id)ratingListForPlaceData:(id)arg0 type:(int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)displayTitle;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif