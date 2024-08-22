// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSATTESTATION_H
#define AMSATTESTATION_H


#import <Foundation/Foundation.h>


@interface AMSAttestation : NSObject



+(BOOL)clearAttestationWithAccount:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)_attestationPListWithStyle:(NSUInteger)arg0 primaryAttestation:(id)arg1 extendedAttestation:(id)arg2 error:(*id)arg3 ;
+(id)_generateCertificateChainStringsForOptions:(id)arg0 error:(*id)arg1 ;
+(id)attestationHTTPBodyDataWithStyle:(NSUInteger)arg0 regenerateKeys:(BOOL)arg1 error:(*id)arg2 ;
+(id)attestationWithOptions:(id)arg0 error:(*id)arg1 ;


@end


#endif