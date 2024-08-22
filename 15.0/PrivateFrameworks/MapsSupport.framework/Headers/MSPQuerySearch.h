// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSPQUERYSEARCH_H
#define MSPQUERYSEARCH_H

@class PBCodable, PBUnknownFields, NSString, GEOMapRegion;
@protocol NSCopying;



@interface MSPQuerySearch : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
}


@property (readonly, nonatomic) BOOL hasLanguage;
@property (readonly, nonatomic) BOOL hasLocationDisplayString;
@property (readonly, nonatomic) BOOL hasMapRegion;
@property (readonly, nonatomic) BOOL hasQuery;
@property (retain, nonatomic) NSString *language; // ivar: _language
@property (retain, nonatomic) NSString *locationDisplayString; // ivar: _locationDisplayString
@property (retain, nonatomic) GEOMapRegion *mapRegion; // ivar: _mapRegion
@property (retain, nonatomic) NSString *query; // ivar: _query
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