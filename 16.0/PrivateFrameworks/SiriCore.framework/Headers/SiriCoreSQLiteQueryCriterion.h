// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRICORESQLITEQUERYCRITERION_H
#define SIRICORESQLITEQUERYCRITERION_H

@class NSString, NSArray;
@protocol NSCopying, SiriCoreSQLiteValue;

#import <Foundation/Foundation.h>


@interface SiriCoreSQLiteQueryCriterion : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *columnName; // ivar: _columnName
@property (readonly, nonatomic) NSInteger comparisonOperator; // ivar: _comparisonOperator
@property (readonly, nonatomic) NSInteger logicalOperator; // ivar: _logicalOperator
@property (readonly, copy, nonatomic) NSArray *subcriteria; // ivar: _subcriteria
@property (readonly, copy, nonatomic) NSObject<SiriCoreSQLiteValue> *value; // ivar: _value
@property (readonly, copy, nonatomic) NSArray *values; // ivar: _values


+(id)andQueryCriterionWithSubcriteria:(id)arg0 ;
+(id)andQueryCriterionWithSubcriteriaProvider:(id)arg0 ;
+(id)betweenQueryCriterionWithColumnName:(id)arg0 fromValue:(id)arg1 toValue:(id)arg2 negation:(BOOL)arg3 ;
+(id)equalToQueryCriterionWithColumnName:(id)arg0 value:(id)arg1 ;
+(id)greaterThanOrEqualToQueryCriterionWithColumnName:(id)arg0 value:(id)arg1 ;
+(id)greaterThanQueryCriterionWithColumnName:(id)arg0 value:(id)arg1 ;
+(id)inQueryCriterionWithColumnName:(id)arg0 values:(id)arg1 negation:(BOOL)arg2 ;
+(id)isNullQueryCriterionWithColumnName:(id)arg0 negation:(BOOL)arg1 ;
+(id)isQueryCriterionWithColumnName:(id)arg0 value:(id)arg1 negation:(BOOL)arg2 ;
+(id)lessThanOrEqualToQueryCriterionWithColumnName:(id)arg0 value:(id)arg1 ;
+(id)lessThanQueryCriterionWithColumnName:(id)arg0 value:(id)arg1 ;
+(id)likeQueryCriterionWithColumnName:(id)arg0 value:(id)arg1 negation:(BOOL)arg2 ;
+(id)notEqualToQueryCriterionWithColumnName:(id)arg0 value:(id)arg1 ;
+(id)orQueryCriterionWithSubcriteria:(id)arg0 ;
+(id)orQueryCriterionWithSubcriteriaProvider:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithColumnName:(id)arg0 comparisonOperator:(NSInteger)arg1 logicalOperator:(NSInteger)arg2 value:(id)arg3 values:(id)arg4 subcriteria:(id)arg5 ;
-(id)initWithColumnName:(id)arg0 comparisonOperator:(NSInteger)arg1 logicalOperator:(NSInteger)arg2 value:(id)arg3 values:(id)arg4 subcriteriaProvider:(id)arg5 ;


@end


#endif