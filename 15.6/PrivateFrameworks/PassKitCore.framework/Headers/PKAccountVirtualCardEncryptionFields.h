// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTVIRTUALCARDENCRYPTIONFIELDS_H
#define PKACCOUNTVIRTUALCARDENCRYPTIONFIELDS_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface PKAccountVirtualCardEncryptionFields : NSObject {
    NSArray *_certificates;
    NSString *_encryptionVersion;
    os_unfair_lock_s _lock;
}




-(id)dictionaryRepresentation;
-(id)init;
-(void)prepareCertificateWithQueue:(id)arg0 completion:(id)arg1 ;
-(void)prepareOneTimeCertificateWithQueue:(id)arg0 completion:(id)arg1 ;


@end


#endif