// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSGRAPHREGION_H
#define MPSGRAPHREGION_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "MPSGraphOperation.h"

@interface MPSGraphRegion : NSObject {
    NSMutableArray *_blocks;
    MPSGraphOperation *_parentOp;
}




-(id)appendNewBlock;
-(id)init;


@end


#endif