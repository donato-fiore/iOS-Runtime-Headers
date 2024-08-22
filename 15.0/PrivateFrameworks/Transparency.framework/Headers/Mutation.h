// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUTATION_H
#define MUTATION_H

@class NSData;


#import "GPBMessage.h"

@interface Mutation : GPBMessage

@property (copy, nonatomic) NSData *accountId;
@property (nonatomic) BOOL accountMismatch;
@property (nonatomic) NSUInteger appVersion;
@property (copy, nonatomic) NSData *clientDataVrfoutput;
@property (copy, nonatomic) NSData *deviceIdVrfoutput;
@property (nonatomic) NSUInteger mutationMs;
@property (nonatomic) int mutationType;
@property (copy, nonatomic) NSData *uriVrfoutput;
@property (nonatomic) int version;


+(id)descriptor;


@end


#endif