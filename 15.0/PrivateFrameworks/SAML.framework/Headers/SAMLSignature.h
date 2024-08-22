// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAMLSIGNATURE_H
#define SAMLSIGNATURE_H

@class NSString, NSData;


#import "SAMLBaseElement.h"
#import "SAMLKeyInfo.h"
#import "SAMLSignedInfo.h"

@interface SAMLSignature : SAMLBaseElement

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) SAMLKeyInfo *keyInfo;
@property (readonly, nonatomic) NSData *signatureValue;
@property (readonly, nonatomic) NSString *signatureValueId;
@property (readonly, nonatomic) SAMLSignedInfo *signedInfo;


+(id)createElement:(*id)arg0 ;
-(BOOL)isValid;


@end


#endif