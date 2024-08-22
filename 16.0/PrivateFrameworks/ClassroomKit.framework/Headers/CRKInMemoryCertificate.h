// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKINMEMORYCERTIFICATE_H
#define CRKINMEMORYCERTIFICATE_H

@class NSArray, NSData, NSString, NSDateInterval;
@protocol NSSecureCoding, CRKCertificate;

#import <Foundation/Foundation.h>

#import "CRKIdentityConfiguration.h"

@interface CRKInMemoryCertificate : NSObject <NSSecureCoding, CRKCertificate>



@property (readonly, nonatomic, getter=isCertificateAuthority) BOOL certificateAuthority;
@property (readonly, copy, nonatomic) NSArray *commonNames;
@property (readonly, copy, nonatomic) CRKIdentityConfiguration *configuration; // ivar: _configuration
@property (readonly, copy, nonatomic) NSData *dataRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *fingerprint;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int hashingAlgorithm;
@property (readonly, nonatomic) NSInteger keySizeInBits;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTemporallyValid) BOOL temporallyValid;
@property (readonly, nonatomic) *__SecCertificate underlyingCertificate;
@property (retain, nonatomic) NSDateInterval *validityDateInterval; // ivar: _validityDateInterval


+(BOOL)supportsSecureCoding;
+(id)certificateWithData:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 validityDateInterval:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif