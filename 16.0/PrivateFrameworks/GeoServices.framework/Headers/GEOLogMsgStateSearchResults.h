// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOLOGMSGSTATESEARCHRESULTS_H
#define GEOLOGMSGSTATESEARCHRESULTS_H

@class PBCodable, PBDataReader, NSString, NSMutableArray;
@protocol NSCopying;



@interface GEOLogMsgStateSearchResults : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_searchQuery;
    NSMutableArray *_searchResults;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    BOOL _includesEnrichedResult;
    ? _flags;
}


@property (nonatomic) BOOL hasIncludesEnrichedResult;
@property (readonly, nonatomic) BOOL hasSearchQuery;
@property (nonatomic) BOOL includesEnrichedResult;
@property (retain, nonatomic) NSString *searchQuery;
@property (retain, nonatomic) NSMutableArray *searchResults;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)searchResultsAtIndex:(NSUInteger)arg0 ;
-(void)addSearchResults:(id)arg0 ;
-(void)clearSearchResults;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif