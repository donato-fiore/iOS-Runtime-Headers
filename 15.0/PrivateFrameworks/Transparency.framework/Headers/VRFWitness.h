// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VRFWITNESS_H
#define VRFWITNESS_H

@class NSData;
@protocol TransparencyVerifiable;


#import "GPBMessage.h"
#import "TransparencyVRFVerifier.h"

@interface VRFWitness : GPBMessage <TransparencyVerifiable>



@property (retain) NSData *message;
@property (copy, nonatomic) NSData *output;
@property (copy, nonatomic) NSData *proof;
@property (retain) NSData *salt;
@property (nonatomic) int type;
@property (retain) TransparencyVRFVerifier *verifier;


+(id)descriptor;
-(NSUInteger)verifyWithError:(*id)arg0 ;


@end


#endif