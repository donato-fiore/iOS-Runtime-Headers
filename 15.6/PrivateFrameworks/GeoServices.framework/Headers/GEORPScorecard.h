// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEORPSCORECARD_H
#define GEORPSCORECARD_H

@class PBCodable, PBDataReader, NSMutableArray, NSString;
@protocol NSCopying;



@interface GEORPScorecard : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSMutableArray *_categoryRatings;
    NSString *_version;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    BOOL _recommended;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *categoryRatings;
@property (nonatomic) BOOL hasRecommended;
@property (readonly, nonatomic) BOOL hasVersion;
@property (nonatomic) BOOL recommended;
@property (retain, nonatomic) NSString *version;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)categoryRatingsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)addCategoryRatings:(id)arg0 ;
-(void)clearCategoryRatings;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif