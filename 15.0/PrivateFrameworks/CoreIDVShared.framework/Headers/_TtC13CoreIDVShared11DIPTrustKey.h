// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC13COREIDVSHARED11DIPTRUSTKEY_H
#define _TTC13COREIDVSHARED11DIPTRUSTKEY_H

@class NSData;

#import <Foundation/Foundation.h>


@interface _TtC13CoreIDVShared11DIPTrustKey : NSObject {
    ? encryptedPrivateKey;
    ? attestation;
    ? publicKey;
    ? keyBlob;
    ? baaCertificate;
}


@property (nonatomic, readonly) NSData *baaCertificate;


-(id)init;
-(id)initWithEncryptedPrivateKey:(id)arg0 attestation:(id)arg1 publicKey:(id)arg2 keyBlob:(id)arg3 error:(*id)arg4 ;


@end


#endif