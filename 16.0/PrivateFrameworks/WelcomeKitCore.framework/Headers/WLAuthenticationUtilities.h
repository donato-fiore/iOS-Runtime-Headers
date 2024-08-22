// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLAUTHENTICATIONUTILITIES_H
#define WLAUTHENTICATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface WLAuthenticationUtilities : NSObject



+(id)dataFromPEMFormattedData:(id)arg0 ;
+(id)hashWithString:(id)arg0 ;
+(id)pemFormattedCertificateData:(id)arg0 ;
+(void)_appendBase64Data:(id)arg0 toString:(id)arg1 ;
+(void)generateSelfSignedCertificateWithOrganization:(id)arg0 commonName:(id)arg1 completion:(id)arg2 ;


@end


#endif