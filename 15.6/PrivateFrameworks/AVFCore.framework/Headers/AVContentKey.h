// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCONTENTKEY_H
#define AVCONTENTKEY_H


#import <Foundation/Foundation.h>

#import "AVContentKeySpecifier.h"

@interface AVContentKey : NSObject {
    *OpaqueFigCPECryptor _cryptor;
}


@property (readonly) AVContentKeySpecifier *contentKeySpecifier; // ivar: contentKeySpecifier


+(id)contentKeyWithSpecifier:(id)arg0 andCryptor:(struct OpaqueFigCPECryptor *)arg1 ;
-(id)initWithSpecifier:(id)arg0 andCryptor:(struct OpaqueFigCPECryptor *)arg1 ;
-(struct OpaqueFigCPECryptor *)getCryptor;
-(void)dealloc;


@end


#endif