// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TOPLEVELTREECONFIGNODE_H
#define TOPLEVELTREECONFIGNODE_H

@class NSData;


#import "GPBMessage.h"

@interface TopLevelTreeConfigNode : GPBMessage

@property (nonatomic) int earliestVersion;
@property (copy, nonatomic) NSData *publicKeyBytes;


+(id)descriptor;


@end


#endif