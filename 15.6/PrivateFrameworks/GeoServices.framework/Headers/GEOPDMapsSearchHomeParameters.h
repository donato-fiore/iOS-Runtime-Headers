// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPDMAPSSEARCHHOMEPARAMETERS_H
#define GEOPDMAPSSEARCHHOMEPARAMETERS_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOPDCollectionSuggestionParameters.h"
#import "GEOPDGuidesLocationsSuggestionParameters.h"
#import "GEOPDPlaceSuggestionParameters.h"
#import "GEOPDPublisherSuggestionParameters.h"
#import "GEOPDSearchBrowseCategorySuggestionParameters.h"

@interface GEOPDMapsSearchHomeParameters : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _supportedSectionTypes;
    GEOPDCollectionSuggestionParameters *_collectionSuggestionParameters;
    GEOPDGuidesLocationsSuggestionParameters *_guidesLocationsSuggestionParameters;
    GEOPDPlaceSuggestionParameters *_placeSuggestionParameters;
    GEOPDPublisherSuggestionParameters *_publisherSuggestionParameters;
    GEOPDSearchBrowseCategorySuggestionParameters *_searchBrowseCategorySuggestionParameters;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
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