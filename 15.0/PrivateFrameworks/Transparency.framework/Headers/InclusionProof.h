// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INCLUSIONPROOF_H
#define INCLUSIONPROOF_H

@class NSDictionary, NSData;
@protocol TransparencyVerifiable;


#import "GPBMessage.h"
#import "TransparencyManagedDataStore.h"
#import "MapEntry.h"
#import "LogEntry.h"
#import "KTInclusionProofVerifier.h"

@interface InclusionProof : GPBMessage <TransparencyVerifiable>



@property (retain) TransparencyManagedDataStore *dataStore;
@property (nonatomic) BOOL hasMapEntry;
@property (nonatomic) BOOL hasPerApplicationTreeEntry;
@property (nonatomic) BOOL hasTopLevelTreeEntry;
@property (retain, nonatomic) MapEntry *mapEntry;
@property (readonly) NSDictionary *metadata;
@property (retain, nonatomic) LogEntry *perApplicationTreeEntry;
@property (retain, nonatomic) LogEntry *topLevelTreeEntry;
@property (copy, nonatomic) NSData *uriVrfoutput;
@property (retain) KTInclusionProofVerifier *verifier;


+(id)descriptor;
-(NSUInteger)verifyWithError:(*id)arg0 ;
-(id)mapLeafWithError:(*id)arg0 ;


@end


#endif