// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOELEMENTDETAILS_H
#define GEOELEMENTDETAILS_H

@class PBCodable;
@protocol NSCopying;



@interface GEOElementDetails : PBCodable <NSCopying>

 {
    NSUInteger _businessId;
    unsigned int _elementIndex;
    int _elementType;
    unsigned int _localSearchProviderId;
    BOOL _isEnrichedResult;
    ? _flags;
}


@property (nonatomic) NSUInteger businessId;
@property (nonatomic) unsigned int elementIndex;
@property (nonatomic) int elementType;
@property (nonatomic) BOOL hasBusinessId;
@property (nonatomic) BOOL hasElementIndex;
@property (nonatomic) BOOL hasElementType;
@property (nonatomic) BOOL hasIsEnrichedResult;
@property (nonatomic) BOOL hasLocalSearchProviderId;
@property (nonatomic) BOOL isEnrichedResult;
@property (nonatomic) unsigned int localSearchProviderId;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)elementTypeAsString:(int)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsElementType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif