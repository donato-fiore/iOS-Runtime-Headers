// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DPPRIVACYBUDGET_H
#define _DPPRIVACYBUDGET_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_DPPrivacyBudgetProperties.h"
#import "_DPPrivacyBudgetRecord.h"

@interface _DPPrivacyBudget : NSObject

@property (readonly, nonatomic) _DPPrivacyBudgetProperties *budgetProperties; // ivar: _budgetProperties
@property (retain) _DPPrivacyBudgetRecord *budgetRecord; // ivar: _budgetRecord
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


+(BOOL)createDatabaseRecordIfMissingIn:(id)arg0 key:(id)arg1 balance:(NSInteger)arg2 ;
+(BOOL)credit:(NSUInteger)arg0 budgetWithName:(id)arg1 ;
+(BOOL)debit:(NSUInteger)arg0 budgetWithName:(id)arg1 ;
+(BOOL)isMultiDayIntervalBudgetWithName:(id)arg0 ;
+(NSInteger)balanceForBudgetWithName:(id)arg0 ;
+(id)budgetWithName:(id)arg0 ;
+(id)fetchBudgetKeyNamesFrom:(id)arg0 ;
+(id)fetchBudgetRecordFrom:(id)arg0 key:(id)arg1 ;
+(void)createBudgetRecordsIn:(id)arg0 ;
+(void)initialize;
+(void)removeBudgetWithName:(id)arg0 ;
+(void)resetLastUpdateDateForName:(id)arg0 ;
+(void)updateAllBudgetsIn:(id)arg0 ;
+(void)updateAllBudgetsUnsafeIn:(id)arg0 ;
-(BOOL)initializeBudgetRecordFrom:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithName:(id)arg0 budgetProperties:(id)arg1 ;


@end


#endif