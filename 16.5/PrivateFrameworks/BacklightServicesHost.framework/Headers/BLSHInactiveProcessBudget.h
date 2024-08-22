// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHINACTIVEPROCESSBUDGET_H
#define BLSHINACTIVEPROCESSBUDGET_H

@class NSString;
@protocol BLSHInactiveProcessBudgeting, BLSHOSInterfaceProviding;

#import <Foundation/Foundation.h>

#import "BLSHInactiveProcessSecondsBudget.h"
#import "BLSHInactiveProcessMinutesBudget.h"

@interface BLSHInactiveProcessBudget : NSObject <BLSHInactiveProcessBudgeting>

 {
    NSString *_identifier;
    id<BLSHOSInterfaceProviding> *_osInterfaceProvider;
    BLSHInactiveProcessSecondsBudget *_secondsBudget;
    BLSHInactiveProcessMinutesBudget *_minutesBudget;
    NSUInteger _stateHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)stillTrackingAfterPurgingStaleDataForNowDate:(id)arg0 ;
-(NSInteger)allowedFidelityAtDate:(id)arg0 expectedFidelity:(NSInteger)arg1 ;
-(id)initWithIdentifier:(id)arg0 osInterfaceProvider:(id)arg1 ;
-(id)validateAndChargeFutureSpecifier:(id)arg0 nextSpecifier:(id)arg1 expectedFidelity:(NSInteger)arg2 ;
-(void)chargeRenderedSpecifier:(id)arg0 expectedFidelity:(NSInteger)arg1 ;
-(void)dealloc;
-(void)invalidateAtRequestDate:(id)arg0 expectedFidelity:(NSInteger)arg1 invalidationBlock:(id)arg2 ;
-(void)performInvalidation;
-(void)resetFutureSpecifiers;


@end


#endif