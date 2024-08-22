// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKCREDITACCOUNTFEATUREDESCRIPTOR_H
#define PKCREDITACCOUNTFEATUREDESCRIPTOR_H

@class NSString, NSArray;


#import "PKAccountFeatureDescriptor.h"

@interface PKCreditAccountFeatureDescriptor : PKAccountFeatureDescriptor

@property (copy, nonatomic) NSString *fundingSourceTermsIdentifier; // ivar: _fundingSourceTermsIdentifier
@property (nonatomic) NSUInteger maximumAccountUsers; // ivar: _maximumAccountUsers
@property (nonatomic) NSUInteger minimumOwnerAge; // ivar: _minimumOwnerAge
@property (nonatomic) NSUInteger minimumParticipantAge; // ivar: _minimumParticipantAge
@property (nonatomic) NSUInteger paymentFrequencies; // ivar: _paymentFrequencies
@property (nonatomic) NSUInteger paymentFundingSourceTypes; // ivar: _paymentFundingSourceTypes
@property (nonatomic) NSUInteger paymentPresets; // ivar: _paymentPresets
@property (copy, nonatomic) NSString *paymentTermsIdentifier; // ivar: _paymentTermsIdentifier
@property (copy, nonatomic) NSArray *supportedFileFormatsForTransactionData; // ivar: _supportedFileFormatsForTransactionData


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCreditAccountFeatureDescriptor:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif