// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDWORKOUTSTATISTICSPREDICATE_H
#define HDWORKOUTSTATISTICSPREDICATE_H

@class NSString, HKQuantity, HKQuantityType;


#import "HDSQLitePredicate.h"

@interface HDWorkoutStatisticsPredicate : HDSQLitePredicate {
    NSString *_column;
    HKQuantity *_quantity;
    HKQuantityType *_quantityType;
    NSInteger _comparisonType;
}




+(id)_predicateForColumn:(id)arg0 quantity:(id)arg1 quantityType:(id)arg2 operatorType:(NSUInteger)arg3 ;
+(id)predicateForAverageQuantity:(id)arg0 quantityType:(id)arg1 operatorType:(NSUInteger)arg2 ;
+(id)predicateForMaximumQuantity:(id)arg0 quantityType:(id)arg1 operatorType:(NSUInteger)arg2 ;
+(id)predicateForMinimumQuantity:(id)arg0 quantityType:(id)arg1 operatorType:(NSUInteger)arg2 ;
+(id)predicateForSumQuantity:(id)arg0 quantityType:(id)arg1 operatorType:(NSUInteger)arg2 ;
-(id)SQLForEntityClass:(Class)arg0 ;
-(id)_init;
-(id)description;
-(void)bindToStatement:(struct sqlite3_stmt *)arg0 bindingIndex:(*int)arg1 ;


@end


#endif