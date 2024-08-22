// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTFEATUREDESCRIPTOR_H
#define PKACCOUNTFEATUREDESCRIPTOR_H

@class NSString, NSDecimalNumber, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKOSVersionRequirementRange.h"

@interface PKAccountFeatureDescriptor : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *fundingSourceTermsIdentifier; // ivar: _fundingSourceTermsIdentifier
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSDecimalNumber *maximumAmount; // ivar: _maximumAmount
@property (nonatomic) NSUInteger merchantCapabilities; // ivar: _merchantCapabilities
@property (copy, nonatomic) NSString *merchantIdentifier; // ivar: _merchantIdentifier
@property (copy, nonatomic) NSDecimalNumber *minimumAmount; // ivar: _minimumAmount
@property (retain, nonatomic) PKOSVersionRequirementRange *osVersionRange; // ivar: _osVersionRange
@property (copy, nonatomic) NSArray *supportedNetworks; // ivar: _supportedNetworks


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAccountFeatureDescriptor:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif