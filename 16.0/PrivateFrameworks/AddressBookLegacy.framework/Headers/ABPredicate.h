// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABPREDICATE_H
#define ABPREDICATE_H

@class NSPredicate;



@interface ABPredicate : NSPredicate



+(?)newQueryFromABPredicate:(?)arg0 withSortOrder:(?)arg1 ranked:(?)arg2 addressBookpropertyIndices;
+(?)newQueryFromCompoundPredicate:(?)arg0 withSortOrder:(?)arg1 ranked:(?)arg2 addressBookpropertyIndices;
+(?)newQueryWithProperties:(?)arg0 joins:(?)arg1 whereString:(?)arg2 sortOrder:(?)arg3 rankString:(?)arg4 groupByProperties:(?)arg5 addressBookpropertyIndices;
+(id)personPredicateWithAnyValueForProperty:(int)arg0 ;
+(id)personPredicateWithGroup:(*void)arg0 source:(*void)arg1 account:(id)arg2 ;
+(id)personPredicateWithName:(id)arg0 addressBook:(*void)arg1 ;
+(id)personPredicateWithNameLike:(id)arg0 addressBook:(*void)arg1 ;
+(id)personPredicateWithNameLike:(id)arg0 group:(*void)arg1 source:(*void)arg2 account:(id)arg3 addressBook:(*void)arg4 ;
+(id)personPredicateWithNameLike:(id)arg0 group:(*void)arg1 source:(*void)arg2 account:(id)arg3 includeSourceInResults:(BOOL)arg4 addressBook:(*void)arg5 ;
+(id)personPredicateWithNameLike:(id)arg0 groups:(id)arg1 sources:(id)arg2 addressBook:(*void)arg3 ;
+(id)personPredicateWithNameLike:(id)arg0 groups:(id)arg1 sources:(id)arg2 includeSourceInResults:(BOOL)arg3 addressBook:(*void)arg4 ;
+(id)personPredicateWithNameLike:(id)arg0 groups:(id)arg1 sources:(id)arg2 includeSourceInResults:(BOOL)arg3 includePhotosInResults:(BOOL)arg4 addressBook:(*void)arg5 ;
+(id)personPredicateWithNameOnly:(id)arg0 account:(id)arg1 addressBook:(*void)arg2 ;
+(id)personPredicateWithPhoneLike:(id)arg0 countryHint:(id)arg1 addressBook:(*void)arg2 ;
+(id)personPredicateWithValue:(id)arg0 comparison:(NSInteger)arg1 forProperty:(int)arg2 ;
+(void)searchPeopleWithPredicate:(id)arg0 sortOrder:(unsigned int)arg1 inAddressBook:(*void)arg2 withDelegate:(id)arg3 ;
+(void)searchPeopleWithPredicate:(id)arg0 sortOrder:(unsigned int)arg1 ranked:(BOOL)arg2 inAddressBook:(*void)arg3 withDelegate:(id)arg4 ;
-(BOOL)ab_hasCallback;
-(BOOL)hasCallback;
-(BOOL)isValid;
-(id)_querySelectStringForPredicateIdentifier:(int)arg0 ;
-(id)ab_newQueryWithSortOrder:(unsigned int)arg0 ranked:(BOOL)arg1 addressBook:(*void)arg2 propertyIndices:(struct __CFDictionary **)arg3 ;
-(id)callbackContext;
-(id)init;
-(id)predicateFormat;
-(id)queryGroupByProperties;
-(id)queryJoinsInCompound:(BOOL)arg0 predicateIdentifier:(int)arg1 ;
-(id)queryRankStringForPredicateIdentifier:(int)arg0 ;
-(id)querySelectPropertiesForPredicateIdentifier:(int)arg0 ;
-(id)querySerializationIdentifier;
-(id)queryWhereStringForPredicateIdentifier:(int)arg0 ;
-(void)ab_addCallbackContextToArray:(id)arg0 ;
-(void)ab_bindJoinClauseComponentOfStatement:(struct CPSqliteStatement *)arg0 withBindingOffset:(*int)arg1 predicateIdentifier:(int)arg2 ;
-(void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement *)arg0 withBindingOffset:(*int)arg1 predicateIdentifier:(int)arg2 ;
-(void)bindDouble:(CGFloat)arg0 toStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(*int)arg2 ;
-(void)bindString:(id)arg0 toStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(*int)arg2 ;
-(void)dealloc;
-(void)evaluateCallbackWithSqliteContext:(struct sqlite3_context *)arg0 predicateContext:(id)arg1 values:(struct sqlite3_value **)arg2 count:(int)arg3 ;


@end


#endif