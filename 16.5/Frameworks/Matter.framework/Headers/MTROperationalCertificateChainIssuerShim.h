// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTROPERATIONALCERTIFICATECHAINISSUERSHIM_H
#define MTROPERATIONALCERTIFICATECHAINISSUERSHIM_H

@protocol MTROperationalCertificateIssuer, MTRNOCChainIssuer;

#import <Foundation/Foundation.h>


@interface MTROperationalCertificateChainIssuerShim : NSObject <MTROperationalCertificateIssuer>



@property (readonly, nonatomic) NSObject<MTRNOCChainIssuer> *nocChainIssuer; // ivar: _nocChainIssuer
@property (readonly, nonatomic) BOOL shouldSkipAttestationCertificateValidation; // ivar: _shouldSkipAttestationCertificateValidation


-(id)initWithIssuer:(id)arg0 ;
-(void)issueOperationalCertificateForRequest:(id)arg0 attestationInfo:(id)arg1 controller:(id)arg2 completion:(id)arg3 ;


@end


#endif