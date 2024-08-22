// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMPBPHOTOSKNOWLEDGEGRAPHENRICHMENTLOCATION_H
#define BMPBPHOTOSKNOWLEDGEGRAPHENRICHMENTLOCATION_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface BMPBPhotosKnowledgeGraphEnrichmentLocation : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *city; // ivar: _city
@property (retain, nonatomic) NSString *country; // ivar: _country
@property (retain, nonatomic) NSData *encodedLocation; // ivar: _encodedLocation
@property (readonly, nonatomic) BOOL hasCity;
@property (readonly, nonatomic) BOOL hasCountry;
@property (readonly, nonatomic) BOOL hasEncodedLocation;
@property (readonly, nonatomic) BOOL hasState;
@property (readonly, nonatomic) BOOL hasStreet;
@property (retain, nonatomic) NSString *state; // ivar: _state
@property (retain, nonatomic) NSString *street; // ivar: _street


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