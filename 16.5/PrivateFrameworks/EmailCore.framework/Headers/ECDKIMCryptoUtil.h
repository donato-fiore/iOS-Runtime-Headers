// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ECDKIMCRYPTOUTIL_H
#define ECDKIMCRYPTOUTIL_H


#import <Foundation/Foundation.h>


@interface ECDKIMCryptoUtil : NSObject



+(BOOL)verifySignedData:(id)arg0 withSignatureData:(id)arg1 publicKeyData:(id)arg2 hashingAlgorithm:(NSUInteger)arg3 error:(*id)arg4 ;


@end


#endif