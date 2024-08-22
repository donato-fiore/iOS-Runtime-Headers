// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PATINCLUSIONPROOF_H
#define PATINCLUSIONPROOF_H

@class NSDictionary;
@protocol TransparencyVerifiable;


#import "GPBMessage.h"
#import "TransparencyManagedDataStore.h"
#import "LogEntry.h"
#import "KTPatInclusionProofVerifier.h"

@interface PatInclusionProof : GPBMessage <TransparencyVerifiable>



@property (retain) TransparencyManagedDataStore *dataStore;
@property (nonatomic) BOOL hasPerApplicationTreeEntry;
@property (nonatomic) BOOL hasTopLevelTreeEntry;
@property (readonly) NSDictionary *metadata;
@property (readonly) NSUInteger patLogBeginningMs;
@property (retain, nonatomic) LogEntry *perApplicationTreeEntry;
@property (readonly) NSUInteger tltLogBeginningMs;
@property (retain, nonatomic) LogEntry *topLevelTreeEntry;
@property (retain) KTPatInclusionProofVerifier *verifier;


+(id)descriptor;
-(NSUInteger)verifyWithError:(*id)arg0 ;
-(id)patSigningKeyWithError:(*id)arg0 ;
-(id)vrfPublicKeyWithError:(*id)arg0 ;


@end


#endif