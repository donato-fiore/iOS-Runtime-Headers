// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPDSEARCHINTENT_H
#define GEOPDSEARCHINTENT_H

@class PBCodable, PBDataReader, NSMutableArray;
@protocol NSCopying;


#import "GEOPDSearchAttributeIntent.h"
#import "GEOPDSearchBusinessIntent.h"
#import "GEOPDSearchCategoryIntent.h"
#import "GEOPDSearchChainIntent.h"
#import "GEOPDSearchClientResolvedIntent.h"
#import "GEOPDSearchDirectionIntent.h"
#import "GEOPDSearchGeoIntent.h"
#import "GEOPDSearchKeywordIntent.h"
#import "GEOPDSearchLocationIntent.h"
#import "GEOPDSearchPhoneNumberIntent.h"
#import "GEOPDSearchProximityIntent.h"
#import "GEOPDSearchSearchFilterIntent.h"
#import "GEOPDSearchTransitIntent.h"

@interface GEOPDSearchIntent : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOPDSearchAttributeIntent *_attributeIntent;
    GEOPDSearchBusinessIntent *_businessIntent;
    GEOPDSearchCategoryIntent *_categoryIntent;
    GEOPDSearchChainIntent *_chainIntent;
    GEOPDSearchClientResolvedIntent *_clientResolvedIntent;
    GEOPDSearchDirectionIntent *_directionIntent;
    GEOPDSearchGeoIntent *_geoIntent;
    GEOPDSearchKeywordIntent *_keywordIntent;
    NSMutableArray *_languageCodes;
    GEOPDSearchLocationIntent *_locationIntent;
    GEOPDSearchPhoneNumberIntent *_phoneNumberIntent;
    GEOPDSearchProximityIntent *_proximityIntent;
    GEOPDSearchSearchFilterIntent *_searchFilterIntent;
    GEOPDSearchTransitIntent *_transitIntent;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _intentSpanIndex;
    int _intentType;
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
-(void)writeTo:(id)arg0 ;


@end


#endif