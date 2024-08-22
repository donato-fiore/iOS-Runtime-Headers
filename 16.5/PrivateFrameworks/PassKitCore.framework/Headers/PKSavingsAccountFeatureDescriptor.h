// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSAVINGSACCOUNTFEATUREDESCRIPTOR_H
#define PKSAVINGSACCOUNTFEATUREDESCRIPTOR_H

@class NSArray, NSString;


#import "PKAccountFeatureDescriptor.h"

@interface PKSavingsAccountFeatureDescriptor : PKAccountFeatureDescriptor

@property (nonatomic) NSUInteger fundingSourceTypes; // ivar: _fundingSourceTypes
@property (copy, nonatomic) NSArray *supportedFileFormatsForTransactionData; // ivar: _supportedFileFormatsForTransactionData
@property (nonatomic) NSUInteger transferFrequencies; // ivar: _transferFrequencies
@property (copy, nonatomic) NSString *transferTermsIdentifier; // ivar: _transferTermsIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSavingsAccountFeatureDescriptor:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif