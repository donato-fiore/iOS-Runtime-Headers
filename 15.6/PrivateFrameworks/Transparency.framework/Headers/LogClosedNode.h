// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LOGCLOSEDNODE_H
#define LOGCLOSEDNODE_H



#import "GPBMessage.h"

@interface LogClosedNode : GPBMessage

@property (nonatomic) int earliestVersionForNextTree;
@property (nonatomic) NSUInteger timestampMs;


+(id)descriptor;


@end


#endif