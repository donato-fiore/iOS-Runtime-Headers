// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDMAILSEARCHENGAGEMENT_H
#define AWDMAILSEARCHENGAGEMENT_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "AWDMailUserSuggestionsEngagment.h"

@interface AWDMailSearchEngagement : PBCodable <NSCopying>

 {
    ? _atoms;
    ? _has;
}


@property (readonly, nonatomic) *int atoms;
@property (readonly, nonatomic) NSUInteger atomsCount;
@property (retain, nonatomic) NSMutableArray *engagements; // ivar: _engagements
@property (nonatomic) BOOL hasNumSearchResults;
@property (nonatomic) BOOL hasSearchScope;
@property (readonly, nonatomic) BOOL hasSuggestionsEngagement;
@property (nonatomic) NSUInteger numSearchResults; // ivar: _numSearchResults
@property (nonatomic) int searchScope; // ivar: _searchScope
@property (retain, nonatomic) AWDMailUserSuggestionsEngagment *suggestionsEngagement; // ivar: _suggestionsEngagement


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)atomsAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)engagementsAtIndex:(NSUInteger)arg0 ;
-(id)initWithAtoms:(id)arg0 searchScope:(BOOL)arg1 suggestionsEngagement:(id)arg2 ;
-(id)searchScopeAsString:(int)arg0 ;
-(int)StringAsAtoms:(id)arg0 ;
-(int)StringAsSearchScope:(id)arg0 ;
-(int)atomsAtIndex:(NSUInteger)arg0 ;
-(void)addAtoms:(int)arg0 ;
-(void)addEngagements:(id)arg0 ;
-(void)clearAtoms;
-(void)clearEngagements;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif