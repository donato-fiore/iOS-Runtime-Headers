// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CONSISTENCYPROOFRESPONSE_LOGCONSISTENCYRESPONSE_H
#define CONSISTENCYPROOFRESPONSE_LOGCONSISTENCYRESPONSE_H

@class NSDictionary, NSMutableArray, NSNumber;
@protocol TransparencyVerifiable;


#import "GPBMessage.h"
#import "TransparencyManagedDataStore.h"
#import "SignedLogHead.h"
#import "TransparencyConsistencyProofVerifier.h"

@interface ConsistencyProofResponse_LogConsistencyResponse : GPBMessage <TransparencyVerifiable>



@property (nonatomic) int application;
@property (retain) TransparencyManagedDataStore *dataStore;
@property (retain, nonatomic) SignedLogHead *endSlh;
@property BOOL forwards;
@property (nonatomic) BOOL hasEndSlh;
@property (nonatomic) BOOL hasStartSlh;
@property (nonatomic) int logType;
@property (readonly) NSDictionary *metadata;
@property (retain, nonatomic) NSMutableArray *proofHashesArray;
@property (readonly, nonatomic) NSUInteger proofHashesArray_Count;
@property (retain) NSNumber *startRevision;
@property (retain, nonatomic) SignedLogHead *startSlh;
@property (retain) TransparencyConsistencyProofVerifier *verifier;


+(id)descriptor;
-(NSUInteger)verifyWithError:(*id)arg0 ;
-(void)setResult:(NSUInteger)arg0 treeHead:(id)arg1 error:(id)arg2 ;


@end


#endif