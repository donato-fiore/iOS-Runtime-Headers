// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOLOGMSGEVENTCLIENTACSUGGESTIONS_H
#define GEOLOGMSGEVENTCLIENTACSUGGESTIONS_H

@class PBCodable, PBDataReader, NSMutableArray, NSString;
@protocol NSCopying;



@interface GEOLogMsgEventClientACSuggestions : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSMutableArray *_entries;
    NSInteger _overallLatencyInMs;
    NSMutableArray *_queryTokens;
    NSString *_query;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _keypressStatus;
    int _selectedIndex;
    int _selectedSectionIndex;
    int _trigger;
    int _withinSectionSelectedIndex;
    BOOL _isRerankerTriggered;
    BOOL _isRetainedQuery;
    BOOL _shouldDifferentiateClientAndServerResults;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *entries;
@property (nonatomic) BOOL hasIsRerankerTriggered;
@property (nonatomic) BOOL hasIsRetainedQuery;
@property (nonatomic) BOOL hasKeypressStatus;
@property (nonatomic) BOOL hasOverallLatencyInMs;
@property (readonly, nonatomic) BOOL hasQuery;
@property (nonatomic) BOOL hasSelectedIndex;
@property (nonatomic) BOOL hasSelectedSectionIndex;
@property (nonatomic) BOOL hasShouldDifferentiateClientAndServerResults;
@property (nonatomic) BOOL hasTrigger;
@property (nonatomic) BOOL hasWithinSectionSelectedIndex;
@property (nonatomic) BOOL isRerankerTriggered;
@property (nonatomic) BOOL isRetainedQuery;
@property (nonatomic) int keypressStatus;
@property (nonatomic) NSInteger overallLatencyInMs;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSMutableArray *queryTokens;
@property (nonatomic) int selectedIndex;
@property (nonatomic) int selectedSectionIndex;
@property (nonatomic) BOOL shouldDifferentiateClientAndServerResults;
@property (nonatomic) int trigger;
@property (nonatomic) int withinSectionSelectedIndex;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)entriesAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)keypressStatusAsString:(int)arg0 ;
-(id)queryTokensAtIndex:(NSUInteger)arg0 ;
-(id)triggerAsString:(int)arg0 ;
-(int)StringAsKeypressStatus:(id)arg0 ;
-(int)StringAsTrigger:(id)arg0 ;
-(void)addEntries:(id)arg0 ;
-(void)addQueryTokens:(id)arg0 ;
-(void)clearEntries;
-(void)clearQueryTokens;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif