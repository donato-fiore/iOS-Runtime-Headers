// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ABNAMEPREDICATE_H
#define ABNAMEPREDICATE_H

@class NSString, NSArray;


#import "ABPredicate.h"

@interface ABNamePredicate : ABPredicate {
    *void _addressBook;
    *void _tokenizations;
    *__CFArray _tokenizationSortKeys;
}


@property (copy, nonatomic) NSString *accountIdentifier;
@property (nonatomic) *void addressBook;
@property (nonatomic) BOOL generateExceprts; // ivar: _generateExceprts
@property (nonatomic) *void group;
@property (retain, nonatomic) NSArray *groups; // ivar: _groups
@property (nonatomic) BOOL matchPersonOrCompanyNamesExclusively; // ivar: _matchPersonOrCompanyNamesExclusively
@property (nonatomic) BOOL matchPreferredName; // ivar: _matchPreferredName
@property (nonatomic) BOOL matchWholeWords; // ivar: _matchWholeWords
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSArray *scopedContactIdentifiers; // ivar: _scopedContactIdentifiers
@property (nonatomic) *void source;
@property (retain, nonatomic) NSArray *sources; // ivar: _sources


-(*void)tokenizations;
-(BOOL)isValid;
-(id)_matchClauseForColumns:(id)arg0 requiringAllTerms:(BOOL)arg1 ;
-(id)_personNameKeys;
-(id)_personNonNameKeys;
-(id)ab_metadataForMatchingRow:(struct CPSqliteStatement *)arg0 columnOffset:(int)arg1 ;
-(id)emphasizedExcerptStringForMatchString:(id)arg0 ;
-(id)init;
-(id)predicateFormat;
-(id)queryJoinsInCompound:(BOOL)arg0 predicateIdentifier:(int)arg1 ;
-(id)queryRankStringForPredicateIdentifier:(int)arg0 ;
-(id)querySelectPropertiesForPredicateIdentifier:(int)arg0 ;
-(id)queryWhereStringForPredicateIdentifier:(int)arg0 ;
-(void)ab_bindJoinClauseComponentOfStatement:(struct CPSqliteStatement *)arg0 withBindingOffset:(*int)arg1 predicateIdentifier:(int)arg2 ;
-(void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement *)arg0 withBindingOffset:(*int)arg1 predicateIdentifier:(int)arg2 ;
-(void)dealloc;


@end


#endif