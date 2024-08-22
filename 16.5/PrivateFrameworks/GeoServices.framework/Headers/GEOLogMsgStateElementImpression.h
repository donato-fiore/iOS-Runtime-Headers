// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOLOGMSGSTATEELEMENTIMPRESSION_H
#define GEOLOGMSGSTATEELEMENTIMPRESSION_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;


#import "GEOElementDetails.h"
#import "GEOImpressionObjectId.h"

@interface GEOLogMsgStateElementImpression : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOElementDetails *_element;
    NSUInteger _impressNonvisibleTsInMs;
    NSUInteger _impressVisibleTsInMs;
    GEOImpressionObjectId *_impressionObjectId;
    NSString *_query;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _elementSource;
    int _impressEvent;
    ? _flags;
}


@property (retain, nonatomic) GEOElementDetails *element;
@property (nonatomic) int elementSource;
@property (readonly, nonatomic) BOOL hasElement;
@property (nonatomic) BOOL hasElementSource;
@property (nonatomic) BOOL hasImpressEvent;
@property (nonatomic) BOOL hasImpressNonvisibleTsInMs;
@property (nonatomic) BOOL hasImpressVisibleTsInMs;
@property (readonly, nonatomic) BOOL hasImpressionObjectId;
@property (readonly, nonatomic) BOOL hasQuery;
@property (nonatomic) int impressEvent;
@property (nonatomic) NSUInteger impressNonvisibleTsInMs;
@property (nonatomic) NSUInteger impressVisibleTsInMs;
@property (retain, nonatomic) GEOImpressionObjectId *impressionObjectId;
@property (retain, nonatomic) NSString *query;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)elementSourceAsString:(int)arg0 ;
-(id)impressEventAsString:(int)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsElementSource:(id)arg0 ;
-(int)StringAsImpressEvent:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif