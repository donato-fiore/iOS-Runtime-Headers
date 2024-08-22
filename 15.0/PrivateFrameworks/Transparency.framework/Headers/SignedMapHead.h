// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIGNEDMAPHEAD_H
#define SIGNEDMAPHEAD_H

@class NSData;
@protocol TransparencyVerifiable;


#import "GPBMessage.h"
#import "TransparencyManagedDataStore.h"
#import "MapHead.h"
#import "Signature.h"
#import "TransparencySignatureVerifier.h"

@interface SignedMapHead : GPBMessage <TransparencyVerifiable>



@property (retain) TransparencyManagedDataStore *dataStore;
@property (nonatomic) BOOL hasSignature;
@property (copy, nonatomic) NSData *mapHead;
@property (readonly) MapHead *parsedMapHead;
@property (retain, nonatomic) Signature *signature;
@property (retain) TransparencySignatureVerifier *verifier;


+(id)descriptor;
-(NSUInteger)verifyWithError:(*id)arg0 ;
-(id)copyManagedObject:(*id)arg0 ;
-(id)createManagedObjectWithError:(*id)arg0 ;


@end


#endif