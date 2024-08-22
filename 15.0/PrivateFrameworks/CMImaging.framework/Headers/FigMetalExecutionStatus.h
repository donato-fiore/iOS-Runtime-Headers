// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGMETALEXECUTIONSTATUS_H
#define FIGMETALEXECUTIONSTATUS_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface FigMetalExecutionStatus : NSObject

@property (nonatomic) int completedCommandBuffersCount; // ivar: _completedCommandBuffersCount
@property (retain, nonatomic) NSMutableArray *failedCommandBuffers; // ivar: _failedCommandBuffers
@property (nonatomic) NSUInteger status; // ivar: _status


-(id)init;


@end


#endif