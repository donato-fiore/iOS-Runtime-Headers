// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKCERTIFICATEPINNING_H
#define AKCERTIFICATEPINNING_H


#import <Foundation/Foundation.h>


@interface AKCertificatePinning : NSObject



+(BOOL)isValidCertificateTrust:(struct __SecTrust *)arg0 forHostname:(id)arg1 ;


@end


#endif