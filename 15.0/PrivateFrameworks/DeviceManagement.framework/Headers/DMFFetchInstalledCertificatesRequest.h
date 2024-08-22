// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFFETCHINSTALLEDCERTIFICATESREQUEST_H
#define DMFFETCHINSTALLEDCERTIFICATESREQUEST_H



#import "DMFFetchCertificatesRequest.h"

@interface DMFFetchInstalledCertificatesRequest : DMFFetchCertificatesRequest



+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(id)permittedPlatforms;


@end


#endif