// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPHEAD_H
#define MAPHEAD_H

@class NSData;


#import "GPBMessage.h"
#import "LogHead.h"

@interface MapHead : GPBMessage

@property (nonatomic) int application;
@property (retain, nonatomic) LogHead *changeLogHead;
@property (nonatomic) BOOL hasChangeLogHead;
@property (nonatomic) NSUInteger logBeginningMs;
@property (copy, nonatomic) NSData *mapHeadHash;
@property (nonatomic) int mapType;
@property (nonatomic) NSUInteger revision;
@property (nonatomic) NSUInteger timestampMs;
@property (nonatomic) NSUInteger treeId;


+(id)descriptor;


@end


#endif