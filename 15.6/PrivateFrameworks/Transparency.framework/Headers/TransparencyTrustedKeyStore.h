// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRANSPARENCYTRUSTEDKEYSTORE_H
#define TRANSPARENCYTRUSTEDKEYSTORE_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "TransparencySignatureVerifier.h"

@interface TransparencyTrustedKeyStore : NSObject

@property (retain) TransparencySignatureVerifier *signatureVerifier; // ivar: _signatureVerifier
@property (retain) NSDictionary *trustedKeys; // ivar: _trustedKeys


-(id)initWithTrustedKeys:(id)arg0 ;


@end


#endif