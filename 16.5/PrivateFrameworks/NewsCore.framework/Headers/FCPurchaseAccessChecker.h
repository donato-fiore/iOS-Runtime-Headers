// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCPURCHASEACCESSCHECKER_H
#define FCPURCHASEACCESSCHECKER_H

@protocol FCPaidAccessCheckerType;


#import "FCAccessChecker.h"

@interface FCPurchaseAccessChecker : FCAccessChecker

@property (readonly, nonatomic) NSObject<FCPaidAccessCheckerType> *paidAccessChecker; // ivar: _paidAccessChecker


-(BOOL)canSynchronouslyCheckAccessToItem:(id)arg0 ;
-(BOOL)hasAccessToItem:(id)arg0 blockedReason:(*NSUInteger)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithPaidAccessChecker:(id)arg0 ;
-(void)checkAccessToItem:(id)arg0 withQualityOfService:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif