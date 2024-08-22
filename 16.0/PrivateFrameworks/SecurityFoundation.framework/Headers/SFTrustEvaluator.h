// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFTRUSTEVALUATOR_H
#define SFTRUSTEVALUATOR_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SFRevocationPolicy.h"
#import "SFTrustPolicy.h"

@interface SFTrustEvaluator : NSObject <NSCopying, NSSecureCoding>

 {
    id *_trustEvaluatorInternal;
}


@property (nonatomic) BOOL allowCertificateFetching; // ivar: _allowCertificateFetching
@property (copy, nonatomic) NSArray *applicationAnchorCertificates; // ivar: _applicationAnchorCertificates
@property (copy, nonatomic) SFRevocationPolicy *revocationPolicy; // ivar: _revocationPolicy
@property (copy, nonatomic) SFTrustPolicy *trustPolicy; // ivar: _trustPolicy
@property (nonatomic) BOOL trustSystemAnchorCertificates; // ivar: _trustSystemAnchorCertificates


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTrustPolicy:(id)arg0 ;
-(id)initWithTrustPolicy:(id)arg0 revocationPolicy:(id)arg1 ;
-(id)initWithTrustPolicy:(id)arg0 revocationPolicy:(id)arg1 applicationAnchorCertificates:(id)arg2 allowCertificateFetching:(BOOL)arg3 trustSystemAnchorCertificates:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)evaluateCertificateChain:(id)arg0 forDate:(id)arg1 resultHandler:(id)arg2 ;


@end


#endif