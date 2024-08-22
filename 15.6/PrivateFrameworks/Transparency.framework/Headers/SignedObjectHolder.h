// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIGNEDOBJECTHOLDER_H
#define SIGNEDOBJECTHOLDER_H

@class NSData;

#import <Foundation/Foundation.h>

#import "TransparencyManagedDataStore.h"
#import "Signature.h"
#import "SignedObject.h"
#import "TransparencySignatureVerifier.h"

@interface SignedObjectHolder : NSObject

@property (retain) TransparencyManagedDataStore *dataStore; // ivar: _dataStore
@property (readonly) BOOL hasSignature;
@property NSData *object;
@property Signature *signature;
@property (retain) SignedObject *signedObject; // ivar: _signedObject
@property (retain) TransparencySignatureVerifier *verifier; // ivar: _verifier


+(id)parseFromData:(id)arg0 error:(*id)arg1 ;
+(id)signedTypeWithObject:(id)arg0 ;
+(id)signedTypeWithObject:(id)arg0 verifier:(id)arg1 dataStore:(id)arg2 ;
-(NSUInteger)verifyWithError:(*id)arg0 ;
-(id)data;
-(id)init;


@end


#endif