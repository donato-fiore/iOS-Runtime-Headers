// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LOGENTRY_H
#define LOGENTRY_H

@class NSMutableArray, NSDictionary, NSData;
@protocol TransparencyVerifiable;


#import "GPBMessage.h"
#import "TransparencyManagedDataStore.h"
#import "SignedLogHead.h"
#import "TransparencyLogEntryVerifier.h"

@interface LogEntry : GPBMessage <TransparencyVerifiable>



@property (retain) TransparencyManagedDataStore *dataStore;
@property (nonatomic) BOOL hasSlh;
@property (retain, nonatomic) NSMutableArray *hashesOfPeersInPathToRootArray;
@property (readonly, nonatomic) NSUInteger hashesOfPeersInPathToRootArray_Count;
@property (nonatomic) int logType;
@property (readonly) NSDictionary *metadata;
@property (copy, nonatomic) NSData *nodeBytes;
@property (nonatomic) NSUInteger nodePosition;
@property (retain, nonatomic) SignedLogHead *slh;
@property (retain) TransparencyLogEntryVerifier *verifier;


+(id)descriptor;
-(BOOL)setInclusionResult:(NSUInteger)arg0 signedLogHead:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)verifyTLTEntryForPerApplicationLogHead:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)verifyWithError:(*id)arg0 ;


@end


#endif