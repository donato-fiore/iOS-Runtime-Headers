// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTSERVICEPAYLATERFINANCINGPLANQUERY_H
#define PKACCOUNTSERVICEPAYLATERFINANCINGPLANQUERY_H

@class NSString, NSArray, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKAccountServicePayLaterFinancingPlanQuery : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic) NSArray *countFinancingPlanStates; // ivar: _countFinancingPlanStates
@property (copy, nonatomic) NSDate *installmentDueOrPaidDateEnd; // ivar: _installmentDueOrPaidDateEnd
@property (copy, nonatomic) NSDate *installmentDueOrPaidDateStart; // ivar: _installmentDueOrPaidDateStart
@property (readonly, copy, nonatomic) NSString *queryIdentifier; // ivar: _queryIdentifier
@property (readonly, nonatomic) NSUInteger queryItems; // ivar: _queryItems
@property (copy, nonatomic) NSArray *relevantFinancingPlanStates; // ivar: _relevantFinancingPlanStates
@property (copy, nonatomic) NSDate *transactionEndDate; // ivar: _transactionEndDate
@property (copy, nonatomic) NSDate *transactionStartDate; // ivar: _transactionStartDate
@property (nonatomic) NSInteger upcomingInstallmentsLimit; // ivar: _upcomingInstallmentsLimit


+(BOOL)supportsSecureCoding;
+(id)descriptionForQueryItems:(NSUInteger)arg0 ;
-(BOOL)_isEqualToFinancingPlanQuery:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithAccountIdentifier:(id)arg0 queryItems:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif