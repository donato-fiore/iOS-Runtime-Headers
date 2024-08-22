// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDPARALLELTIMENODEBUILDINFO_H
#define PDPARALLELTIMENODEBUILDINFO_H


#import <Foundation/Foundation.h>

#import "PDAnimationTarget.h"

@interface PDParallelTimeNodeBuildInfo : NSObject

@property CGFloat delay; // ivar: mDelay
@property CGFloat duration; // ivar: mDuration
@property int iterateType; // ivar: mIterateType
@property (retain) PDAnimationTarget *target; // ivar: mTarget
@property (retain) id *value; // ivar: mValue




@end


#endif