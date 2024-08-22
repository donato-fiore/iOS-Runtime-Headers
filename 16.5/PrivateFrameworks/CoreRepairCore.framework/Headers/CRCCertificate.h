// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRCCERTIFICATE_H
#define CRCCERTIFICATE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CRCCertificate : NSObject

@property (nonatomic) NSInteger certifcateType; // ivar: certifcateType
@property (retain, nonatomic) NSArray *certificates; // ivar: certificates
@property (nonatomic) *__SecKey referenceKey; // ivar: referenceKey


-(BOOL)evaluateTrustWithScrt:(BOOL)arg0 verifyIdentity:(BOOL)arg1 referenceDate:(id)arg2 error:(*id)arg3 ;
-(id)copyCertificatePEMWithError:(*id)arg0 ;
-(id)extractCAAAttestationOIDDataWithError:(*id)arg0 ;
-(id)extractRepairHistoryWithError:(*id)arg0 ;
-(id)init;
-(id)initWithRefKey:(struct __SecKey *)arg0 certificates:(id)arg1 certType:(NSInteger)arg2 ;


@end


#endif