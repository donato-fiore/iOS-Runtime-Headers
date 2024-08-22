// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIGNEDLOGHEAD_H
#define SIGNEDLOGHEAD_H

@class NSData;
@protocol TransparencyVerifiable;


#import "GPBMessage.h"
#import "TransparencyManagedDataStore.h"
#import "LogHead.h"
#import "Signature.h"
#import "TransparencySignatureVerifier.h"

@interface SignedLogHead : GPBMessage <TransparencyVerifiable>



@property (retain) TransparencyManagedDataStore *dataStore;
@property BOOL gossip;
@property (nonatomic) BOOL hasSignature;
@property (copy, nonatomic) NSData *logHead;
@property (readonly) LogHead *parsedLogHead;
@property (retain, nonatomic) Signature *signature;
@property (retain) TransparencySignatureVerifier *verifier;


+(id)descriptor;
-(NSUInteger)verifyWithError:(*id)arg0 ;
-(id)copyManagedObject:(*id)arg0 ;
-(id)createManagedObjectWithError:(*id)arg0 ;
-(void)storeSignatureResult:(NSUInteger)arg0 signatureError:(*id)arg1 ;


@end


#endif