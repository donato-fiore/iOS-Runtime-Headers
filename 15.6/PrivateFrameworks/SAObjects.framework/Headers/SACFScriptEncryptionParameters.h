// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SACFSCRIPTENCRYPTIONPARAMETERS_H
#define SACFSCRIPTENCRYPTIONPARAMETERS_H

@class NSData, NSString;


#import "SABaseAceObject.h"

@interface SACFScriptEncryptionParameters : SABaseAceObject

@property (copy, nonatomic) NSData *encryptionKey;
@property (copy, nonatomic) NSData *hmac;
@property (copy, nonatomic) NSData *hmacKey;
@property (copy, nonatomic) NSData *initializationVector;
@property (copy, nonatomic) NSString *type;


+(id)scriptEncryptionParameters;
+(id)scriptEncryptionParametersWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif