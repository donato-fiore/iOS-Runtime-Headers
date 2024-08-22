// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTROPERATIONALCERTIFICATECHAIN_H
#define MTROPERATIONALCERTIFICATECHAIN_H

@class NSNumber, NSData;

#import <Foundation/Foundation.h>


@interface MTROperationalCertificateChain : NSObject

@property (copy, nonatomic) NSNumber *adminSubject; // ivar: _adminSubject
@property (copy, nonatomic) NSData *intermediateCertificate; // ivar: _intermediateCertificate
@property (copy, nonatomic) NSData *operationalCertificate; // ivar: _operationalCertificate
@property (copy, nonatomic) NSData *rootCertificate; // ivar: _rootCertificate


-(id)initWithOperationalCertificate:(id)arg0 intermediateCertificate:(id)arg1 rootCertificate:(id)arg2 adminSubject:(id)arg3 ;


@end


#endif