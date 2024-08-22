// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDATTRIBUTION_H
#define GEOPDATTRIBUTION_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSMutableArray;
@protocol NSCopying;



@interface GEOPDAttribution : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_actionUrlComponent;
    NSMutableArray *_attributionUrls;
    NSString *_externalComponentId;
    NSString *_externalItemId;
    NSString *_vendorId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}




+(id)attributionForAnnotatedItemList:(id)arg0 placeData:(id)arg1 ;
+(id)attributionForPlaceDataEncyclopedia:(id)arg0 ;
+(id)attributionForPlaceDataEntity:(id)arg0 ;
+(id)attributionForPlaceDataRestaurantReservationLink:(id)arg0 ;
+(id)attributionForPlaceDataReview:(id)arg0 ;
+(id)componentLevelAttributionForPlaceDataPhotos:(id)arg0 ;
-(BOOL)_isYelp;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif