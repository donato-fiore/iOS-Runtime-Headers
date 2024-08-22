// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHINACTIVEBUDGETPOLICY_H
#define BLSHINACTIVEBUDGETPOLICY_H

@class NSMutableDictionary, NSString;
@protocol BLSHInactiveBudgetPolicing_Private;

#import <Foundation/Foundation.h>

#import "BLSHNullInactiveProcessBudget.h"

@interface BLSHInactiveBudgetPolicy : NSObject <BLSHInactiveBudgetPolicing_Private>

 {
    NSMutableDictionary *_budgets;
    id *_budgetFactory;
    BLSHNullInactiveProcessBudget *_nullBudget;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)allowedFidelityAtDate:(id)arg0 forEnvironment:(id)arg1 expectedFidelity:(NSInteger)arg2 ;
-(id)initWithBudgetFactory:(id)arg0 ;
-(id)initWithOSInterfaceProvider:(id)arg0 ;
-(id)validateAndChargeFutureSpecifier:(id)arg0 nextSpecifier:(id)arg1 forEnvironment:(id)arg2 ;
-(void)chargeRenderedSpecifier:(id)arg0 ;
-(void)invalidateAtRequestDate:(id)arg0 forEnvironment:(id)arg1 invalidationBlock:(id)arg2 ;
-(void)performInvalidation;
-(void)purgeStaleDataForNowDate:(id)arg0 ;
-(void)resetBudgetForProcess:(id)arg0 reason:(id)arg1 ;
-(void)resetFutureSpecifiers;


@end


#endif