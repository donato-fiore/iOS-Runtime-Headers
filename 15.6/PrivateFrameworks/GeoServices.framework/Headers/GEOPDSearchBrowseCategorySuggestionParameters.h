// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPDSEARCHBROWSECATEGORYSUGGESTIONPARAMETERS_H
#define GEOPDSEARCHBROWSECATEGORYSUGGESTIONPARAMETERS_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOPDVenueIdentifier.h"
#import "GEOPDViewportInfo.h"

@interface GEOPDSearchBrowseCategorySuggestionParameters : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _engineTypes;
    CGFloat _requestLocalTimestamp;
    GEOPDVenueIdentifier *_venueFilter;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _minimumNumberOfCategories;
    int _preferredTransportType;
    int _suggestionType;
    BOOL _isCarplayRequest;
    BOOL _isFlatCategoryListRequest;
    BOOL _isFromNoQueryState;
    BOOL _isWidgetRequest;
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
-(id)jsonRepresentation;
-(void)dealloc;
-(void)writeTo:(id)arg0 ;


@end


#endif