// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORATING_H
#define GEORATING_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSMutableArray;
@protocol NSCopying;



@interface GEORating : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_uRL;
    CGFloat _maxScore;
    NSString *_provider;
    NSString *_ratingCategoryId;
    NSMutableArray *_reviews;
    CGFloat _score;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _numberOfRatings;
    int _numberOfReviews;
    ? _flags;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithSampleSizeForUserRatingScore:(unsigned int)arg0 normalizedUserRatingScore:(float)arg1 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif