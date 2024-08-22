// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMLKEYINFO_H
#define SAMLKEYINFO_H

@class NSString, NSData;


#import "SAMLBaseElement.h"
#import "SAMLSignatureKeyValue.h"
#import "SAMLPGPData.h"
#import "SAMLKeyRetrievalMethod.h"
#import "SAMLX509Data.h"

@interface SAMLKeyInfo : SAMLBaseElement

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *keyName;
@property (readonly, nonatomic) SAMLSignatureKeyValue *keyValue;
@property (readonly, nonatomic) NSString *mgmtData;
@property (readonly, nonatomic) SAMLPGPData *pgpData;
@property (readonly, nonatomic) SAMLKeyRetrievalMethod *retrievalMethod;
@property (readonly, nonatomic) NSData *spkiSexpData;
@property (readonly, nonatomic) SAMLX509Data *x509Data;


+(id)createElement:(*id)arg0 ;


@end


#endif