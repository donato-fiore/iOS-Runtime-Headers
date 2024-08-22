// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSCMSRECIPIENTINFO_H
#define MSCMSRECIPIENTINFO_H

@class NSArray, NSData, NSNumber;

#import <Foundation/Foundation.h>

#import "MSAlgorithmIdentifier.h"

@interface MSCMSRecipientInfo : NSObject

@property (retain) NSArray *algorithmCapabilities; // ivar: _algorithmCapabilities
@property (retain) NSData *encryptedKey; // ivar: _encryptedKey
@property (retain) MSAlgorithmIdentifier *keyEncryptionAlgorithm; // ivar: _keyEncryptionAlgorithm
@property *__SecCertificate recipientCertificate; // ivar: _recipientCertificate
@property (retain) NSNumber *version; // ivar: _version


+(id)decodeRecipientInfo:(struct KeyTransRecipientInfo *)arg0 certificates:(id)arg1 LAContext:(id)arg2 error:(*id)arg3 ;
-(id)initWithCertificate:(struct __SecCertificate *)arg0 ;
-(id)initWithCertificate:(struct __SecCertificate *)arg0 algorithmCapabilities:(id)arg1 ;
-(id)initWithCertificate:(struct __SecCertificate *)arg0 keyEncryptionAlgorithm:(id)arg1 ;
-(id)initWithEmail:(id)arg0 ;
-(id)initWithEmail:(id)arg0 algorithmCapabilities:(id)arg1 ;
-(id)initWithEmail:(id)arg0 keyEncryptionAlgorithm:(id)arg1 ;
-(id)key;


@end


#endif