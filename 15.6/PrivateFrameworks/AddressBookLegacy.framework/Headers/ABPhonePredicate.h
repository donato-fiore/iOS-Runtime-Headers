// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ABPHONEPREDICATE_H
#define ABPHONEPREDICATE_H

@class NSString;


#import "ABPredicate.h"

@interface ABPhonePredicate : ABPredicate {
    NSString *_homeCountryCode;
}


@property (copy, nonatomic) NSString *country; // ivar: _country
@property (copy, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber


-(BOOL)hasCallback;
-(BOOL)isValid;
-(id)homeCountryCode;
-(id)predicateFormat;
-(id)queryJoinsInCompound:(BOOL)arg0 predicateIdentifier:(int)arg1 ;
-(id)queryWhereStringForPredicateIdentifier:(int)arg0 ;
-(void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement *)arg0 withBindingOffset:(*int)arg1 predicateIdentifier:(int)arg2 ;
-(void)dealloc;
-(void)evaluateCallbackWithSqliteContext:(struct sqlite3_context *)arg0 predicateContext:(id)arg1 values:(struct sqlite3_value **)arg2 count:(int)arg3 ;


@end


#endif