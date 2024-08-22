// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFWRAPPEDKEYCIPHERTEXT_H
#define SFWRAPPEDKEYCIPHERTEXT_H

@class SFCiphertext;


#import "_SFCiphertext.h"

@interface SFWrappedKeyCiphertext : SFCiphertext {
    id *_wrappedKeyCiphertextInternal;
}


@property (readonly) _SFCiphertext *ciphertextKey;


-(id)initWithCiphertext:(id)arg0 ciphertextKey:(id)arg1 ;


@end


#endif