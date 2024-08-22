// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKASMCERTIFICATEINGESTOR_H
#define CRKASMCERTIFICATEINGESTOR_H


#import <Foundation/Foundation.h>

#import "CRKASMRosterProviderConfiguration.h"

@interface CRKASMCertificateIngestor : NSObject

@property (readonly, nonatomic) CRKASMRosterProviderConfiguration *configuration; // ivar: _configuration


-(BOOL)areCertificatesValid:(id)arg0 forUserIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)ingestCertificates:(id)arg0 forTrustedUserIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)isCertificateValid:(id)arg0 forUserIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)storeCertificates:(id)arg0 userIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)initWithConfiguration:(id)arg0 ;


@end


#endif