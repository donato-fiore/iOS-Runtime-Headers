// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIGNEDOBJECT_H
#define SIGNEDOBJECT_H

@class NSData;


#import "GPBMessage.h"
#import "Signature.h"

@interface SignedObject : GPBMessage

@property (nonatomic) BOOL hasSignature;
@property (copy, nonatomic) NSData *object;
@property (retain, nonatomic) Signature *signature;


+(id)descriptor;


@end


#endif