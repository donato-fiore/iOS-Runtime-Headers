// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ABVALUEPREDICATE_H
#define ABVALUEPREDICATE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "ABPredicate.h"

@interface ABValuePredicate : ABPredicate {
    NSArray *_orderedKeys;
    BOOL _dictionaryValue;
}


@property (nonatomic) NSInteger comparison; // ivar: _comparison
@property (nonatomic) int property; // ivar: _property
@property (copy, nonatomic) NSObject *value; // ivar: _value


+(id)stringForComparison:(id)arg0 withComparision:(NSInteger)arg1 ;
-(BOOL)_allowsLaxCheckingForFTS;
-(BOOL)_shouldConsultIndexForKey:(id)arg0 ;
-(BOOL)_supportsFTSSearch;
-(BOOL)isValid;
-(id)_ftsAllQueryStrings;
-(id)_ftsTermStringForString:(id)arg0 ;
-(id)_ftsTokenizedTermStringForString:(id)arg0 ;
-(id)init;
-(id)predicateFormat;
-(id)queryJoinsInCompound:(BOOL)arg0 predicateIdentifier:(int)arg1 ;
-(id)querySelectPropertiesForPredicateIdentifier:(int)arg0 ;
-(id)queryWhereStringForPredicateIdentifier:(int)arg0 ;
-(id)stringForComparison:(id)arg0 ;
-(void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement *)arg0 withBindingOffset:(*int)arg1 predicateIdentifier:(int)arg2 ;
-(void)dealloc;


@end


#endif