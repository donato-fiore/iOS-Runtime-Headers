// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTSERVICEPAYLATERFINANCINGPLANQUERYINSTALLMENTS_H
#define PKACCOUNTSERVICEPAYLATERFINANCINGPLANQUERYINSTALLMENTS_H

@class NSDictionary, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKAccountServicePayLaterFinancingPlanQueryInstallments : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSDictionary *installmentIdentifierToFinancingPlan; // ivar: _installmentIdentifierToFinancingPlan
@property (readonly, copy, nonatomic) NSArray *installments; // ivar: _installments


+(BOOL)supportsSecureCoding;
-(BOOL)_isEqualToPayLaterFinancingPlanQueryInstallments:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_installmentIdentifiers;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInstallment:(id)arg0 installmentIdentifierToFinancingPlan:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif