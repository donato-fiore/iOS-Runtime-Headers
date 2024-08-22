// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABPKALGOUTPUT_H
#define ABPKALGOUTPUT_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "ABPKAlgorithmState.h"
#import "ABPK2dSkeleton.h"
#import "ABPKSkeleton.h"

@interface ABPKAlgOutput : NSObject

@property (retain) ABPKAlgorithmState *algState; // ivar: _algState
@property (retain) ABPK2dSkeleton *detection2dSkeletonABPK; // ivar: _detection2dSkeletonABPK
@property (retain) ABPKSkeleton *liftingSkeletonABPK; // ivar: _liftingSkeletonABPK
@property (retain) ABPK2dSkeleton *rawDetection2dSkeletonABPK; // ivar: _rawDetection2dSkeletonABPK
@property (retain) NSMutableArray *rawDetection2dSkeletonABPKArray; // ivar: _rawDetection2dSkeletonABPKArray
@property (retain) ABPK2dSkeleton *registered2dSkeletonABPK; // ivar: _registered2dSkeletonABPK
@property (retain) ABPKSkeleton *retargetedSkeletonABPK; // ivar: _retargetedSkeletonABPK


-(id)initWithConfig:(id)arg0 ;


@end


#endif