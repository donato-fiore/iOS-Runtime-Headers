// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHNULLINACTIVEPROCESSBUDGET_H
#define BLSHNULLINACTIVEPROCESSBUDGET_H

@class NSString;
@protocol BLSHInactiveProcessBudgeting;

#import <Foundation/Foundation.h>


@interface BLSHNullInactiveProcessBudget : NSObject <BLSHInactiveProcessBudgeting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)stillTrackingAfterPurgingStaleDataForNowDate:(id)arg0 ;
-(NSInteger)allowedFidelityAtDate:(id)arg0 expectedFidelity:(NSInteger)arg1 ;
-(id)validateAndChargeFutureSpecifier:(id)arg0 nextSpecifier:(id)arg1 expectedFidelity:(NSInteger)arg2 ;
-(void)chargeRenderedSpecifier:(id)arg0 expectedFidelity:(NSInteger)arg1 ;
-(void)invalidateAtRequestDate:(id)arg0 expectedFidelity:(NSInteger)arg1 invalidationBlock:(id)arg2 ;
-(void)performInvalidation;
-(void)resetFutureSpecifiers;


@end


#endif