// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPREGIONBOOKMARK_H
#define MSPREGIONBOOKMARK_H

@class PBCodable, PBUnknownFields, GEOMapRegion, NSString;
@protocol NSCopying;



@interface MSPRegionBookmark : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
}


@property (readonly, nonatomic) BOOL hasRegion;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) GEOMapRegion *region; // ivar: _region
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


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