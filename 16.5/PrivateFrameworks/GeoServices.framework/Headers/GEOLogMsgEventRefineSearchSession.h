// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOLOGMSGEVENTREFINESEARCHSESSION_H
#define GEOLOGMSGEVENTREFINESEARCHSESSION_H

@class PBCodable, PBDataReader, NSString, NSMutableArray;
@protocol NSCopying;



@interface GEOLogMsgEventRefineSearchSession : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_searchString;
    NSMutableArray *_suggestionItems;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _refineSearchType;
    int _searchType;
    ? _flags;
}


@property (nonatomic) BOOL hasRefineSearchType;
@property (readonly, nonatomic) BOOL hasSearchString;
@property (nonatomic) BOOL hasSearchType;
@property (nonatomic) int refineSearchType;
@property (retain, nonatomic) NSString *searchString;
@property (nonatomic) int searchType;
@property (retain, nonatomic) NSMutableArray *suggestionItems;


+(BOOL)isValid:(id)arg0 ;
+(Class)suggestionItemType;
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
-(id)refineSearchTypeAsString:(int)arg0 ;
-(id)searchTypeAsString:(int)arg0 ;
-(id)suggestionItemAtIndex:(NSUInteger)arg0 ;
-(int)StringAsRefineSearchType:(id)arg0 ;
-(int)StringAsSearchType:(id)arg0 ;
-(void)addSuggestionItem:(id)arg0 ;
-(void)clearSuggestionItems;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif