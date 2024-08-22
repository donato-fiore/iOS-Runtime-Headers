// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDTRUSTEDTARGETWRAPPEDKEY_H
#define CKDTRUSTEDTARGETWRAPPEDKEY_H

@class CKPublicKey, NSData;

#import <Foundation/Foundation.h>


@interface CKDTrustedTargetWrappedKey : NSObject

@property (copy, nonatomic) CKPublicKey *publicKey; // ivar: _publicKey
@property (copy, nonatomic) NSData *wrappedKey; // ivar: _wrappedKey


-(id)initWithWrappedKey:(id)arg0 publicKey:(id)arg1 ;


@end


#endif