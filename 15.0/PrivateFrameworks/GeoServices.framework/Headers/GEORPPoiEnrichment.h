// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORPPOIENRICHMENT_H
#define GEORPPOIENRICHMENT_H

@class PBCodable, PBDataReader, NSMutableArray;
@protocol NSCopying;


#import "GEORPScorecard.h"

@interface GEORPPoiEnrichment : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSMutableArray *_images;
    GEORPScorecard *_scorecard;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasScorecard;
@property (retain, nonatomic) NSMutableArray *images;
@property (retain, nonatomic) GEORPScorecard *scorecard;


+(BOOL)isValid:(id)arg0 ;
+(Class)imageType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)imageAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)addImage:(id)arg0 ;
-(void)clearImages;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif