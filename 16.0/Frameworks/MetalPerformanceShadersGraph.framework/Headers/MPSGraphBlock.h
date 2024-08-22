// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSGRAPHBLOCK_H
#define MPSGRAPHBLOCK_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "MPSGraphOperation.h"
#import "MPSGraphRegion.h"

@interface MPSGraphBlock : NSObject {
    MPSGraphOperation *_terminator;
    NSMutableArray *_blockOperations;
    *void _mlirBlock;
    MPSGraphRegion *_parentRegion;
}




-(id)init;
-(id)parentOp;
-(void)addTerminatorOperation:(id)arg0 ;


@end


#endif