// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIGNATURE_H
#define SIGNATURE_H

@class NSData;


#import "GPBMessage.h"

@interface Signature : GPBMessage

@property (nonatomic) int algorithm;
@property (copy, nonatomic) NSData *signature;
@property (copy, nonatomic) NSData *signingKeySpkihash;


+(id)descriptor;


@end


#endif