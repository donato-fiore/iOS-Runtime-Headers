// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTPAYMENTFUNDINGSOURCE_H
#define PKACCOUNTPAYMENTFUNDINGSOURCE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKAccountPaymentFundingDetails.h"

@interface PKAccountPaymentFundingSource : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *accountSuffix; // ivar: _accountSuffix
@property (copy, nonatomic) PKAccountPaymentFundingDetails *fundingDetails; // ivar: _fundingDetails
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(Class)fundingDetailsClassForFundingSourceType:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)bankAccountRepresentation;
-(id)description;
-(id)displayDescription;
-(id)hashComponentWithCertificatesResponse:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;
-(id)jsonDictionaryRepresentation;
-(id)jsonDictionaryRepresentationWithCertificatesResponse:(id)arg0 ;
-(id)jsonString;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif