// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHANGELOGNODE_H
#define CHANGELOGNODE_H

@class NSMutableArray;


#import "GPBMessage.h"

@interface ChangeLogNode : GPBMessage

@property (retain, nonatomic) NSMutableArray *mutationsArray;
@property (readonly, nonatomic) NSUInteger mutationsArray_Count;


+(id)descriptor;


@end


#endif