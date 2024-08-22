// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMLSIGNATUREKEYVALUE_H
#define SAMLSIGNATUREKEYVALUE_H



#import "SAMLBaseElement.h"
#import "SAMLDSAKeyValue.h"
#import "SAMLRSAKeyValue.h"

@interface SAMLSignatureKeyValue : SAMLBaseElement

@property (readonly, nonatomic) SAMLDSAKeyValue *dsaKeyValue;
@property (readonly, nonatomic) SAMLRSAKeyValue *rsaKeyValue;


+(id)createElement:(*id)arg0 ;


@end


#endif