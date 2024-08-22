// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOLOGMSGEVENTMAPKITCOUNTS_H
#define GEOLOGMSGEVENTMAPKITCOUNTS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface GEOLogMsgEventMapKitCounts : PBCodable <NSCopying>

 {
    NSMutableArray *_mapKitCounts;
}


@property (retain, nonatomic) NSMutableArray *mapKitCounts;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)mapKitCountsAtIndex:(NSUInteger)arg0 ;
-(void)addMapKitCounts:(id)arg0 ;
-(void)clearMapKitCounts;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif