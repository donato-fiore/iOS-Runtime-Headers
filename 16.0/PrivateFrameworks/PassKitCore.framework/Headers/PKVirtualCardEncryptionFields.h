// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKVIRTUALCARDENCRYPTIONFIELDS_H
#define PKVIRTUALCARDENCRYPTIONFIELDS_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface PKVirtualCardEncryptionFields : NSObject {
    NSArray *_certificates;
    NSString *_encryptionVersion;
    os_unfair_lock_s _lock;
}




-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithCertificates:(id)arg0 ;
-(void)prepareCertificateWithQueue:(id)arg0 completion:(id)arg1 ;
-(void)prepareOneTimeCertificateWithQueue:(id)arg0 completion:(id)arg1 ;


@end


#endif