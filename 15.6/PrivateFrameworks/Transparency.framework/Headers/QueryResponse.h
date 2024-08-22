// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QUERYRESPONSE_H
#define QUERYRESPONSE_H

@class NSDictionary, NSMutableArray;


#import "GPBMessage.h"
#import "InclusionProof.h"
#import "VRFWitness.h"

@interface QueryResponse : GPBMessage

@property (nonatomic) BOOL hasInclusionProof;
@property (nonatomic) BOOL hasUriWitness;
@property (retain, nonatomic) InclusionProof *inclusionProof;
@property (readonly) NSDictionary *metadata;
@property (retain, nonatomic) NSMutableArray *pendingSmtsArray;
@property (readonly, nonatomic) NSUInteger pendingSmtsArray_Count;
@property (nonatomic) int status;
@property (retain, nonatomic) VRFWitness *uriWitness;


+(id)descriptor;


@end


#endif