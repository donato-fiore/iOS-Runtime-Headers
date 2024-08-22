// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROPERSISTOPERATION_H
#define MIROPERSISTOPERATION_H

@class NSOperation;


#import "MiroMemory.h"

@interface MiroPersistOperation : NSOperation {
    BOOL _isFinished;
    BOOL _isExecuting;
}


@property (retain) MiroMemory *memory; // ivar: _memory


-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(void)start;


@end


#endif