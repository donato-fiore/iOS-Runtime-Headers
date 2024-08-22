// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMQUERY_H
#define PMQUERY_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "PMQueryNode.h"
#import "PMParameters.h"

@interface PMQuery : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *country; // ivar: _country
@property (readonly, nonatomic) BOOL hasCountry;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (readonly, nonatomic) BOOL hasOriginalQuery;
@property (readonly, nonatomic) BOOL hasRawQuery;
@property (readonly, nonatomic) BOOL hasRoot;
@property (readonly, nonatomic) BOOL hasSearchParams;
@property (readonly, nonatomic) BOOL hasTokenizedQuery;
@property (retain, nonatomic) NSString *language; // ivar: _language
@property (retain, nonatomic) NSString *originalQuery; // ivar: _originalQuery
@property (retain, nonatomic) NSString *rawQuery; // ivar: _rawQuery
@property (retain, nonatomic) PMQueryNode *root; // ivar: _root
@property (retain, nonatomic) PMParameters *searchParams; // ivar: _searchParams
@property (retain, nonatomic) NSString *tokenizedQuery; // ivar: _tokenizedQuery


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(CGFloat)_evalTimeExpression:(int)arg0 deltaString:(char *)arg1 ;
-(NSUInteger)hash;
-(id)_parse:(id)arg0 ;
-(id)_stringifyQueryTree:(id)arg0 indent:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCSQueryString:(id)arg0 optimize:(BOOL)arg1 ;
-(id)initWithQueryString:(id)arg0 ;
-(id)optimizeQuery:(id)arg0 originalQueryParts:(id)arg1 ;
-(id)removeWildCard:(id)arg0 ;
-(int)_lookupAttribute:(id)arg0 ;
-(int)_lookupOperator:(int)arg0 ;
-(void)_build:(*void)arg0 stack:(id)arg1 ;
-(void)_printQueryTree:(id)arg0 ;
-(void)addFiltersToQuery:(id)arg0 optimize:(BOOL)arg1 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif