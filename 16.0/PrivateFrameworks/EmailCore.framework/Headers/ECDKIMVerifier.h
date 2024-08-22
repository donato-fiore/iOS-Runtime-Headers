// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ECDKIMVERIFIER_H
#define ECDKIMVERIFIER_H


#import <Foundation/Foundation.h>


@interface ECDKIMVerifier : NSObject



-(BOOL)verifyMessageBodyData:(id)arg0 withContext:(id)arg1 usingSignature:(id)arg2 ;
-(BOOL)verifyMessageData:(id)arg0 ;
-(BOOL)verifyMessageData:(id)arg0 publicKeySource:(id)arg1 options:(NSInteger)arg2 ;
-(BOOL)verifyMessageHeaders:(id)arg0 usingSignature:(id)arg1 publicKeySource:(id)arg2 error:(*id)arg3 ;
-(BOOL)verifyMessageWithContext:(id)arg0 options:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)verifyMessageWithContext:(id)arg0 publicKeySource:(id)arg1 options:(NSInteger)arg2 error:(*id)arg3 ;
-(id)_base64HashBodyData:(id)arg0 usingSignature:(id)arg1 ;
-(id)_relaxedCanonicalizationForHeaderName:(id)arg0 headerBody:(id)arg1 ;
-(id)canonicalizeHeaders:(id)arg0 usingRelaxedAlgorithmWithSignatureHeader:(id)arg1 ;
-(id)canonicalizeHeaders:(id)arg0 usingSimpleAlgorithmWithSignatureHeader:(id)arg1 ;
-(id)verificationContextForMessageData:(id)arg0 error:(*id)arg1 ;
-(void)canonicalizeBodyDataUsingRelaxedAlgorithm:(id)arg0 ;
-(void)canonicalizeBodyDataUsingSimpleAlgorithm:(id)arg0 ;


@end


#endif