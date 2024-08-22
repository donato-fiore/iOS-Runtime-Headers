// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSCONTACTSTRUSTEDACCOUNTVALIDATION_H
#define TPSCONTACTSTRUSTEDACCOUNTVALIDATION_H

@class ACAccount;


#import "TPSTargetingValidation.h"

@interface TPSContactsTrustedAccountValidation : TPSTargetingValidation

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (nonatomic) BOOL desiredValue; // ivar: _desiredValue
@property (retain, nonatomic) ACAccount *primaryAccount; // ivar: _primaryAccount


-(BOOL)_primaryAccountCanHaveTrustedAccountType:(NSUInteger)arg0 ;
-(void)_hasAssignmentForTrustedAccountType:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)reportCompletionWithResult:(BOOL)arg0 error:(id)arg1 ;
-(void)validateBeneficiaryAssignmentWithCompletion:(id)arg0 ;
-(void)validateCustodianAssignmentWithCompletion:(id)arg0 ;
-(void)validateWithCompletion:(id)arg0 ;


@end


#endif