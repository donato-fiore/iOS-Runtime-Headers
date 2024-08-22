// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUBLICKEYSRESPONSE_H
#define PUBLICKEYSRESPONSE_H

@class NSMutableArray, NSDictionary, NSData;


#import "GPBMessage.h"
#import "PatInclusionProof.h"
#import "LogEntry.h"
#import "Signature.h"

@interface PublicKeysResponse : GPBMessage

@property (retain, nonatomic) NSMutableArray *appLeafsArray;
@property (readonly, nonatomic) NSUInteger appLeafsArray_Count;
@property (nonatomic) BOOL hasPatClosedProof;
@property (nonatomic) BOOL hasPatConfigProof;
@property (nonatomic) BOOL hasTltConfigProof;
@property (nonatomic) BOOL hasVrfSignature;
@property (retain, nonatomic) NSMutableArray *intermediatesArray;
@property (readonly, nonatomic) NSUInteger intermediatesArray_Count;
@property (readonly) NSDictionary *metadata;
@property (retain, nonatomic) PatInclusionProof *patClosedProof;
@property (retain, nonatomic) PatInclusionProof *patConfigProof;
@property (nonatomic) int status;
@property (nonatomic) NSUInteger tltBeginningMs;
@property (retain, nonatomic) LogEntry *tltConfigProof;
@property (retain, nonatomic) NSMutableArray *tltLeafsArray;
@property (readonly, nonatomic) NSUInteger tltLeafsArray_Count;
@property (copy, nonatomic) NSData *vrfKey;
@property (copy, nonatomic) NSData *vrfPublicKey;
@property (retain, nonatomic) Signature *vrfSignature;


+(id)descriptor;


@end


#endif