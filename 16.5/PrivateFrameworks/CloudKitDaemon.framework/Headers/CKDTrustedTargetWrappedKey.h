// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDTRUSTEDTARGETWRAPPEDKEY_H
#define CKDTRUSTEDTARGETWRAPPEDKEY_H

@class CKPublicKey, NSData;

#import <Foundation/Foundation.h>


@interface CKDTrustedTargetWrappedKey : NSObject

@property (readonly, nonatomic) CKPublicKey *publicKey; // ivar: _publicKey
@property (readonly, copy, nonatomic) NSData *wrappedKey; // ivar: _wrappedKey


-(id)initWithWrappedKey:(id)arg0 publicKey:(id)arg1 ;


@end


#endif