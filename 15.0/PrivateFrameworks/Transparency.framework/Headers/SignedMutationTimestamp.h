// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIGNEDMUTATIONTIMESTAMP_H
#define SIGNEDMUTATIONTIMESTAMP_H

@class NSString, NSData;
@protocol TransparencyVerifiable;


#import "GPBMessage.h"
#import "TransparencyManagedDataStore.h"
#import "Signature.h"
#import "TransparencySignatureVerifier.h"

@interface SignedMutationTimestamp : GPBMessage <TransparencyVerifiable>



@property (retain) NSString *application;
@property (retain) TransparencyManagedDataStore *dataStore;
@property (nonatomic) BOOL hasSignature;
@property (copy, nonatomic) NSData *mutation;
@property (retain, nonatomic) Signature *signature;
@property (retain) TransparencySignatureVerifier *verifier;


+(id)descriptor;
-(NSUInteger)verifyWithError:(*id)arg0 ;
-(id)copyManagedObjectWithError:(*id)arg0 ;
-(id)parsedMutationWithError:(*id)arg0 ;


@end


#endif