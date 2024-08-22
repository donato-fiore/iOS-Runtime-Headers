// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LOGHEAD_H
#define LOGHEAD_H

@class NSData;


#import "GPBMessage.h"

@interface LogHead : GPBMessage

@property (nonatomic) int application;
@property (nonatomic) NSUInteger logBeginningMs;
@property (copy, nonatomic) NSData *logHeadHash;
@property (nonatomic) NSUInteger logSize;
@property (nonatomic) int logType;
@property (nonatomic) NSUInteger revision;
@property (nonatomic) NSUInteger timestampMs;
@property (nonatomic) NSUInteger treeId;


+(id)descriptor;


@end


#endif