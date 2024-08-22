// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JPSIGNATUREVERIFIER_H
#define JPSIGNATUREVERIFIER_H


#import <Foundation/Foundation.h>


@interface JPSignatureVerifier : NSObject

@property (nonatomic) *JetPackSignatureVerifier backing; // ivar: _backing
@property (readonly, nonatomic) BOOL releaseBackingOnDealloc; // ivar: _releaseBackingOnDealloc


+(id)defaultSignatureVerifier;
+(id)signatureVerifierWithCertificate:(id)arg0 ;
+(id)unsafeIgnoreSignatureVerifier;
-(id)initWithBacking:(struct JetPackSignatureVerifier *)arg0 releaseOnDealloc:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif