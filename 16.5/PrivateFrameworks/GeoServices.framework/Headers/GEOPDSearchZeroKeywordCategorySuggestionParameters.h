// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDSEARCHZEROKEYWORDCATEGORYSUGGESTIONPARAMETERS_H
#define GEOPDSEARCHZEROKEYWORDCATEGORYSUGGESTIONPARAMETERS_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;


#import "GEOLatLng.h"

@interface GEOPDSearchZeroKeywordCategorySuggestionParameters : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    CGFloat _requestLocalTimestamp;
    GEOLatLng *_significantLocation;
    unsigned int _maxNumCategoriesPerEntry;
    int _userPreferredTransportType;
    BOOL _shouldMatchNoQueryStateSuggestions;
    ? _flags;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif