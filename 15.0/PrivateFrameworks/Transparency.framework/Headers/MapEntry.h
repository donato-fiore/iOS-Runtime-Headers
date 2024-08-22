// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPENTRY_H
#define MAPENTRY_H

@class NSMutableArray, NSData, NSDictionary;
@protocol TransparencyVerifiable;


#import "GPBMessage.h"
#import "TransparencyManagedDataStore.h"
#import "SignedMapHead.h"
#import "TransparencyMapEntryVerifier.h"

@interface MapEntry : GPBMessage <TransparencyVerifiable>



@property (retain) TransparencyManagedDataStore *dataStore;
@property (nonatomic) BOOL hasSmh;
@property (retain, nonatomic) NSMutableArray *hashesOfPeersInPathToRootArray;
@property (readonly, nonatomic) NSUInteger hashesOfPeersInPathToRootArray_Count;
@property (copy, nonatomic) NSData *mapLeaf;
@property (readonly) NSDictionary *metadata;
@property (retain, nonatomic) SignedMapHead *smh;
@property (retain) TransparencyMapEntryVerifier *verifier;


+(id)descriptor;
-(NSUInteger)verifyWithError:(*id)arg0 ;


@end


#endif