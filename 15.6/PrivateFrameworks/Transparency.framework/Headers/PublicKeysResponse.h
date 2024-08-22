// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUBLICKEYSRESPONSE_H
#define PUBLICKEYSRESPONSE_H

@class NSMutableArray, NSDictionary;


#import "GPBMessage.h"
#import "PatInclusionProof.h"
#import "LogEntry.h"

@interface PublicKeysResponse : GPBMessage

@property (retain, nonatomic) NSMutableArray *appLeafsArray;
@property (readonly, nonatomic) NSUInteger appLeafsArray_Count;
@property (nonatomic) BOOL hasPatClosedProof;
@property (nonatomic) BOOL hasPatConfigProof;
@property (nonatomic) BOOL hasTltConfigProof;
@property (retain, nonatomic) NSMutableArray *intermediatesArray;
@property (readonly, nonatomic) NSUInteger intermediatesArray_Count;
@property (readonly) NSDictionary *metadata;
@property (retain, nonatomic) PatInclusionProof *patClosedProof;
@property (retain, nonatomic) PatInclusionProof *patConfigProof;
@property (nonatomic) int status;
@property (retain, nonatomic) LogEntry *tltConfigProof;
@property (retain, nonatomic) NSMutableArray *tltLeafsArray;
@property (readonly, nonatomic) NSUInteger tltLeafsArray_Count;


+(id)descriptor;


@end


#endif