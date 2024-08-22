// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATTESTATIONINFO_H
#define ATTESTATIONINFO_H

@class NSData;

#import <Foundation/Foundation.h>


@interface AttestationInfo : NSObject

@property (copy, nonatomic) NSData *certificationDeclaration; // ivar: _certificationDeclaration
@property (copy, nonatomic) NSData *challenge; // ivar: _challenge
@property (copy, nonatomic) NSData *dac; // ivar: _dac
@property (copy, nonatomic) NSData *elements; // ivar: _elements
@property (copy, nonatomic) NSData *elementsSignature; // ivar: _elementsSignature
@property (copy, nonatomic) NSData *firmwareInfo; // ivar: _firmwareInfo
@property (copy, nonatomic) NSData *nonce; // ivar: _nonce
@property (copy, nonatomic) NSData *pai; // ivar: _pai


-(id)initWithChallenge:(id)arg0 nonce:(id)arg1 elements:(id)arg2 elementsSignature:(id)arg3 dac:(id)arg4 pai:(id)arg5 certificationDeclaration:(id)arg6 firmwareInfo:(id)arg7 ;


@end


#endif