// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSSINTERDEVICESECURITYHELPER_H
#define AXSSINTERDEVICESECURITYHELPER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface AXSSInterDeviceSecurityHelper : NSObject {
    *__SecIdentity _cachedAppleIDIdentity;
    NSArray *_cachedCertificateChain;
    NSArray *_cachedSecurityIdentity;
}




-(id)_certificateChain;
-(id)init;
-(id)securityIdentity;
-(struct __SecIdentity *)_appleIDIdentity;
-(void)_appleIDsDidChange;
-(void)dealloc;
-(void)verifyCertificate:(id)arg0 completion:(id)arg1 ;


@end


#endif